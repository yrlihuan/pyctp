#-*- coding:utf-8 -*-

IDATE,ITIME,IOPEN,ICLOSE,IHIGH,ILOW,IVOL,IHOLDING,IORDER = 0,1,2,3,4,5,6,7,8

#多空标志
LONG,SHORT,EMPTY = -1,1,0   #多仓出钱,淡仓收钱
#开平仓的标志
XOPEN,XCLOSE = -1,1 #开仓,平仓

XBASE = 100 #用于一般化的除数基数

import sys
import functools

import logging
MY_FORMAT = '%(name)s:%(funcName)s:%(lineno)d:%(asctime)s %(levelname)s %(message)s'
CONSOLE_FORMAT = '**%(message)s'

#设定日志
def config_logging(filename,level=logging.DEBUG,format=MY_FORMAT,to_console=True,console_level=logging.INFO):
    logging.basicConfig(filename=filename,level=level,format=format)
    if to_console:
        add_log2console(console_level)

#将指定级别的日志同时输出到控制台
def add_log2console(level = logging.INFO):
    console = logging.StreamHandler()
    console.setLevel(level)
    # set a format which is simpler for console use
    #formatter = logging.Formatter('%(name)-12s: %(levelname)-8s %(message)s')
    #formatter = logging.Formatter('%(name)s:%(funcName)s:%(lineno)d:%(asctime)s %(levelname)s %(message)s')
    formatter = logging.Formatter(CONSOLE_FORMAT)
    # tell the handler to use this format
    console.setFormatter(formatter)
    # add the handler to the root logger
    logging.getLogger('').addHandler(console)
    



def inverse_direction(direction):
    return LONG if direction == SHORT else SHORT

def fcustom(func,**kwargs):
    ''' 根据kwargs设置func的偏函数,并将此偏函数的名字设定为源函数名+所固定的关键字参数名
    '''
    pf = functools.partial(func,**kwargs)
    #pf.name = pf.func.func_name
    pf.paras = ','.join(['%s=%s' % item for item in pf.keywords.items()])
    pf.__name__ = '%s:%s' % (func.__name__,pf.paras)
    return pf

def func_name(func):    #取到真实函数名. 可能只适用于python2.x
    if 'name' in func.__dict__:
        return func.name
    cfunc = func
    while(isinstance(cfunc,functools.partial)):
        cfunc = cfunc.func
    return str(cfunc)[10:-15]

def type_name(cobj): #取到由class实例化的对象的type名
    clazz_obj = cobj
    while(isinstance(clazz_obj,functools.partial)):
        clazz_obj = clazz_obj.func
    aname = str(type(clazz_obj))[8:-2]
    return aname.split('.')[-1]

def module_name(cobj): #取到由class实例化的对象所在的模块名
    clazz_obj = cobj
    while(isinstance(clazz_obj,functools.partial)):
        clazz_obj = clazz_obj.func
    aname = str(type(clazz_obj))[8:-2]
    return aname.split('.')[0]

def class_name(cobj): #取到由class实例化的对象的模块名和type名
    clazz_obj = cobj
    while(isinstance(clazz_obj,functools.partial)):
        clazz_obj = clazz_obj.func
    aname = str(type(clazz_obj))[8:-2]
    return tuple(aname.split('.'))

class BaseObject(object):
    def __init__(self,**kwargs):
        self.__dict__.update(kwargs)

    def has_attr(self,attr_name):
        return attr_name in self.__dict__

    def get_attr(self,attr_name):
        return self.__dict__[attr_name]

    def set_attr(self,attr_name,value):
        self.__dict__[attr_name] = value

    def __repr__(self):
        return 'BaseObject'


class CommonObject(BaseObject):
    def __init__(self,id,**kwargs):
        BaseObject.__init__(self,**kwargs)
        self.id = id

    def __repr__(self):
        return 'CommonObject'


LINELENGTH = 60
def linelog(msg):   #在同一行覆盖显示日志输出
    sys.stdout.write(unicode((u'\r%s%s' % (msg,' ' * (LINELENGTH - len(msg)))))) #.encode('gbk'))  #适应输出编码为gbk


##这段代码来自于回测平台。根据lvzhl的建议演化而来,主要用于方便统一计算IF和商品的3/5/10/15/30/...等周期数据
##对于1130和最后一个时点的计算与回测平台不同, 为兼容ticks处理
def calc_t2order(begin,end,(mid1,mid2)=(1130,1300)):
    ##为便于计算30分钟线，商品的节休息段仍然计算序号. 这样，1000->1029算一个30分钟段
    t2order = {}
    nbegin = begin / 100 * 60 + begin % 100
    for i in range(begin,mid1):
        if i%100 > 59:
            continue
        it = i/100 * 60 + i%100
        t2order[i] = it - nbegin

    t2order[mid1] = it - nbegin

    for i in range(mid2,end):
        it = i/100 * 60 + i%100
        if i%100 > 59:
            continue
        t2order[i] = it - nbegin - 90

    t2order[end] = it - nbegin - 90
    return t2order

#IF: time-->order
t2order_if = calc_t2order(914,1515)

#商品: time-->order. 中间有休息
t2order_com = calc_t2order(859,1500)

#模拟
t2order_mock = calc_t2order(1900,2330,(2115,2115))
t2order_mock2 = calc_t2order(1500,1930,(1715,1715))
