# -*- coding: utf-8 -*-

import re
import os.path
import logging

from base import *
import sticks    #使用stick中已经完成的部分功能
import hreader
import strategy


LENGTH_THRESHOLD = 25000    #主力合约的ticks阈值超过

def ema(source,n):
    slen = len(source)
    if slen == 0:
        return 0
    if n > slen:
        n = slen
    ss = 0.0
    nss = sum(range(n+1))
    print nss
    for i in range(n):
        ss += (i+1) * source[slen+i-n]
        print i+1, source[slen+i-n],(i+1)*source[slen+i-n],ss
    return ss / nss

def em_calc(tick,pre_tick):
    n1 = tick.dorder
    n2 = n1/4
    if n1 <= 1:
        tick.em1 = tick.price
    else:
        tick.em1 = (pre_tick.em1 * (n1-1) + 2*tick.price)*1.0 / (n1+1)
    if n2 <= 1:
        tick.em2 = tick.price
    else:
        tick.em2 = (pre_tick.em2 * (n2-1) + 2*tick.price)*1.0 / (n2+1)



class TickAgent(object):#ticks数据管理,只管理一个合约,并最多测试一个Strategy
    def __init__(self,fname,data_path=hreader.DATA_PATH,pattern='\d{8}_tick.txt',tick_base=2):
        self.fname = fname
        self.data_path = data_path
        self.pattern = pattern
        self.rpattern = re.compile(pattern,re.IGNORECASE)
        self.mtickss = {}   #dict方式
        self.stickss = []   #顺序方式
        self.tick_base = 2  #最小行情单位
        self.closers = []    #已经开仓后需要追踪的closer
        self.trades = []

    def load(self):
        '''
            按顺序加载fname下的ticks数据.
            fname必须为IF1201这种格式
        '''
        sub_path = '%s%s' % (self.data_path,self.fname)
        tdates = sorted([int(os.path.splitext(name)[0][:8]) for name in os.listdir(sub_path) if self.rpattern.search(name) and name[0]!='.' and name[-1]!='~'])
        for tdate in tdates:
            cticks = hreader.read_ticks(self.fname,tdate)
            self.mtickss[tdate] = DTicks(self.fname,tdate,cticks)
            self.stickss.append(self.mtickss[tdate])

    def run(self,mystrategy,tbegin=0,tend=99999999,dfilter=lambda dt:len(dt)<LENGTH_THRESHOLD):#起止日
        self.trades = []
        env = BaseObject(holdings=False,to_open=[],to_close=[],cur_inst=None,iorder=0) #holding是当前持仓，to_open/close是当前信号
        for dt in self.stickss:
            if dt.tdate < tbegin or dt.tdate > tend or dfilter(dt):
                continue
            ##主循环
            self.run_day(env,mystrategy,dt)
        return self.trades#,env



    def run_day(self,env,mystrategy,dticks,elen=200,tlen=5,prange=10,vvol=100):#
        '''
            elen: ema的周期
            tlen: tps计数值
            prange: 等价变化值
            vvol: 等量变化值
        '''
        print 'run day:%s' % (dticks.tdate)
        mystrategy.opener.reset()
        logging.info('run day:%s' % (dticks.tdate))
        env.cur_inst = BaseObject(cur_day=BaseObject(vhigh=0,vlow=99999999),ticks=[],prices=[],vols=[],pvols=[],bids=[],asks=[],vbid=[],vask=[],deltas=[],ask_vol=DSeq(),bid_vol=DSeq(),ps_vol=DSeq(),tick_base=2)
        env.cur_inst.vps = []    #等量K, 按vvol/100手跳变
        env.cur_inst.pps = []    #等价K, 按prange/1点跳变
        env.cur_inst.tps = []    #计数K, 按tlen/5个ticks抽样
        pre_v = pre_p = 0
        dvol = 0
        pre_ema = 0
        dorder = 1
        dsum = 0.0
        pre_tick = None
        for ctick in dticks.ticks:
            ctick.iorder = env.iorder
            ctick.dorder = dorder
            dorder += 1
            dsum += ctick.price
            ctick.dsum = dsum
            ctick.davg = dsum/dorder
            env.iorder += 1
            env.cur_inst.ticks.append(ctick)
            env.cur_inst.prices.append(ctick.price)
            env.cur_inst.vols.append(ctick.dvolume)
            env.cur_inst.bids.append(ctick.bid_price)
            env.cur_inst.asks.append(ctick.ask_price)
            env.cur_inst.vbid.append(ctick.bid_volume)
            env.cur_inst.vask.append(ctick.ask_volume)
            env.cur_inst.deltas.append(ctick.ask_price-ctick.bid_price)
            env.cur_inst.ask_vol[ctick.ask_price] = ctick.ask_volume
            env.cur_inst.bid_vol[ctick.bid_price] = ctick.bid_volume
            env.cur_inst.bid_vol[ctick.ask_price] = 0
            env.cur_inst.ask_vol[ctick.bid_price] = 0
            env.cur_inst.ps_vol[ctick.price] += (ctick.dvolume-dvol)
            env.cur_inst.pvols.append((ctick.dvolume-dvol)*ctick.price)    #成交量加权
            dvol = ctick.dvolume
            if ctick.price > env.cur_inst.cur_day.vhigh:
                env.cur_inst.cur_day.vhigh = ctick.price
            if ctick.price < env.cur_inst.cur_day.vlow:
                env.cur_inst.cur_day.vlow = ctick.price
            ###ctick.ema = pre_ema * (elen-1)*1.0 / (elen+1) + ctick.price * 2.0/(elen+1)
            ###pre_ema = ctick.ema
            ###em_calc(ctick,pre_tick)
            pre_tick = ctick
            ##按ticks抽样
            if dorder % tlen == 1:
                env.cur_inst.tps.append(ctick.price)
            ##等量线
            if ctick.dvolume - pre_v > vvol:
                pv = [ctick.price] * ((ctick.dvolume - pre_v + vvol/2) / vvol)
                env.cur_inst.vps.extend(pv)
                pre_v = ctick.dvolume
            ##等价线
            if ctick.price >= pre_p + prange or ctick.price <= pre_p - prange:
                #print ctick.price,pre_p,prange
                env.cur_inst.pps.append(ctick.price)
                pre_p = ctick.price
            #先平
            #后开
            self.match_close(env,ctick)  #动作
            self.match_open(mystrategy,env,ctick)  #动作
            self.check_close(mystrategy,env,ctick)
            self.check_open(mystrategy,env,ctick)

    def check_open(self,mystrategy,env,ctick):   #
        mysignal = mystrategy.opener.check(env.cur_inst,ctick)
        if env.holdings or env.to_open: #如果持仓或即将持仓则不发后面信号，即要求一次开齐
            return 
        if mysignal[0] != 0:#发出信号
            print 'CB::break:',ctick.price,ctick.time
            base_price = mysignal[1] if mysignal[1]>0 else ctick.price
            base_stop = mysignal[2] if len(mysignal)>2 else 0
            env.to_open = [(BaseObject(
                                         tick = ctick,
                                         strategy = mystrategy,
                                         base_price = base_price,
                                         base_stop = base_stop,
                                         target_price = mystrategy.opener.calc_target_price(base_price,self.tick_base),
                                         valid_length = mystrategy.opener.get_valid_length(), #有效的ticks数
                                         direction = mystrategy.opener.direction,
                                        )
                             )]
            #print base_price,mystrategy.opener.calc_target_price(base_price,self.tick_base)

    def check_close(self,mystrategy,env,ctick):
        if env.to_close:
            return
        for closer in self.closers:
            csignal = closer.check(ctick)
            base_price = csignal[1] if csignal[1]>0 else ctick.price
            if csignal[0] != 0:    #平仓
                env.to_close=[(BaseObject(
                                     tick = ctick,
                                     opened = closer.opened,#closer的开仓信息
                                     base_price = base_price,
                                     target_price = closer.calc_target_price(base_price,self.tick_base),
                                     direction = closer.direction,
                                  )
                             )]
                break


    def match_close(self,env,ctick):
        #close必须成交
        if not env.to_close:
            return
        if env.to_close[0].direction == SHORT:  #以较差价格成交, 滑点不利
            pclose = ctick.price if ctick.price <= ctick.bid_price else ctick.bid_price
        else:
            pclose = ctick.price if ctick.price >= ctick.ask_price else ctick.ask_price
        opened = env.to_close[0].opened
        mytrade = Trade(opened.tick,opened.base_price,opened.price,opened.deal_tick,ctick,pclose,opened.direction)
        self.trades.append(mytrade)
        env.to_close = []
        self.closers = []
        env.holdings = False


    def match_open(self,mystrategy,env,ctick):
        if not env.to_open:
            return
        topen = env.to_open[0]
        if ctick.iorder > topen.tick.iorder+topen.valid_length:    #有效期过
            env.to_open=[]
            return 
        dealed = False
        if topen.direction == SHORT:  #
            mk_price = ctick.price if ctick.price <= ctick.bid_price else ctick.bid_price
            if topen.target_price < mk_price:   #成交
                dealed = True
        else:   
            mk_price = ctick.price if ctick.price >= ctick.ask_price else ctick.ask_price
            if topen.target_price > mk_price:  #成交
                dealed = True
        if dealed == True:
            topen.price = mk_price
            topen.deal_tick = ctick
            self.closers = [closer(env.cur_inst,topen.base_price,opened=topen,tick_base=self.tick_base) for closer in mystrategy.closers]
            env.holdings = True
            env.to_open = []

    def get_dticks(self,tdate):
        return self.mtickss[tdate] if tdate in self.mtickss else None


class Trade(object):
    def __init__(self,open_tick,base_price,open_price,open_deal_tick,close_tick,close_price,direction,tax=2):
        self.open_tick = open_tick
        self.open_deal_tick = open_deal_tick
        self.close_tick = close_tick
        self.base_price = base_price
        self.open_price = open_price
        self.close_price = close_price
        self.direction = direction
        self.tax = tax

    def get_profit(self):
        delta = self.close_price - self.open_price
        return delta - self.tax if self.direction==LONG else -delta - self.tax

    def get_holding_length(self):
        return self.close_tick.iorder - self.open_tick.iorder

    @staticmethod
    def print_info(trades):
        sprofit = 0
        stimes = 0
        for trade in trades:
            print '%s::open:%s-%s-%s:%s-%s-%s::%s::close:%s:%s' % (trade.get_profit(),trade.open_tick.date,trade.open_tick.time%1000000,trade.open_tick.msec,trade.open_tick.iorder,trade.base_price,trade.open_price,trade.open_deal_tick.time%1000000,trade.close_tick.time%1000000,trade.close_price)
            sprofit += trade.get_profit()
            stimes += 1
        print 'times=%s,profit=%s' %(stimes,sprofit)



class DTicks(object):#日tick结构
    def __init__(self,fname,tdate,ticks):
        self.fname = fname
        self.tdate = tdate
        self.ticks = ticks

    def __len__(self):
        return len(self.ticks)

    def prepare(self):
        pass

class DSeq(object):#价格结构
    '''
        只支持[M:N]读取，不支持写
    '''
    def __init__(self,ibegin=0,iend=199999):
        self.data = [0]*(iend-ibegin)
        self.ibegin = ibegin
        self.iend = iend
        if iend < ibegin:
            raise IndexError('begin(%s)> end(%s)' % (ibegin,iend))

    def __getitem__(self,i):
        if isinstance(i,slice):
            if i.start < self.ibegin or i.stop>=self.iend:
                raise IndexError('[%s:%s) not in [%s,%s)' % (i.start,i.stop,self.ibegin,self.iend))
            return self.data[i.start-self.ibegin:i.stop-self.ibegin:i.step]
        if i < self.ibegin or i>=self.iend:
            raise IndexError('%s not in [%s,%s)' % (i,self.ibegin,self.iend))
        return self.data[i-self.ibegin]

    def __setitem__(self,i,v):
        if isinstance(i,slice):
            raise NotImplementedError('slice set unsupported')
        if i < self.ibegin or i>=self.iend:
            raise IndexError('%s not in [%s,%s)' % (i,self.ibegin,self.iend))
        self.data[i-self.ibegin] = v

    def __delitem__(self,i):    #不删除，只设为0
        if i < self.ibegin or i>=self.iend:
            raise IndexError('%s not in [%s,%s)' % (i,self.ibegin,self.iend))
        self.data[i-self.ibegin] = 0

    def __repr__(self):
        if self.iend < self.ibegin+100:
            ss = '%s' % (self.data)
            return '[%s]' % (ss[1:-1],)
        ss = '%s' % (self.data[:100])
        return '[%s...]' % (ss[1:-1],)

    def __len__(self):
        return len(self.data)

    def first_index(self):
        return self.ibegin

    def last_index(self):
        return self.iend

def tp_statistics(rtt,threshold=0):#rtt为Agent实例
    rev = []
    for st in rtt.stickss:
        if len(st) > 25000:
            prices = [tick.price for tick in st.ticks]
            p1=peaks2(prices)
            ss,ii = diff_sum(p1,threshold)
            waves = ss*1.0/ii
            rev.append((st.tdate,ii,ss,waves))
    return rev

def tp_statistics2(rtt,threshold=0):#rtt为Agent实例
    rev = []
    for st in rtt.stickss:
        if len(st) > 25000:
            prices = [tick.price for tick in st.ticks]
            p1=peaks2(prices)
            ups,downs,zeros = diff_cat(p1,threshold)
            uwaves = sum(ups) *1.0 / len(ups)
            dwaves = sum(downs) *1.0 / len(downs)            
            rev.append((st.tdate,uwaves,len(ups),dwaves,len(downs),len(zeros)))
    return rev

def tp_statistics3(rtt,threshold=0):#rtt为Agent实例. 求振幅分布
    rev = []
    for st in rtt.stickss:
        if len(st) > 25000:
            prices = [tick.price for tick in st.ticks]
            p1=peaks2(prices)
            cats = diff_cat2(p1,threshold)
            rev.append((st.tdate,cats))
            ss = sum(cats)
            print st.tdate,[ c*1000/ss for c in cats]
    return rev

#python3.2之后才有
import operator
def accumulate(iterable, func=operator.add):
    'Return running totals'
    # accumulate([1,2,3,4,5]) --> 1 3 6 10 15
    # accumulate([1,2,3,4,5], operator.mul) --> 1 2 6 24 120
    it = iter(iterable)
    total = next(it)
    yield total
    for element in it:
        total = func(total, element)
        yield total

def tp_statistics4(rtt,threshold=0):#rtt为Agent实例. 求振幅分布
    rev = []
    for st in rtt.stickss:
        if len(st) > 25000:
            prices = [tick.price for tick in st.ticks]
            p1=peaks2(prices)
            cats = diff_cat3(p1,threshold)
            rev.append((st.tdate,cats))
            #ss = sum(cats)
            #print st.tdate,[ c*1000/ss for c in cats]
    ll = len(rev[0][1])
    ss = [0]*ll
    for r1 in rev:
        rr = r1[1]
        for j in range(ll):
            ss[j] += rr[j]
    sss = sum(ss)
    avg_ss = [s*1000/sss for s in ss]
    percent_avg = list(accumulate(avg_ss))
    return ss,avg_ss,percent_avg


def tp_statistics5(rtt,threshold=0):#rtt为Agent实例. 求振幅分布
    rev = []
    for st in rtt.stickss:
        if len(st) > 25000:
            prices = [tick.price for tick in st.ticks]
            p1=peaks2(prices)
            ucats,dcats = diff_cat4(p1,threshold)
            rev.append((st.tdate,ucats,dcats))
            #ss = sum(cats)
            #print st.tdate,[ c*1000/ss for c in cats]
    ull = len(rev[0][1])
    uss = [0]*ull
    dll = len(rev[0][1])
    dss = [0]*dll
    for r1 in rev:
        urr = r1[1]
        drr = r1[2]
        for j in range(ull):
            uss[j] += urr[j]
            dss[j] += drr[j]
    usss = sum(uss)
    dsss = sum(dss)
    uavg_ss = [s*1000/usss for s in uss]
    davg_ss = [s*1000/dsss for s in dss]
    upercent_avg = list(accumulate(uavg_ss))
    dpercent_avg = list(accumulate(davg_ss))
    return uss,uavg_ss,upercent_avg,dss,davg_ss,dpercent_avg


def simulate_break(avg_ss,trigger=20,lost_base=10):
    '''
        模拟计算
        为简单计，未考虑反向概率，所以当幅度小于显著值(10左右)时会有严重偏差，因为此时无法判断是会被反向吸收的波动，还是正常的峰谷
    '''
    ii = trigger/2 - 1
    ilost = lost_base/10
    ss = 0
    for i in range(ii,len(avg_ss)):
        ss += ((i-ii)*2-lost_base)*avg_ss[i]
    return ss
    
def simulate_reverse(avg_ss,trigger=20,lost_base=10,gain_stop=20):
    '''
        模拟计算, 反转策略
        为简单计，未考虑反向概率
        根据gain_stop可以计算出平均收益
            如gain_stop=20
            则小于20以下的均为止损(当然可以设定超过10时止损拉到成本位置)
            >=20的幅度都为20
            分布如下时：[4, 7, 9, 35, 113, 209, 311, 414, 506, 583, 646, 703, 754, 792, 825,873, 891, 905, 917, 927, 935, 941, 947, 951, 956, 959, 961, 963, 965]
            <20的概率为 0.583, 止损为1, 则为0.5830
            >20的概率为 0.417, 获益为2,则为0.8340
            总获益为0.2510, 
        [12,6,8]
        [12,8,10]

    '''
    ii = trigger/2 - 1
    ilost = lost_base/2
    ss = 0
    gain_base = calc_sprofit(gain_stop,lost_base)
    print gain_base
    for i in range(ii,len(avg_ss)):
        if i - ii <= ilost:
            ss += (gain_base - (i-ii)*0.2)* avg_ss[i]/1000.0 
        else:
            ss -= lost_base/10 * avg_ss[i]/1000.0
    return ss

distribution = [4, 7, 9, 35, 113, 209, 311, 414, 506, 583, 646, 703, 754, 792, 825,873, 891, 905, 917, 927, 935, 941, 947, 951, 956, 959, 961, 963, 965]

def calc_sprofit(gain_stop,lost_base):
    '''
        当lost_base = 10时，gain_stop=10最佳
          lost_base>10时，gain_stop=8最佳
        这里简化了计算，假设每次止损都一样
    '''
    ig = gain_stop/2 - 1
    pl = distribution[ig] / 1000.0
    pg = 1 - pl
    print pl,pg
    return (pg * gain_stop-pl * lost_base)/10


def peaks(prices):
    #只能求第一次峰谷，迭代无效果
    peaks = []
    fpeaks = 0
    for i in range(2,len(prices)):
        if prices[i-1] > prices[i-2] and prices[i-1] > prices[i]:
            if fpeaks == 1: #高点之后的高点
                peaks[-1] = prices[i-1]
            else:
                peaks.append(prices[i-1])
            fpeaks = 1
        if prices[i-1] < prices[i-2] and prices[i-1] < prices[i]:
            if fpeaks == -1: #低后之低
                peaks[-1] = prices[i-1]
            else:
                peaks.append(prices[i-1])
            fpeaks = -1
    return peaks
        
def peaks2(prices):
    ''' 
        用于测试每日波动是否有利可图
        prices = [tick.price for tick in rtt.stickss[0].ticks]
        p1=sticks2.peaks2(prices)
        ss = diff_sum(p1)
        ss*1.0/(len(p1)-1)
        这个算法并不精确
    '''
    tpeaks = []
    bpeaks = []
    j = 0
    for i in range(2,len(prices)):
        if prices[i-1] == prices[i]:
            j += 1
            continue
        if prices[i-1] > prices[i-2-j] and prices[i-1] > prices[i]:
            tpeaks.append((i-1-j,prices[i-1],1))
        if prices[i-1] < prices[i-2-j] and prices[i-1] < prices[i]:
            bpeaks.append((i-1-j,prices[i-1],-1))
        if prices[i-1] != prices[i]:
            j = 0
    tpeaks2 = []
    bpeaks2 = []
    for i in range(2,len(tpeaks)):
        if tpeaks[i-1][1] > tpeaks[i-2][1] and tpeaks[i-1][1] >= tpeaks[i][1]:
            tpeaks2.append(tpeaks[i-1])
    for i in range(2,len(bpeaks)):
        if bpeaks[i-1][1] < bpeaks[i-2][1] and bpeaks[i-1][1] <= bpeaks[i][1]:
            bpeaks2.append(bpeaks[i-1])
    tpeaks3 = []
    bpeaks3 = []
    for i in range(2,len(tpeaks2)):
        if tpeaks2[i-1][1] > tpeaks2[i-2][1] and tpeaks2[i-1][1] >= tpeaks2[i][1]:
            tpeaks3.append(tpeaks2[i-1])
    for i in range(2,len(bpeaks2)):
        if bpeaks2[i-1][1] < bpeaks2[i-2][1] and bpeaks2[i-1][1] <= bpeaks2[i][1]:
            bpeaks3.append(bpeaks2[i-1])
    #peaks = tpeaks2 + bpeaks2
    peaks = tpeaks3 + bpeaks3
    ff = 0
    pps = []
    for p in sorted(peaks):
        if p[2] != ff:
            #pps.append((p[0],p[1],p[2]))
            #pps.append(p[1])
            pps.append(p)
            ff = p[2]
        #elif (ff == 1 and p[1] > pps[-1]) or (ff == -1 and p[1] < pps[-1]):
        elif (ff == 1 and p[1] > pps[-1][1]) or (ff == -1 and p[1] < pps[-1][1]):
            #pps[-1] = p[1]
            pps[-1] = p
    return [ p[1] for p in pps]
    #return pps
    #return sorted(peaks),pps
        
def diff_sum(prices,threshold=0):
    ss = 0
    ii = 0
    pre = prices[0]
    for x in prices:
        delta = x - pre if x >= pre else pre - x
        if delta >= threshold:
            ss += delta
            ii += 1
        pre = x
    return ss,ii

def diff_cat(prices,threshold=0):
    ups = []
    downs = []
    zeros = []
    pre = prices[0]
    for x in prices:
        if x > pre:
            ups.append(x-pre)
        elif x < pre:
            downs.append(pre-x)
        else:
            zeros.append(0)
        pre = x
    return ups,downs,zeros

def diff_cat2(prices,threshold=0):
    cats = [0]*20
    pre = prices[0]
    for x in prices:
        delta = x - pre if x >= pre else pre - x
        cats[delta/10] += 1
        pre = x
    return cats

def diff_cat3(prices,threshold=0):
    cats = [0]*200
    pre = prices[0]
    for x in prices:
        delta = x - pre if x >= pre else pre - x
        cats[delta/2] += 1
        pre = x
    return cats

def diff_cat4(prices,threshold=0):
    ucats = [0]*200
    dcats = [0]*200
    pre = prices[0]
    for x in prices:
        delta = x - pre if x >= pre else pre - x
        if x > pre:
            ucats[delta/2] += 1
        elif x<pre:
            dcats[delta/2] += 1
        pre = x
    return ucats,dcats


class T_LONG(strategy.BREAK):
    direction = LONG
    def __init__(self,bid_ticks=3,valid_length=60):
        self.bid_ticks = bid_ticks  #买入超价
        self.valid_length = valid_length

    def calc_target_price(self,base_price,tick_base):
        return base_price + tick_base * self.bid_ticks

    def get_valid_length(self):
        return self.valid_length


    def check(self,data,ctick):
        return (False,0)


class T_SHORT(strategy.BREAK):
    direction = SHORT
    def __init__(self,ask_ticks=3,valid_length=60):
        self.ask_ticks = ask_ticks  #卖出超价
        self.valid_length = valid_length

    def calc_target_price(self,base_price,tick_base):
        return base_price - tick_base * self.ask_ticks

    def get_valid_length(self):
        return self.valid_length

    def check(self,data,ctick):
        return (False,0)    

class T_LONG_DELTA(T_LONG):
    def __init__(self,delta=10,bid_ticks=3,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.delta = delta
        self.base_line = 99999999

    def check(self,data,ctick):
        if ctick.min1 <= 915 or ctick.min1 >=1500:
            return (False,0)
        if ctick.price >self.base_line:
            self.base_line = 0
            #return (True,ctick.price,ctick.price+20)    #(触发标志、触发价、止损)
            return (True,ctick.price,ctick.price-20)    #(触发标志、触发价、止损)
        self.cur_tick = ctick
        if ctick.price < data.prices[-2] - 16 and ctick.ask_price - ctick.bid_price > 2 and data.bids[-2] - ctick.bid_price<10:
            self.base_line = data.prices[-2] + 10
        #if ctick.ask_price - ctick.bid_price > self.delta:
        #    return (True,ctick.ask_price,ctick.ask_price - 20)
        return (False,0)

class T_LONG_M(T_LONG):
    def __init__(self,bid_ticks=3,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999

    def check(self,data,ctick):
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)
        s60 = 1 if ctick.price > data.prices[-120] else 0
        m60 = sum(data.prices[-120:]) / 120
        pm60 = sum(data.prices[-121:-1]) / 120
        if ctick.price > m60 and data.prices[-2] < pm60 and s60 > 0:
            print ctick.time,ctick.price,m60,s60,data.prices[-120]
            return (True,ctick.price,ctick.price-20)    #(触发标志、触发价、止损)
        return (False,0)

class T_LONG_H(T_LONG):
    def __init__(self,bid_ticks=3,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.last_big = 0
        self.count = 0

    def check(self,data,ctick):
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)
        ml = 10
        bids = sum(data.bid_vol[ctick.bid_price-ml:ctick.bid_price])
        asks = sum(data.ask_vol[ctick.ask_price:ctick.ask_price+ml])
        if ctick.price > data.prices[-2]:
            self.count += 1
        elif ctick.price < data.prices[-2] and ctick.price < data.prices[-3]:
            self.count = 0
        if self.count == 3 and ctick.price == max(data.prices[-30:]):
            return (True,ctick.price,ctick.price-15)    #(触发标志、触发价、止损)
        if ctick.bid_price >= self.last_big:
            self.last_big = 0
        return (False,0)

class T_LONG_H2(T_LONG):
    def __init__(self,bid_ticks=3,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.last_big = 0

    def check(self,data,ctick):
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)
        ml = 10
        bids = sum(data.bid_vol[ctick.bid_price-ml:ctick.bid_price])
        asks = sum(data.ask_vol[ctick.ask_price:ctick.ask_price+ml])
        if ctick.ask_volume > 100:
            self.last_big = ctick.ask_price
        if ctick.bid_price == data.bids[-2] and ctick.bid_price == data.bids[-3] and ctick.bid_volume > data.vbid[-2] and data.vbid[-2] > data.vbid[-3] and ctick.ask_price == data.asks[-2] and ctick.ask_volume < data.vask[-2] and ctick.bid_volume > ctick.ask_volume:# and data.vask[-2] < data.vask[-3]:
            return (True,ctick.price,ctick.price-6)    #(触发标志、触发价、止损)
        '''
        if ctick.bid_price == self.last_big and self.last_big >= max(data.prices[-30:]) and bids>asks and ctick.ask_volume<100:#data.ps_vol[self.last_big]>500:#bids>asks:# and ctick.ask_volume < 10:
            #print ctick.ask_price,ctick.ask_volume,ctick.time,self.last_big
            self.last_big = 0
            sbid = data.bid_vol[ctick.bid_price]
            cprice = ctick.bid_price - 2
            while sbid < 60:
                sbid += data.bid_vol[cprice]
                cprice -= 2
            if cprice < ctick.price -10:
                cprice = ctick.price-10
            #return (True,ctick.price,ctick.price-6)    #(触发标志、触发价、止损)
            return (True,ctick.price,cprice)    #(触发标志、触发价、止损)
        '''
        if ctick.bid_price >= self.last_big:
            self.last_big = 0
        return (False,0)

def find_lpos(seq,v):
    '''
        正向排序的数列中找到插入位
    '''
    sl = len(seq)
    if sl == 0:
        return 0
    i = -1
    while i < sl and v > seq[i+1]:
        i += 1
    return i
    


class T_LONG_COUNT(T_LONG):
    def __init__(self,bid_ticks=3,valid_length=10,plen=5,olen=12):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pstep = []
        self.istep = []
        self.cstep = 0  #当前价格在plen中的位置,须减一为索引号
        self.maxc = 0
        self.plen = plen
        self.olen = olen
        self.pre_bottom=0

    def reset(self):
        self.cstep = 0
        self.pstep = []
        self.istep = []
        self.pre_bottom=0

    def check(self,data,ctick):
        #if ctick.min1 > 920:
        #    return (False,0)
        if len(data.prices) < 2:
            return (False,0)
        ibase = 0 if len(self.pstep)<self.plen else -self.plen
        if self.cstep==0:
            if ctick.price>data.prices[-2]:   #初始底部确认
                self.cstep = 2
                self.pre_bottom = self.pstep[0] if self.pstep else 0
                self.pstep=[data.prices[-2],ctick.price]
                self.istep = [ctick.iorder-1,ctick.iorder]

            else:
                pass
        elif ctick.price < self.pstep[ibase]: #破底或回退足够级数
        #elif ctick.price < self.pstep[0]: #破底
            self.pre_bottom = self.pstep[0]
            self.cstep = 0
            #self.pstep = []
            #self.istep = []
        else:   #cstep>=1 and ctick.price >= self.pstep[0]:
            if ctick.price > self.pstep[-1]:
                self.pstep.append(ctick.price)
                self.istep.append(ctick.iorder)
                self.cstep = len(self.pstep)
            else:
                for i in range(len(self.pstep)):    #找到当前位置
                    if ctick.price <= self.pstep[i]:
                        break
                if ctick.price < self.pstep[i]:
                    self.pstep.insert(i,ctick.price)
                    self.istep.insert(i,ctick.iorder)
                self.cstep = i+1
                self.istep[self.cstep-1]=ctick.iorder
        #if self.cstep > self.maxc:
            #self.maxc = self.cstep
            #print self.maxc
        #print ctick.iorder,ctick.price,self.cstep
        #if self.cstep==self.plen and ctick.iorder - self.istep[0] < self.olen:  #(4,5),(5,8-12) (6,15-25)
        #if self.cstep==self.plen and ctick.iorder - self.istep[-self.plen] < self.olen:
        #    print 'bottom:',ctick.time,self.istep[0],self.pstep[0],self.pre_bottom,ctick.iorder
        
        if ctick.min1 <= 915 or ctick.min1 >1500:
        #if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)

        if self.cstep==self.plen and self.cstep==len(self.pstep) and ctick.iorder - self.istep[ibase] < self.olen and ctick.price == max(data.prices[-30:]) and self.pstep[0] >= self.pre_bottom:
            # and self.pstep[0]>self.pre_bottom:#and ctick.ask_volume < 10 and ctick.dvolume - data.vols[-9]>50:
            #bline = self.pstep[0] if self.pstep[0] > ctick.price-10 else ctick.price-10
            #bline = self.pstep[-self.plen]
            bline = self.pstep[ibase]
            #bline = bline if bline > ctick.price - 20 else ctick.price-20
            #print 'break:',ctick.time,ctick.price,bline
            return (True,ctick.price,bline)    #(触发标志、触发价、止损)
        return (False,0)

class T_SHORT_COUNT(T_SHORT):
    def __init__(self,bid_ticks=3,valid_length=10,plen=6,olen=20):
        T_SHORT.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pstep = []
        self.istep = []
        self.cstep = 0  #当前价格在plen中的位置,须减一为索引号
        self.maxc = 0
        self.plen = plen
        self.olen = olen
        self.pre_top=0

    def reset(self):
        self.cstep = 0
        self.pstep = []
        self.istep = []
        self.pre_top=0

    def check(self,data,ctick):
        #if ctick.min1 > 920:
        #    return (False,0)
        if len(data.prices) < 2:
            return (False,0)
        ibase = 0 if len(self.pstep)<self.plen else -self.plen
        if self.cstep==0:
            if ctick.price<data.prices[-2]:   #初始顶部确认
                self.cstep = 2
                self.pre_top = self.pstep[0] if self.pstep else 0
                self.pstep=[data.prices[-2],ctick.price]
                self.istep = [ctick.iorder-1,ctick.iorder]

            else:
                pass
        elif ctick.price > self.pstep[ibase]: #破底或回退足够级数
        #elif ctick.price < self.pstep[0]: #破底
            self.pre_top = self.pstep[0]
            self.cstep = 0
            #self.pstep = []
            #self.istep = []
        else:   #cstep>=1 and ctick.price <= self.pstep[0]:
            if ctick.price < self.pstep[-1]:
                self.pstep.append(ctick.price)
                self.istep.append(ctick.iorder)
                self.cstep = len(self.pstep)
            else:
                for i in range(len(self.pstep)):    #找到当前位置
                    if ctick.price >= self.pstep[i]:
                        break
                if ctick.price > self.pstep[i]:
                    self.pstep.insert(i,ctick.price)
                    self.istep.insert(i,ctick.iorder)
                self.cstep = i+1
                self.istep[self.cstep-1]=ctick.iorder
        
        if ctick.min1 <= 915 or ctick.min1 >1500:
        #if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)

        if self.cstep==self.plen and self.cstep==len(self.pstep) and ctick.iorder - self.istep[ibase] < self.olen and ctick.price == min(data.prices[-30:]) and self.pstep[0] <= self.pre_top:
            # and self.pstep[0]>self.pre_top:#and ctick.ask_volume < 10 and ctick.dvolume - data.vols[-9]>50:
            #bline = self.pstep[0] if self.pstep[0] > ctick.price-10 else ctick.price-10
            #bline = self.pstep[-self.plen]
            bline = self.pstep[ibase]
            #bline = bline if bline > ctick.price - 20 else ctick.price-20
            #print 'break:',ctick.time,ctick.price,bline
            return (True,ctick.price,bline)    #(触发标志、触发价、止损)
        return (False,0)



class T_SHORT_RCOUNT(T_SHORT):
    def __init__(self,bid_ticks=0,valid_length=10,plen=2,olen=12):
        T_SHORT.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pstep = []
        self.istep = []
        self.cstep = 0  #当前价格在plen中的位置,须减一为索引号
        self.maxc = 0
        self.plen = plen
        self.olen = olen
        self.pre_bottom=0

    def reset(self):
        self.cstep = 0
        self.pstep = []
        self.istep = []
        self.pre_bottom=0

    def check(self,data,ctick):
        #if ctick.min1 > 920:
        #    return (False,0)
        if len(data.prices) < 2:
            return (False,0)
        ibase = 0 if len(self.pstep)<self.plen else -self.plen
        if self.cstep==0:
            if ctick.price>data.prices[-2]:   #初始底部确认
                self.cstep = 2
                self.pre_bottom = self.pstep[0] if self.pstep else 0
                self.pstep=[data.prices[-2],ctick.price]
                self.istep = [ctick.iorder-1,ctick.iorder]

            else:
                pass
        elif ctick.price < self.pstep[ibase]: #破底或回退足够级数
        #elif ctick.price < self.pstep[0]: #破底
            self.pre_bottom = self.pstep[0]
            self.cstep = 0
            #self.pstep = []
            #self.istep = []
        else:   #cstep>=1 and ctick.price >= self.pstep[0]:
            if ctick.price > self.pstep[-1]:
                self.pstep.append(ctick.price)
                self.istep.append(ctick.iorder)
                self.cstep = len(self.pstep)
            else:
                for i in range(len(self.pstep)):    #找到当前位置
                    if ctick.price <= self.pstep[i]:
                        break
                if ctick.price < self.pstep[i]:
                    self.pstep.insert(i,ctick.price)
                    self.istep.insert(i,ctick.iorder)
                self.cstep = i+1
                self.istep[self.cstep-1]=ctick.iorder
        #if self.cstep > self.maxc:
            #self.maxc = self.cstep
            #print self.maxc
        #print ctick.iorder,ctick.price,self.cstep
        #if self.cstep==self.plen and ctick.iorder - self.istep[0] < self.olen:  #(4,5),(5,8-12) (6,15-25)
        #if self.cstep==self.plen and ctick.iorder - self.istep[-self.plen] < self.olen:
        #    print 'bottom:',ctick.time,self.istep[0],self.pstep[0],self.pre_bottom,ctick.iorder
        
        if ctick.min1 <= 915 or ctick.min1 >1500:
        #if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)

        if self.cstep==self.plen and self.cstep==len(self.pstep):# and ctick.iorder - self.istep[ibase] < self.olen:# and ctick.price == max(data.prices[-30:]): #and self.pstep[0] >= self.pre_bottom:
            # and self.pstep[0]>self.pre_bottom:#and ctick.ask_volume < 10 and ctick.dvolume - data.vols[-9]>50:
            #bline = self.pstep[0] if self.pstep[0] > ctick.price-10 else ctick.price-10
            #bline = self.pstep[-self.plen]
            #bline = self.pstep[ibase]
            #bline = bline if bline > ctick.price - 20 else ctick.price-20
            #print 'break:',ctick.time,ctick.price,bline
            bline = ctick.price + 10
            return (True,ctick.price,bline)    #(触发标志、触发价、止损)
        return (False,0)

class T_LONG_SAVE(T_LONG):
    '''
        保存
    '''
    def __init__(self,bid_ticks=5,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pre_m1 = 0
        self.pre_m2 = 0
        self.saved = False

    def reset(self):
        pass

    def check(self,data,ctick):
        if ctick.min1 > 1500 and not self.saved:
            #fh = open('d:/work/temp/t01.csv','w+')
            #for v in data.tps:
            #    print >> fh,v
            #fh = open('d:/work/temp/p01.csv','w+')
            #for v in data.pps:
            #    print >> fh,v
            fh = open('d:/work/temp/v01.csv','w+')
            for v in data.vps:
                print >> fh,v
            fh.close()
            self.saved = True
        return False,0,0



class T_LONG_EC(T_LONG):
    ##  EMA通道
    ##
    def __init__(self,bid_ticks=3,valid_length=10,rlen=10,elen=20):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.rlen = rlen
        self.elen = elen
        self.ema = 0
        self.pre_rlow = 0

    def reset(self):
        self.ema = 0
        self.pre_rlow = 0

    def check(self,data,ctick):
        if ctick.min1 <= 915 or ctick.min1 >=1500:
            return (False,0)
        if len(data.prices) < 2:
            return (False,0)
        elif self.ema == 0:
            self.ema = data.prices[-2]

        #self.ema = self.ema * (self.elen-1) / (self.elen+1) + ctick.price * 2/(self.elen+1)
        #self.ema = ctick.ema
        hl = max(data.prices[-self.rlen:]) -min(data.prices[-self.rlen:])
        rlow = ctick.ema - hl
        print ctick.time,ctick.price,ctick.ema,hl,rlow,self.pre_rlow,data.prices[-2]

        if data.prices[-2] < self.pre_rlow and ctick.price >= rlow:
            bline = ctick.price - 10
            self.pre_rlow = rlow
            return (True,ctick.price,bline)    #(触发标志、触发价、止损)
        self.pre_rlow = rlow
        return (False,0)


class T_SHORT_DELTA(T_SHORT):
    def __init__(self,delta=10,ask_ticks=3,valid_length=30):
        T_SHORT.__init__(self,ask_ticks,valid_length)
        self.delta = delta
        self.base_line = 0

    def check(self,data,ctick):
        if ctick.min1 <= 915 or ctick.min1 >=1500:
            return (False,0)
        if ctick.price <self.base_line:# and data.prices[-2] >= self.base_line:
            self.base_line = 0
            #return (True,ctick.price,ctick.price+20)    #(触发标志、触发价、止损)
            return (True,ctick.price,ctick.price+20)    #(触发标志、触发价、止损)
        self.cur_tick = ctick
        if ctick.price > data.prices[-2] + 11 and ctick.ask_price - ctick.bid_price > 2 and ctick.ask_price - data.asks[-2]<10:
            self.base_line = data.prices[-2] - 10
        #if ctick.ask_price - ctick.bid_price > self.delta:
        #    return (True,ctick.ask_price,ctick.ask_price - 20)
        return (False,0)


class T_SHORT_CHANNEL(T_SHORT):
    def __init__(self,delta=10,ask_ticks=3,valid_length=30):
        T_SHORT.__init__(self,ask_ticks,valid_length)
        self.delta = delta
        self.base_line = 0
        self.pps = []

    def check(self,data,ctick):
        if ctick.min1 <= 915 or ctick.min1 >=1500:
            return (False,0)
        if ctick.price <self.base_line:# and data.prices[-2] >= self.base_line:
            self.base_line = 0
            #return (True,ctick.price,ctick.price+20)    #(触发标志、触发价、止损)
            return (True,ctick.price,ctick.price+20 if len(self.pps)<2 else self.pps[-2])    #(触发标志、触发价、止损)
        self.cur_tick = ctick
        if ctick.price > data.prices[-2] + 3:
            if len(self.pps)>0 and ctick.price < self.pps[-1]:
                self.pps = []
            self.pps.append(ctick.price)
        if ctick.price > data.prices[-2] + 11 and ctick.ask_price - ctick.bid_price > 2 and ctick.ask_price - data.asks[-2]<10:
            self.base_line = data.prices[-2] - 10
        #if ctick.ask_price - ctick.bid_price > self.delta:
        #    return (True,ctick.ask_price,ctick.ask_price - 20)
        return (False,0)


class T_SHORT_BREAK(T_SHORT):
    def __init__(self,delta=600,ask_ticks=3,valid_length=30):
        T_SHORT.__init__(self,ask_ticks,valid_length)
        self.delta = delta
        self.base_line = 0
        self.pps = []

    def check(self,data,ctick):
        if ctick.min1 <= 915 or ctick.min1 >=1500:
            return (False,0)
        ra = max(data.asks[-30:]) - min(data.bids[-30:])
        if ctick.price <self.base_line:# and data.prices[-2] >= self.base_line:
            self.base_line = 0
            #return (True,ctick.price,ctick.price+ra/3)    #(触发标志、触发价、止损)
            return (True,ctick.price,ctick.price+50)    #(触发标志、触发价、止损)

        self.cur_tick = ctick
        self.base_line = min(data.prices[-self.delta:]) - 3#ra/3
        #if ctick.ask_price - ctick.bid_price > self.delta:
        #    return (True,ctick.ask_price,ctick.ask_price - 20)
        return (False,0)


fh = open('d:/work/temp/dd2.txt','w+')

class T_LONG_M2(T_LONG):
    '''
        双均线多头
    '''
    def __init__(self,bid_ticks=5,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pre_m2 = 0
        self.pre_dm = 0

    def reset(self):
        pass

    def check(self,data,ctick):
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)
        tick = ctick
        n2 = tick.dorder/4
        m2 = sum(data.prices[-n2:])*1.0 / n2
        fire_flag,fire_price,stop_price = False,0,0
        #if ctick.min1 < 1510:
        #    print >>fh,tick.time,tick.msec,n2,self.pre_m2,self.pre_dm,m2,tick.davg,tick.price
        if ctick.min1 > 945 and ctick.min1 < 1459 and self.pre_m2 < self.pre_dm+2 and m2 >= ctick.davg+2:
            fire_flag,fire_price,stop_price = True,ctick.price,ctick.price-200    #(触发标志、触发价、止损)
            print 'open',tick.sec,self.pre_m2,self.pre_dm,m2,tick.davg,tick.price
        self.pre_m2 = m2
        self.pre_dm = ctick.davg
        return fire_flag,fire_price,stop_price

class T_LONG_M2_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        print opened.tick.time,opened.base_price,self.base_stop
        self.pre_m2 = 0
        self.pre_dm = 0

    def check(self,tick):
        n2 = tick.dorder/4
        m2 = sum(self.data.prices[-n2:])*1.0 / n2
        sflag,cflag,sprice = False,False,0
        #if tick.price < self.get_base_line() or tick.min1>1500:
        #print 'check',tick.min1
        if tick.min1 > 1500:
            sflag = True
            sprice = tick.price
            print 'close',tick.time,self.pre_m2,self.pre_dm,m2,tick.davg,tick.price
        elif self.pre_m2 > self.pre_dm-2 and m2 <= tick.davg-2:
            sflag = True
            sprice = tick.price
            print 'close',tick.time,self.pre_m2,self.pre_dm,m2,tick.davg,tick.price
        self.pre_m2 = m2
        self.pre_dm = tick.davg
        return sflag,sprice,cflag


class T_LONG_EM2(T_LONG):
    '''
        双均线多头
    '''
    def __init__(self,bid_ticks=5,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pre_m1 = 0
        self.pre_m2 = 0

    def reset(self):
        pass

    def check(self,data,ctick):
        tick = ctick

        fire_flag,fire_price,stop_price = False,0,0
        #if ctick.min1 < 1510:
        #    print >>fh,tick.time,tick.msec,n2,self.pre_m2,self.pre_dm,m2,tick.davg,tick.price
        #print tick.time,self.pre_m1,self.pre_m2,tick.em1,tick.em2
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            pass
        elif ctick.min1 > 945 and ctick.min1 < 1459 and self.pre_m2 < self.pre_m1+2 and ctick.em2 >= ctick.em1+2:
            fire_flag,fire_price,stop_price = True,ctick.price,ctick.price-30    #(触发标志、触发价、止损)
            print 'open',tick.sec,self.pre_m1,self.pre_m2,tick.em1,tick.em2,tick.price
        self.pre_m1 = tick.em1
        self.pre_m2 = tick.em2
        return fire_flag,fire_price,stop_price

class T_LONG_EM2_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        print opened.tick.time,opened.base_price,self.base_stop
        self.pre_m1 = 0
        self.pre_m2 = 0

    def check(self,tick):
        sflag,cflag,sprice = False,False,0
        if tick.price < self.get_base_line() or tick.min1>1500:
        #print 'check',tick.min1
        #if tick.min1 > 1500:
            sflag = True
            sprice = tick.price
            print 'close',tick.sec,self.pre_m1,self.pre_m2,tick.em1,tick.em2,tick.price
        elif self.pre_m2 > self.pre_m1-2 and tick.em2 <= tick.em1-2:
            sflag = True
            sprice = tick.price
            print 'close',tick.sec,self.pre_m1,self.pre_m2,tick.em1,tick.em2,tick.price
        self.pre_m1 = tick.em1
        self.pre_m2 = tick.em2
        return sflag,sprice,cflag

class T_LONG_EVP(T_LONG):
    '''
        等量/价/时线
    '''
    def __init__(self,bid_ticks=3,valid_length=60,mlen1=7,mlen2=13,mlen3=30):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.mlen1 = mlen1
        self.mlen2 = mlen2
        self.mlen3 = mlen3
        self.pre_m1 = 0
        self.pre_m2 = 0
        self.pre_m3 = 0

    def reset(self):
        pass

    def check(self,data,ctick):
        tick = ctick
        
        if tick.dorder < 8:
            return False,0,0

        nl3 = self.mlen1
        nl1 = self.mlen2
        nl2 = self.mlen3

        ma1 = sum(data.vps[-nl1:])*1.0 / nl1
        ma2 = sum(data.vps[-nl2:])*1.0 / nl2
        ma3 = sum(data.vps[-nl3:])*1.0 / nl3

        fire_flag,fire_price,stop_price = False,0,0
        if ctick.min1 < 1510:
            #print >>fh,tick.time,tick.msec,mal,mas,mam,n0,n1,n2,ctick.dvolume,data.vols[-n1-1],data.vols[-n2-1]
            print >>fh,'%s;%s;%s;%s;%s;%s'%(tick.time,tick.msec,ma1,ma2,ma3,tick.price)
        #print tick.time,self.pre_m1,self.pre_m2,tick.em1,tick.em2
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            pass
        elif ctick.min1 > 945 and ctick.min1 < 1459 and self.pre_m1 < self.pre_m2+2 and ma1 >= ma2+2 and ma2>self.pre_m2:
            fire_flag,fire_price,stop_price = True,ctick.price,ctick.price-100    #(触发标志、触发价、止损)
            print 'open',tick.sec,self.pre_m1,self.pre_m2,self.pre_m3,ma1,ma2,ma3,tick.price
        self.pre_m1 = ma1
        self.pre_m2 = ma2
        self.pre_m3 = ma3
        return fire_flag,fire_price,stop_price


class T_LONG_EM3(T_LONG):
    '''
        双均线多头
    '''
    def __init__(self,bid_ticks=5,valid_length=60):
        T_LONG.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pre_m0 = 0
        self.pre_m1 = 0
        self.pre_m2 = 0

    def reset(self):
        pass

    def check(self,data,ctick):
        tick = ctick
        
        if tick.dorder < 8:
            return False,0,0

        n0 = tick.dorder
        n1 = n0/2
        n2 = n0/4
        mam = sum(data.pvols)*1.0 / ctick.dvolume
        mal = sum(data.pvols[-n1:]) *1.0/ (ctick.dvolume - data.vols[-n1-1])
        mas = sum(data.pvols[-n2:]) *1.0/ (ctick.dvolume - data.vols[-n2-1])

        fire_flag,fire_price,stop_price = False,0,0
        if ctick.min1 < 1510:
            #print >>fh,tick.time,tick.msec,mal,mas,mam,n0,n1,n2,ctick.dvolume,data.vols[-n1-1],data.vols[-n2-1]
            print >>fh,'%s;%s;%s;%s;%s;%s'%(tick.time,tick.msec,mal,mas,mam,tick.price)
        #print tick.time,self.pre_m1,self.pre_m2,tick.em1,tick.em2
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            pass
        elif ctick.min1 > 945 and ctick.min1 < 1459 and self.pre_m1 < self.pre_m0+2 and mas >= mal+2:
            fire_flag,fire_price,stop_price = True,ctick.price,ctick.price-100    #(触发标志、触发价、止损)
            print 'open',tick.sec,self.pre_m0,self.pre_m1,self.pre_m2,mal,mas,mam,tick.price
        self.pre_m0 = mal
        self.pre_m1 = mas
        self.pre_m2 = mam
        return fire_flag,fire_price,stop_price

class T_LONG_EM3_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        print opened.tick.time,opened.base_price,self.base_stop
        self.pre_m0= 0
        self.pre_m1 = 0
        self.pre_m2 = 0

    def check(self,tick):
        if tick.dorder < 8:
            return False,0

        n0 = tick.dorder
        n1 = n0/2
        n2 = n0/4
        mam = sum(self.data.pvols)*1.0 / tick.dvolume
        mal = sum(self.data.pvols[-n1:]) *1.0/ (tick.dvolume - self.data.vols[-n1-1])
        mas = sum(self.data.pvols[-n2:]) *1.0/ (tick.dvolume - self.data.vols[-n2-1])
        
        sflag,cflag,sprice = False,False,0
        if tick.price < self.get_base_line() or tick.min1>1500:
        #print 'check',tick.min1
        #if tick.min1 > 1500:
            sflag = True
            sprice = tick.price
            print 'close',tick.sec,tick.price
        elif self.pre_m1 > self.pre_m0-2 and mas <= mal-2:
            sflag = True
            sprice = tick.price
            print 'close',tick.sec,tick.price
        self.pre_m0 = mal
        self.pre_m1 = mas
        self.pre_m2 = mam
        return sflag,sprice,cflag

class T_SHORT_M2(T_SHORT):
    '''
        双均线空头
    '''
    def __init__(self,bid_ticks=3,valid_length=60):
        T_SHORT.__init__(self,bid_ticks,valid_length)
        self.base_line = 99999999
        self.pre_m2 = 0
        self.pre_dm = 0

    def reset(self):
        pass

    def check(self,data,ctick):
        if ctick.min1 <= 916 or ctick.min1 >=1500:
            return (False,0)
        m2 = sum(data.prices[ctick.dorder/4])*1.0 / (ctick.dorder/4)
        fire_flag,fire_price,stop_price = False,0,0
        if ctick.min1 > 1030 and ctick.min1 < 1459 and self.pre_m2 > self.pre_dm and m2 < ctick.davg:
            fire_flag,fire_price,stop_price = True,ctick.price,ctick.price+200    #(触发标志、触发价、止损)
        self.pre_m2 = m2
        self.pre_dm = ctick.davg
        return fire_flag,fire_price,stop_price


class T_LONG_MOVING_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        print opened.tick.time,opened.base_price,self.base_stop


    def check(self,tick):
        if tick.price < self.get_base_line() or tick.min1>1500:
            return (True,tick.price,False)
        #if tick.price > self.opened.base_price + 50:
        #    return (True,tick.price,False)

        bl2 = tick.price - 1000

        if tick.price >= self.thigh + self.tick_base * 2:
            bl1 = self.get_base_line() + (tick.price - self.thigh)/2
            bl2 = tick.price - 15
            #self.set_base_line(bl1 if bl1 > bl2 else bl2)
            self.set_base_line(bl1)
            self.thigh = tick.price 
            return (False,0,True)

        return (False,0,False)

class T_LONG_FIXED_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=5):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.bse_lost = base_lost
        self.base_stop = opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        print opened.tick.time,opened.base_price,self.base_stop


    def check(self,tick):
        if tick.price < self.get_base_line() or tick.min1>1500:
            return (True,tick.price,False)
        #if tick.price > self.opened.base_price + 50:
        #    return (True,tick.price,False)

        if tick.price >= self.thigh:
            #self.set_base_line(bl1 if bl1 > bl2 else bl2)
            self.set_base_line(tick.price - self.base_lost * self.tick_base)
            self.thigh = tick.price 
            return (False,0,True)

        return (False,0,False)

class T_LONG_COST_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        print opened.tick.time,opened.base_price,self.base_stop


    def check(self,tick):
        if tick.price < self.get_base_line() or tick.min1>1500:
            return (True,tick.price,False)

        if tick.price >= self.opened.base_price+8:
            self.set_base_line(self.opened.base_price)
            return (False,0,True)

        return (False,0,False)


class T_LONG_MOVING_STOPER2(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        print opened.tick.time,opened.base_price,self.base_stop


    def check(self,tick):
        if tick.price < self.get_base_line() or tick.min1>1500:
            return (True,tick.price,False)

        if tick.price > self.thigh:
            self.set_base_line(self.get_base_line() + (tick.price - self.thigh))
            self.thigh = tick.price 
            return (False,0,True)

        return (False,0,False)

class T_LONG_CREVERSE_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        self.rev_open = T_SHORT_COUNT(plen=4,olen=20)

    def check(self,tick):

        rev = self.rev_open.check(self.data,tick)
        if rev[0]:
            return (True,tick.price,False)

        return (False,0,False)


class T_SHORT_CREVERSE_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price + base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        self.rev_open = T_LONG_COUNT(plen=4,olen=20)

    def check(self,tick):

        rev = self.rev_open.check(self.data,tick)
        if rev[0]:
            return (True,tick.price,False)

        return (False,0,False)



class T_LONG_TRACING_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base


    def check(self,tick):
        if tick.price < self.get_base_line() or tick.min1>1500:
            return (True,tick.price,False)

        if tick.ask_volume > 100:
            return (True,tick.price,False)

        if tick.price >= self.thigh + self.tick_base * 2:
            self.set_base_line(self.get_base_line() + (tick.price - self.thigh)/2)
            self.thigh = tick.price 
            return (False,0,True)

        return (False,0,False)


class T_LONG_MA_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base

    def check(self,tick):
        if tick.min1>1500:
            return (True,tick.price,False)
        m60 = sum(self.data.prices[-60:]) / 60
        if tick.price < m60:
            return (True,tick.price,False)
        return (False,0,False)

class T_LONG_EMA_STOPER(strategy.LONG_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10,elen=100):
        strategy.LONG_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'多头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price - base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.thigh = opened.base_price
        self.tick_base = tick_base
        self.ema = 0
        self.pre_ema = 0
        self.elen = elen

    def check(self,tick):
        if tick.min1>1500:
            return (True,tick.price,False)
        if len(self.data.prices) < 2:
            return (False,0,False)
        elif self.ema == 0:
            self.pre_ema = self.data.prices[-2]
            self.ema = self.data.prices[-2]

        self.ema = tick.ema
        if tick.price > self.ema or tick.price <self.get_base_line():
            self.pre_ema = self.ema
            return (True,tick.price,False)
        self.pre_ema = self.ema
        return (False,0,False)


class T_SHORT_MOVING_STOPER(strategy.SHORT_STOPER):
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.SHORT_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'空头离场基类'
        self.opened = opened
        self.base_stop = opened.base_stop if opened!=None else opened.base_price + base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.tlow = opened.base_price
        self.tick_base = tick_base

    def check(self,tick):
        if tick.price > self.get_base_line() or tick.min1>1500:
            return (True,tick.price,False)
        #if self.opened.price - tick.price > 30:
        #    return (True,tick.price,False)

        stop_changed = False
        #if self.opened.price - tick.price > 20:
        #    self.set_base_line(self.get_base_line() if self.get_base_line()<self.opened.price else self.opened.price)
        #    #self.set_base_line(self.opened.price)
        #    stop_changed = True
        if tick.price <= self.tlow - self.tick_base * 2:
            self.set_base_line(self.get_base_line() + (self.tlow - tick.price)/2)
            self.tlow = tick.price 
            stop_changed = True
        return (False,0,stop_changed)

class T_SHORT_FIXED_STOPER(strategy.SHORT_STOPER):
    ## 固定止损，新高点回撤算起
    ##
    def __init__(self,data,bline,max_overflow=strategy.MAX_CLOSE_OVERFLOW,valid_length=strategy.STOP_VALID_LENGTH,opened=None,tick_base=2,base_lost=10):
        strategy.SHORT_STOPER.__init__(self,data,bline)
        self.max_overflow = max_overflow    #溢点用于计算目标价
        self.valid_length = valid_length    #有效期用于计算撤单时间
        self.name = u'空头离场基类'
        self.opened = opened
        self.base_lost = base_lost
        self.base_stop = opened.base_price + base_lost*tick_base
        #self.cur_stop = self.base_stop
        self.set_base_line(self.base_stop)
        self.tlow = opened.base_price
        self.tick_base = tick_base

    def check(self,tick):
        if tick.price > self.get_base_line() or tick.min1>1500:
            return (True,tick.price,False)
        #if self.opened.price - tick.price > 30:
        #    return (True,tick.price,False)

        stop_changed = False
        if tick.price <= self.tlow:
            self.set_base_line(tick.price+self.base_lost * self.tick_base)
            self.tlow = tick.price 
            stop_changed = True
        return (False,0,stop_changed)


l_tstrategy = strategy.STRATEGY('TESTL',T_LONG_DELTA,[T_LONG_MOVING_STOPER],1,1)
l_tstrategy2 = strategy.STRATEGY('TESTL',T_LONG_H,[T_LONG_MOVING_STOPER],1,1)
#l_tstrategy3 = strategy.STRATEGY('TESTL',T_LONG_COUNT,[T_LONG_MOVING_STOPER,T_LONG_CREVERSE_STOPER],1,1)
#l_tstrategy3 = strategy.STRATEGY('TESTL',T_LONG_COUNT,[T_LONG_MOVING_STOPER,T_LONG_COST_STOPER],1,1)
l_tstrategy3 = strategy.STRATEGY('TESTL',T_LONG_COUNT,[T_LONG_MOVING_STOPER],1,1)
l_tstrategy4 = strategy.STRATEGY('TESTL',T_LONG_EC,[T_LONG_EMA_STOPER],1,1)
#l_tstrategy2 = strategy.STRATEGY('TESTL',T_LONG_H,[T_LONG_TRACING_STOPER],1,1)
s_tstrategy = strategy.STRATEGY('TESTS',T_SHORT_DELTA,[T_SHORT_MOVING_STOPER],1,1)
s_tstrategy2 = strategy.STRATEGY('TESTS',T_SHORT_CHANNEL,[T_SHORT_MOVING_STOPER],1,1)
s_tstrategy3 = strategy.STRATEGY('TESTS',T_SHORT_BREAK,[T_SHORT_MOVING_STOPER],1,1)
#s_tstrategy4 = strategy.STRATEGY('TESTS',T_SHORT_COUNT,[T_SHORT_MOVING_STOPER,T_SHORT_CREVERSE_STOPER],1,1)
s_tstrategy4 = strategy.STRATEGY('TESTS',T_SHORT_COUNT,[T_SHORT_MOVING_STOPER],1,1)
s_tstrategy_c = strategy.STRATEGY('TESTS',T_SHORT_RCOUNT,[T_SHORT_MOVING_STOPER],1,1)
s_tstrategy_c = strategy.STRATEGY('TESTS',T_SHORT_RCOUNT,[T_SHORT_FIXED_STOPER],1,1)

l_m2 = strategy.STRATEGY('DMA2',T_LONG_M2,[T_LONG_M2_STOPER],1,1)
l_m3 = strategy.STRATEGY('EMA2',T_LONG_EM2,[T_LONG_EM2_STOPER],1,1)
l_m4 = strategy.STRATEGY('EMA2',T_LONG_EM3,[T_LONG_EM3_STOPER],1,1)

le_m = strategy.STRATEGY('LE',T_LONG_EVP,[T_LONG_MOVING_STOPER],1,1)

ss = strategy.STRATEGY('EMA2',T_LONG_SAVE,[T_LONG_MOVING_STOPER],1,1)

