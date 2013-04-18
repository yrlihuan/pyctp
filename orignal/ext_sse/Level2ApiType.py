#-*- coding=utf-8 -*-
"""

A wrapper for CTP's Api library
author: Lvsoft@gmail.com
date: 2010-07-20

This file is part of python-ctp library

python-ctp is free software; you can redistribute it and/or modify it
under the terms of the GUL Lesser General Public License as published
by the Free Software Foundation; either version 2.1 of the License, or
(at your option) any later version.

python-ctp is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY of FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along the python-ctp; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA
"""

#This file is auto generated! Please don't edit directly.
class CThostFtdcL2MarketDataOffer3Field:
    def __init__(self, OfferOrderQty3=0, OfferPx3=0, OfferNumOrder3=0):
        self.OfferOrderQty3=OfferOrderQty3
        self.OfferPx3=OfferPx3
        self.OfferNumOrder3=OfferNumOrder3
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferOrderQty3', 'OfferPx3', 'OfferNumOrder3']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferOrderQty3', u'申卖量三'),('OfferPx3', u'申卖价三'),('OfferNumOrder3', u'实际卖总委托笔数三')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcAuthenticationInfoField:
    def __init__(self, UserID="", AuthInfo="", IsResult=0, BrokerID="", UserProductInfo=""):
        self.UserID=UserID
        self.AuthInfo=AuthInfo
        self.IsResult=IsResult
        self.BrokerID=BrokerID
        self.UserProductInfo=UserProductInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'AuthInfo', 'IsResult', 'BrokerID', 'UserProductInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('AuthInfo', u'认证信息'),('IsResult', u'是否为认证结果'),('BrokerID', u'经纪公司代码'),('UserProductInfo', u'用户端产品信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBaseField:
    def __init__(self, LastPx=0):
        self.LastPx=LastPx
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['LastPx']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('LastPx', u'现价')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataStaticField:
    def __init__(self, OpenPx=0, YieldToMaturity=0, LowPx=0, ClosePx=0, IOPV=0, PreClosePx=0, HighPx=0):
        self.OpenPx=OpenPx
        self.YieldToMaturity=YieldToMaturity
        self.LowPx=LowPx
        self.ClosePx=ClosePx
        self.IOPV=IOPV
        self.PreClosePx=PreClosePx
        self.HighPx=HighPx
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OpenPx', 'YieldToMaturity', 'LowPx', 'ClosePx', 'IOPV', 'PreClosePx', 'HighPx']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OpenPx', u'今开盘价'),('YieldToMaturity', u'到期收益率'),('LowPx', u'最低价'),('ClosePx', u'收盘价'),('IOPV', u'净值估值'),('PreClosePx', u'昨收盘价'),('HighPx', u'最高价')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid7Field:
    def __init__(self, BidOrderQty7=0, BidNumOrder7=0, BidPx7=0):
        self.BidOrderQty7=BidOrderQty7
        self.BidNumOrder7=BidNumOrder7
        self.BidPx7=BidPx7
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidOrderQty7', 'BidNumOrder7', 'BidPx7']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidOrderQty7', u'申买量七'),('BidNumOrder7', u'实际买总委托笔数七'),('BidPx7', u'申买价七')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOfferOrderField:
    def __init__(self, AltWeightedAvgOfferPx=0, WeightedAvgOfferPx=0, TotalOfferQty=0):
        self.AltWeightedAvgOfferPx=AltWeightedAvgOfferPx
        self.WeightedAvgOfferPx=WeightedAvgOfferPx
        self.TotalOfferQty=TotalOfferQty
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['AltWeightedAvgOfferPx', 'WeightedAvgOfferPx', 'TotalOfferQty']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('AltWeightedAvgOfferPx', u'债券加权平均委卖价格'),('WeightedAvgOfferPx', u'加权平均委卖价'),('TotalOfferQty', u'委托卖出总量')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcRspAuthenticateField:
    def __init__(self, UserID="", BrokerID="", UserProductInfo=""):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.UserProductInfo=UserProductInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID', 'UserProductInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码'),('UserProductInfo', u'用户端产品信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid1Field:
    def __init__(self, BidPx1=0, BidNumOrder1=0, BidOrderQty1=0):
        self.BidPx1=BidPx1
        self.BidNumOrder1=BidNumOrder1
        self.BidOrderQty1=BidOrderQty1
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidPx1', 'BidNumOrder1', 'BidOrderQty1']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidPx1', u'申买价一'),('BidNumOrder1', u'实际买总委托笔数一'),('BidOrderQty1', u'申买量一')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcSpecificSecurityField:
    def __init__(self, ExchangeID="", SecurityID=""):
        self.ExchangeID=ExchangeID
        self.SecurityID=SecurityID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'SecurityID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('SecurityID', u'证券代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBidAField:
    def __init__(self, BidPxA=0, BidNumOrderA=0, BidOrderQtyA=0):
        self.BidPxA=BidPxA
        self.BidNumOrderA=BidNumOrderA
        self.BidOrderQtyA=BidOrderQtyA
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidPxA', 'BidNumOrderA', 'BidOrderQtyA']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidPxA', u'申买价十'),('BidNumOrderA', u'实际买总委托笔数十'),('BidOrderQtyA', u'申买量十')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcDisseminationField:
    def __init__(self, SequenceNo=0, SequenceSeries=0):
        self.SequenceNo=SequenceNo
        self.SequenceSeries=SequenceSeries
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['SequenceNo', 'SequenceSeries']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('SequenceNo', u'序列号'),('SequenceSeries', u'序列系列号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcUserLogoutField:
    def __init__(self, UserID="", BrokerID=""):
        self.UserID=UserID
        self.BrokerID=BrokerID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'BrokerID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('BrokerID', u'经纪公司代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcUserSessionRefField:
    def __init__(self, FrontID=0, SessionID=0):
        self.FrontID=FrontID
        self.SessionID=SessionID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['FrontID', 'SessionID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('FrontID', u'前置编号'),('SessionID', u'会话编号')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer1Field:
    def __init__(self, OfferOrderQty1=0, OfferNumOrder1=0, OfferPx1=0):
        self.OfferOrderQty1=OfferOrderQty1
        self.OfferNumOrder1=OfferNumOrder1
        self.OfferPx1=OfferPx1
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferOrderQty1', 'OfferNumOrder1', 'OfferPx1']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferOrderQty1', u'申卖量一'),('OfferNumOrder1', u'实际卖总委托笔数一'),('OfferPx1', u'申卖价一')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer7Field:
    def __init__(self, OfferPx7=0, OfferNumOrder7=0, OfferOrderQty7=0):
        self.OfferPx7=OfferPx7
        self.OfferNumOrder7=OfferNumOrder7
        self.OfferOrderQty7=OfferOrderQty7
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferPx7', 'OfferNumOrder7', 'OfferOrderQty7']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferPx7', u'申卖价七'),('OfferNumOrder7', u'实际卖总委托笔数七'),('OfferOrderQty7', u'申卖量七')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer4Field:
    def __init__(self, OfferNumOrder4=0, OfferPx4=0, OfferOrderQty4=0):
        self.OfferNumOrder4=OfferNumOrder4
        self.OfferPx4=OfferPx4
        self.OfferOrderQty4=OfferOrderQty4
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferNumOrder4', 'OfferPx4', 'OfferOrderQty4']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferNumOrder4', u'实际卖总委托笔数四'),('OfferPx4', u'申卖价四'),('OfferOrderQty4', u'申卖量四')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataUpdateTimeField:
    def __init__(self, TradingDay="", ExchangeID="", SecurityID="", DataTimeStamp=""):
        self.TradingDay=TradingDay
        self.ExchangeID=ExchangeID
        self.SecurityID=SecurityID
        self.DataTimeStamp=DataTimeStamp
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TradingDay', 'ExchangeID', 'SecurityID', 'DataTimeStamp']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TradingDay', u'交易日'),('ExchangeID', u'交易所代码'),('SecurityID', u'证券代码'),('DataTimeStamp', u'时间戳')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid4Field:
    def __init__(self, BidNumOrder4=0, BidPx4=0, BidOrderQty4=0):
        self.BidNumOrder4=BidNumOrder4
        self.BidPx4=BidPx4
        self.BidOrderQty4=BidOrderQty4
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidNumOrder4', 'BidPx4', 'BidOrderQty4']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidNumOrder4', u'实际买总委托笔数四'),('BidPx4', u'申买价四'),('BidOrderQty4', u'申买量四')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid8Field:
    def __init__(self, BidNumOrder8=0, BidPx8=0, BidOrderQty8=0):
        self.BidNumOrder8=BidNumOrder8
        self.BidPx8=BidPx8
        self.BidOrderQty8=BidOrderQty8
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidNumOrder8', 'BidPx8', 'BidOrderQty8']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidNumOrder8', u'实际买总委托笔数八'),('BidPx8', u'申买价八'),('BidOrderQty8', u'申买量八')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer2Field:
    def __init__(self, OfferOrderQty2=0, OfferPx2=0, OfferNumOrder2=0):
        self.OfferOrderQty2=OfferOrderQty2
        self.OfferPx2=OfferPx2
        self.OfferNumOrder2=OfferNumOrder2
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferOrderQty2', 'OfferPx2', 'OfferNumOrder2']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferOrderQty2', u'申卖量二'),('OfferPx2', u'申卖价二'),('OfferNumOrder2', u'实际卖总委托笔数二')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcReqAuthenticateField:
    def __init__(self, UserID="", AuthCode="", BrokerID="", UserProductInfo=""):
        self.UserID=UserID
        self.AuthCode=AuthCode
        self.BrokerID=BrokerID
        self.UserProductInfo=UserProductInfo
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'AuthCode', 'BrokerID', 'UserProductInfo']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('AuthCode', u'认证码'),('BrokerID', u'经纪公司代码'),('UserProductInfo', u'用户端产品信息')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcReqUserLoginField:
    def __init__(self, MacAddress="", UserProductInfo="", UserID="", TradingDay="", InterfaceProductInfo="", BrokerID="", ClientIPAddress="", OneTimePassword="", ProtocolInfo="", Password=""):
        self.MacAddress=MacAddress
        self.UserProductInfo=UserProductInfo
        self.UserID=UserID
        self.TradingDay=TradingDay
        self.InterfaceProductInfo=InterfaceProductInfo
        self.BrokerID=BrokerID
        self.ClientIPAddress=ClientIPAddress
        self.OneTimePassword=OneTimePassword
        self.ProtocolInfo=ProtocolInfo
        self.Password=Password
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['MacAddress', 'UserProductInfo', 'UserID', 'TradingDay', 'InterfaceProductInfo', 'BrokerID', 'ClientIPAddress', 'OneTimePassword', 'ProtocolInfo', 'Password']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('MacAddress', u'Mac地址'),('UserProductInfo', u'用户端产品信息'),('UserID', u'用户代码'),('TradingDay', u'交易日'),('InterfaceProductInfo', u'接口端产品信息'),('BrokerID', u'经纪公司代码'),('ClientIPAddress', u'终端IP地址'),('OneTimePassword', u'动态密码'),('ProtocolInfo', u'协议信息'),('Password', u'密码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcNGTSIndexField:
    def __init__(self, ExchangeID="", HighIndex=0, TimeStamp="", LowIndex=0, PreCloseIndex=0, LastIndex=0, TradingDay="", SecurityID="", TradeTime="", OpenIndex=0, TotalVolumeTraded=0, CloseIndex=0, TurnOver=0):
        self.ExchangeID=ExchangeID
        self.HighIndex=HighIndex
        self.TimeStamp=TimeStamp
        self.LowIndex=LowIndex
        self.PreCloseIndex=PreCloseIndex
        self.LastIndex=LastIndex
        self.TradingDay=TradingDay
        self.SecurityID=SecurityID
        self.TradeTime=TradeTime
        self.OpenIndex=OpenIndex
        self.TotalVolumeTraded=TotalVolumeTraded
        self.CloseIndex=CloseIndex
        self.TurnOver=TurnOver
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ExchangeID', 'HighIndex', 'TimeStamp', 'LowIndex', 'PreCloseIndex', 'LastIndex', 'TradingDay', 'SecurityID', 'TradeTime', 'OpenIndex', 'TotalVolumeTraded', 'CloseIndex', 'TurnOver']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ExchangeID', u'交易所代码'),('HighIndex', u'最高指数'),('TimeStamp', u'行情时间（秒）'),('LowIndex', u'最低指数'),('PreCloseIndex', u'前收盘指数'),('LastIndex', u'最新指数'),('TradingDay', u'交易日'),('SecurityID', u'指数代码'),('TradeTime', u'成交时间'),('OpenIndex', u'今开盘指数'),('TotalVolumeTraded', u'参与计算相应指数的交易数量（手）'),('CloseIndex', u'今日收盘指数'),('TurnOver', u'参与计算相应指数的成交金额（元）')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcRspUserLoginField:
    def __init__(self, UserID="", SZETime="", TradingDay="", SessionID=0, SystemName="", FrontID=0, BrokerID="", LoginTime="", SSETime=""):
        self.UserID=UserID
        self.SZETime=SZETime
        self.TradingDay=TradingDay
        self.SessionID=SessionID
        self.SystemName=SystemName
        self.FrontID=FrontID
        self.BrokerID=BrokerID
        self.LoginTime=LoginTime
        self.SSETime=SSETime
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserID', 'SZETime', 'TradingDay', 'SessionID', 'SystemName', 'FrontID', 'BrokerID', 'LoginTime', 'SSETime']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserID', u'用户代码'),('SZETime', u'深证所时间'),('TradingDay', u'交易日'),('SessionID', u'会话编号'),('SystemName', u'交易系统名称'),('FrontID', u'前置编号'),('BrokerID', u'经纪公司代码'),('LoginTime', u'登录成功时间'),('SSETime', u'上证所时间')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcLevel2UserField:
    def __init__(self, UserName="", Password="", UserID="", EffectiveDate=""):
        self.UserName=UserName
        self.Password=Password
        self.UserID=UserID
        self.EffectiveDate=EffectiveDate
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['UserName', 'Password', 'UserID', 'EffectiveDate']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('UserName', u'用户名称'),('Password', u'密码'),('UserID', u'用户代码'),('EffectiveDate', u'启用日期')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcLevel2MarketDataField:
    def __init__(self, WeightedAvgBidPx=0, TotalOfferQty=0, ClosePx=0, BidPx9=0, BidPx8=0, BidPx5=0, BidPx4=0, BidPx7=0, BidPx6=0, BidPx1=0, BidPx3=0, BidPx2=0, OfferOrderQtyA=0, OfferPx6=0, OfferPx7=0, OfferPx4=0, OfferPx5=0, OfferPx2=0, OfferPx3=0, OfferPx1=0, TotalBidQty=0, OfferPx8=0, OfferPx9=0, OfferPxA=0, LowPx=0, OfferOrderQty8=0, TradingDay="", PreClosePx=0, OfferOrderQty1=0, OfferOrderQty2=0, OfferOrderQty3=0, OfferOrderQty4=0, OfferOrderQty5=0, OfferOrderQty6=0, OfferOrderQty7=0, YieldToMaturity=0, BidPxA=0, OfferPriceLevel=0, AltWeightedAvgBidPx=0, BidNumOrder2=0, OfferNumOrderA=0, NumTrades=0, BidPriceLevel=0, WarUpperPx=0, WarLowerPx=0, OpenPx=0, HighPx=0, OfferNumOrder8=0, OfferNumOrder9=0, OfferNumOrder1=0, OfferNumOrder2=0, OfferNumOrder3=0, OfferNumOrder4=0, OfferNumOrder5=0, OfferNumOrder6=0, OfferNumOrder7=0, BidOrderQty7=0, BidOrderQty6=0, TotalValueTrade=0, BidOrderQty4=0, BidOrderQty3=0, BidOrderQty2=0, BidOrderQty1=0, TotalWarrantExecQty=0, BidOrderQty9=0, BidOrderQty8=0, BidNumOrder7=0, BidNumOrder6=0, BidNumOrder5=0, BidNumOrder4=0, BidNumOrder3=0, DataTimeStamp="", BidNumOrder1=0, BidOrderQty5=0, BidNumOrder9=0, BidNumOrder8=0, ExchangeID="", BidNumOrderA=0, BidOrderQtyA=0, TotalVolumeTrade=0, AltWeightedAvgOfferPx=0, WeightedAvgOfferPx=0, SecurityID="", LastPx=0, IOPV=0, OfferOrderQty9=0):
        self.WeightedAvgBidPx=WeightedAvgBidPx
        self.TotalOfferQty=TotalOfferQty
        self.ClosePx=ClosePx
        self.BidPx9=BidPx9
        self.BidPx8=BidPx8
        self.BidPx5=BidPx5
        self.BidPx4=BidPx4
        self.BidPx7=BidPx7
        self.BidPx6=BidPx6
        self.BidPx1=BidPx1
        self.BidPx3=BidPx3
        self.BidPx2=BidPx2
        self.OfferOrderQtyA=OfferOrderQtyA
        self.OfferPx6=OfferPx6
        self.OfferPx7=OfferPx7
        self.OfferPx4=OfferPx4
        self.OfferPx5=OfferPx5
        self.OfferPx2=OfferPx2
        self.OfferPx3=OfferPx3
        self.OfferPx1=OfferPx1
        self.TotalBidQty=TotalBidQty
        self.OfferPx8=OfferPx8
        self.OfferPx9=OfferPx9
        self.OfferPxA=OfferPxA
        self.LowPx=LowPx
        self.OfferOrderQty8=OfferOrderQty8
        self.TradingDay=TradingDay
        self.PreClosePx=PreClosePx
        self.OfferOrderQty1=OfferOrderQty1
        self.OfferOrderQty2=OfferOrderQty2
        self.OfferOrderQty3=OfferOrderQty3
        self.OfferOrderQty4=OfferOrderQty4
        self.OfferOrderQty5=OfferOrderQty5
        self.OfferOrderQty6=OfferOrderQty6
        self.OfferOrderQty7=OfferOrderQty7
        self.YieldToMaturity=YieldToMaturity
        self.BidPxA=BidPxA
        self.OfferPriceLevel=OfferPriceLevel
        self.AltWeightedAvgBidPx=AltWeightedAvgBidPx
        self.BidNumOrder2=BidNumOrder2
        self.OfferNumOrderA=OfferNumOrderA
        self.NumTrades=NumTrades
        self.BidPriceLevel=BidPriceLevel
        self.WarUpperPx=WarUpperPx
        self.WarLowerPx=WarLowerPx
        self.OpenPx=OpenPx
        self.HighPx=HighPx
        self.OfferNumOrder8=OfferNumOrder8
        self.OfferNumOrder9=OfferNumOrder9
        self.OfferNumOrder1=OfferNumOrder1
        self.OfferNumOrder2=OfferNumOrder2
        self.OfferNumOrder3=OfferNumOrder3
        self.OfferNumOrder4=OfferNumOrder4
        self.OfferNumOrder5=OfferNumOrder5
        self.OfferNumOrder6=OfferNumOrder6
        self.OfferNumOrder7=OfferNumOrder7
        self.BidOrderQty7=BidOrderQty7
        self.BidOrderQty6=BidOrderQty6
        self.TotalValueTrade=TotalValueTrade
        self.BidOrderQty4=BidOrderQty4
        self.BidOrderQty3=BidOrderQty3
        self.BidOrderQty2=BidOrderQty2
        self.BidOrderQty1=BidOrderQty1
        self.TotalWarrantExecQty=TotalWarrantExecQty
        self.BidOrderQty9=BidOrderQty9
        self.BidOrderQty8=BidOrderQty8
        self.BidNumOrder7=BidNumOrder7
        self.BidNumOrder6=BidNumOrder6
        self.BidNumOrder5=BidNumOrder5
        self.BidNumOrder4=BidNumOrder4
        self.BidNumOrder3=BidNumOrder3
        self.DataTimeStamp=DataTimeStamp
        self.BidNumOrder1=BidNumOrder1
        self.BidOrderQty5=BidOrderQty5
        self.BidNumOrder9=BidNumOrder9
        self.BidNumOrder8=BidNumOrder8
        self.ExchangeID=ExchangeID
        self.BidNumOrderA=BidNumOrderA
        self.BidOrderQtyA=BidOrderQtyA
        self.TotalVolumeTrade=TotalVolumeTrade
        self.AltWeightedAvgOfferPx=AltWeightedAvgOfferPx
        self.WeightedAvgOfferPx=WeightedAvgOfferPx
        self.SecurityID=SecurityID
        self.LastPx=LastPx
        self.IOPV=IOPV
        self.OfferOrderQty9=OfferOrderQty9
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['WeightedAvgBidPx', 'TotalOfferQty', 'ClosePx', 'BidPx9', 'BidPx8', 'BidPx5', 'BidPx4', 'BidPx7', 'BidPx6', 'BidPx1', 'BidPx3', 'BidPx2', 'OfferOrderQtyA', 'OfferPx6', 'OfferPx7', 'OfferPx4', 'OfferPx5', 'OfferPx2', 'OfferPx3', 'OfferPx1', 'TotalBidQty', 'OfferPx8', 'OfferPx9', 'OfferPxA', 'LowPx', 'OfferOrderQty8', 'TradingDay', 'PreClosePx', 'OfferOrderQty1', 'OfferOrderQty2', 'OfferOrderQty3', 'OfferOrderQty4', 'OfferOrderQty5', 'OfferOrderQty6', 'OfferOrderQty7', 'YieldToMaturity', 'BidPxA', 'OfferPriceLevel', 'AltWeightedAvgBidPx', 'BidNumOrder2', 'OfferNumOrderA', 'NumTrades', 'BidPriceLevel', 'WarUpperPx', 'WarLowerPx', 'OpenPx', 'HighPx', 'OfferNumOrder8', 'OfferNumOrder9', 'OfferNumOrder1', 'OfferNumOrder2', 'OfferNumOrder3', 'OfferNumOrder4', 'OfferNumOrder5', 'OfferNumOrder6', 'OfferNumOrder7', 'BidOrderQty7', 'BidOrderQty6', 'TotalValueTrade', 'BidOrderQty4', 'BidOrderQty3', 'BidOrderQty2', 'BidOrderQty1', 'TotalWarrantExecQty', 'BidOrderQty9', 'BidOrderQty8', 'BidNumOrder7', 'BidNumOrder6', 'BidNumOrder5', 'BidNumOrder4', 'BidNumOrder3', 'DataTimeStamp', 'BidNumOrder1', 'BidOrderQty5', 'BidNumOrder9', 'BidNumOrder8', 'ExchangeID', 'BidNumOrderA', 'BidOrderQtyA', 'TotalVolumeTrade', 'AltWeightedAvgOfferPx', 'WeightedAvgOfferPx', 'SecurityID', 'LastPx', 'IOPV', 'OfferOrderQty9']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('WeightedAvgBidPx', u'加权平均委买价'),('TotalOfferQty', u'委托卖出总量'),('ClosePx', u'收盘价'),('BidPx9', u'申买价九'),('BidPx8', u'申买价八'),('BidPx5', u'申买价五'),('BidPx4', u'申买价四'),('BidPx7', u'申买价七'),('BidPx6', u'申买价六'),('BidPx1', u'申买价一'),('BidPx3', u'申买价三'),('BidPx2', u'申买价二'),('OfferOrderQtyA', u'申卖量十'),('OfferPx6', u'申卖价六'),('OfferPx7', u'申卖价七'),('OfferPx4', u'申卖价四'),('OfferPx5', u'申卖价五'),('OfferPx2', u'申卖价二'),('OfferPx3', u'申卖价三'),('OfferPx1', u'申卖价一'),('TotalBidQty', u'委托买入总量'),('OfferPx8', u'申卖价八'),('OfferPx9', u'申卖价九'),('OfferPxA', u'申卖价十'),('LowPx', u'最低价'),('OfferOrderQty8', u'申卖量八'),('TradingDay', u'交易日'),('PreClosePx', u'昨收盘价'),('OfferOrderQty1', u'申卖量一'),('OfferOrderQty2', u'申卖量二'),('OfferOrderQty3', u'申卖量三'),('OfferOrderQty4', u'申卖量四'),('OfferOrderQty5', u'申卖量五'),('OfferOrderQty6', u'申卖量六'),('OfferOrderQty7', u'申卖量七'),('YieldToMaturity', u'到期收益率'),('BidPxA', u'申买价十'),('OfferPriceLevel', u'卖价深度'),('AltWeightedAvgBidPx', u'债券加权平均委买价'),('BidNumOrder2', u'实际买总委托笔数二'),('OfferNumOrderA', u'实际卖总委托笔数十'),('NumTrades', u'成交笔数'),('BidPriceLevel', u'买价深度'),('WarUpperPx', u'权证涨停价格'),('WarLowerPx', u'权证跌停价格'),('OpenPx', u'今开盘价'),('HighPx', u'最高价'),('OfferNumOrder8', u'实际卖总委托笔数八'),('OfferNumOrder9', u'实际卖总委托笔数九'),('OfferNumOrder1', u'实际卖总委托笔数一'),('OfferNumOrder2', u'实际卖总委托笔数二'),('OfferNumOrder3', u'实际卖总委托笔数三'),('OfferNumOrder4', u'实际卖总委托笔数四'),('OfferNumOrder5', u'实际卖总委托笔数五'),('OfferNumOrder6', u'实际卖总委托笔数六'),('OfferNumOrder7', u'实际卖总委托笔数七'),('BidOrderQty7', u'申买量七'),('BidOrderQty6', u'申买量六'),('TotalValueTrade', u'成交总金额'),('BidOrderQty4', u'申买量四'),('BidOrderQty3', u'申买量三'),('BidOrderQty2', u'申买量二'),('BidOrderQty1', u'申买量一'),('TotalWarrantExecQty', u'权证执行总数量'),('BidOrderQty9', u'申买量九'),('BidOrderQty8', u'申买量八'),('BidNumOrder7', u'实际买总委托笔数七'),('BidNumOrder6', u'实际买总委托笔数六'),('BidNumOrder5', u'实际买总委托笔数五'),('BidNumOrder4', u'实际买总委托笔数四'),('BidNumOrder3', u'实际买总委托笔数三'),('DataTimeStamp', u'时间戳'),('BidNumOrder1', u'实际买总委托笔数一'),('BidOrderQty5', u'申买量五'),('BidNumOrder9', u'实际买总委托笔数九'),('BidNumOrder8', u'实际买总委托笔数八'),('ExchangeID', u'交易所代码'),('BidNumOrderA', u'实际买总委托笔数十'),('BidOrderQtyA', u'申买量十'),('TotalVolumeTrade', u'成交总量'),('AltWeightedAvgOfferPx', u'债券加权平均委卖价格'),('WeightedAvgOfferPx', u'加权平均委卖价'),('SecurityID', u'证券代码'),('LastPx', u'现价'),('IOPV', u'净值估值'),('OfferOrderQty9', u'申卖量九')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid5Field:
    def __init__(self, BidPx5=0, BidOrderQty5=0, BidNumOrder5=0):
        self.BidPx5=BidPx5
        self.BidOrderQty5=BidOrderQty5
        self.BidNumOrder5=BidNumOrder5
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidPx5', 'BidOrderQty5', 'BidNumOrder5']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidPx5', u'申买价五'),('BidOrderQty5', u'申买量五'),('BidNumOrder5', u'实际买总委托笔数五')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBidOrderField:
    def __init__(self, TotalBidQty=0, AltWeightedAvgBidPx=0, WeightedAvgBidPx=0):
        self.TotalBidQty=TotalBidQty
        self.AltWeightedAvgBidPx=AltWeightedAvgBidPx
        self.WeightedAvgBidPx=WeightedAvgBidPx
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TotalBidQty', 'AltWeightedAvgBidPx', 'WeightedAvgBidPx']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TotalBidQty', u'委托买入总量'),('AltWeightedAvgBidPx', u'债券加权平均委买价'),('WeightedAvgBidPx', u'加权平均委买价')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcRspInfoField:
    def __init__(self, ErrorMsg="", ErrorID=0):
        self.ErrorMsg=ErrorMsg
        self.ErrorID=ErrorID
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['ErrorMsg', 'ErrorID']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('ErrorMsg', u'错误信息'),('ErrorID', u'错误代码')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer8Field:
    def __init__(self, OfferOrderQty8=0, OfferNumOrder8=0, OfferPx8=0):
        self.OfferOrderQty8=OfferOrderQty8
        self.OfferNumOrder8=OfferNumOrder8
        self.OfferPx8=OfferPx8
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferOrderQty8', 'OfferNumOrder8', 'OfferPx8']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferOrderQty8', u'申卖量八'),('OfferNumOrder8', u'实际卖总委托笔数八'),('OfferPx8', u'申卖价八')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid6Field:
    def __init__(self, BidOrderQty6=0, BidPx6=0, BidNumOrder6=0):
        self.BidOrderQty6=BidOrderQty6
        self.BidPx6=BidPx6
        self.BidNumOrder6=BidNumOrder6
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidOrderQty6', 'BidPx6', 'BidNumOrder6']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidOrderQty6', u'申买量六'),('BidPx6', u'申买价六'),('BidNumOrder6', u'实际买总委托笔数六')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataPriceLevelField:
    def __init__(self, OfferPriceLevel=0, BidPriceLevel=0):
        self.OfferPriceLevel=OfferPriceLevel
        self.BidPriceLevel=BidPriceLevel
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferPriceLevel', 'BidPriceLevel']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferPriceLevel', u'卖价深度'),('BidPriceLevel', u'买价深度')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer5Field:
    def __init__(self, OfferPx5=0, OfferOrderQty5=0, OfferNumOrder5=0):
        self.OfferPx5=OfferPx5
        self.OfferOrderQty5=OfferOrderQty5
        self.OfferNumOrder5=OfferNumOrder5
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferPx5', 'OfferOrderQty5', 'OfferNumOrder5']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferPx5', u'申卖价五'),('OfferOrderQty5', u'申卖量五'),('OfferNumOrder5', u'实际卖总委托笔数五')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer9Field:
    def __init__(self, OfferOrderQty9=0, OfferNumOrder9=0, OfferPx9=0):
        self.OfferOrderQty9=OfferOrderQty9
        self.OfferNumOrder9=OfferNumOrder9
        self.OfferPx9=OfferPx9
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferOrderQty9', 'OfferNumOrder9', 'OfferPx9']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferOrderQty9', u'申卖量九'),('OfferNumOrder9', u'实际卖总委托笔数九'),('OfferPx9', u'申卖价九')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid2Field:
    def __init__(self, BidNumOrder2=0, BidOrderQty2=0, BidPx2=0):
        self.BidNumOrder2=BidNumOrder2
        self.BidOrderQty2=BidOrderQty2
        self.BidPx2=BidPx2
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidNumOrder2', 'BidOrderQty2', 'BidPx2']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidNumOrder2', u'实际买总委托笔数二'),('BidOrderQty2', u'申买量二'),('BidPx2', u'申买价二')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid9Field:
    def __init__(self, BidPx9=0, BidNumOrder9=0, BidOrderQty9=0):
        self.BidPx9=BidPx9
        self.BidNumOrder9=BidNumOrder9
        self.BidOrderQty9=BidOrderQty9
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidPx9', 'BidNumOrder9', 'BidOrderQty9']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidPx9', u'申买价九'),('BidNumOrder9', u'实际买总委托笔数九'),('BidOrderQty9', u'申买量九')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataWarrantField:
    def __init__(self, WarUpperPx=0, TotalWarrantExecQty=0, WarLowerPx=0):
        self.WarUpperPx=WarUpperPx
        self.TotalWarrantExecQty=TotalWarrantExecQty
        self.WarLowerPx=WarLowerPx
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['WarUpperPx', 'TotalWarrantExecQty', 'WarLowerPx']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('WarUpperPx', u'权证涨停价格'),('TotalWarrantExecQty', u'权证执行总数量'),('WarLowerPx', u'权证跌停价格')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataTradedField:
    def __init__(self, TotalValueTrade=0, NumTrades=0, TotalVolumeTrade=0):
        self.TotalValueTrade=TotalValueTrade
        self.NumTrades=NumTrades
        self.TotalVolumeTrade=TotalVolumeTrade
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['TotalValueTrade', 'NumTrades', 'TotalVolumeTrade']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('TotalValueTrade', u'成交总金额'),('NumTrades', u'成交笔数'),('TotalVolumeTrade', u'成交总量')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOfferAField:
    def __init__(self, OfferNumOrderA=0, OfferOrderQtyA=0, OfferPxA=0):
        self.OfferNumOrderA=OfferNumOrderA
        self.OfferOrderQtyA=OfferOrderQtyA
        self.OfferPxA=OfferPxA
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferNumOrderA', 'OfferOrderQtyA', 'OfferPxA']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferNumOrderA', u'实际卖总委托笔数十'),('OfferOrderQtyA', u'申卖量十'),('OfferPxA', u'申卖价十')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataBid3Field:
    def __init__(self, BidNumOrder3=0, BidOrderQty3=0, BidPx3=0):
        self.BidNumOrder3=BidNumOrder3
        self.BidOrderQty3=BidOrderQty3
        self.BidPx3=BidPx3
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['BidNumOrder3', 'BidOrderQty3', 'BidPx3']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('BidNumOrder3', u'实际买总委托笔数三'),('BidOrderQty3', u'申买量三'),('BidPx3', u'申买价三')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
class CThostFtdcL2MarketDataOffer6Field:
    def __init__(self, OfferPx6=0, OfferNumOrder6=0, OfferOrderQty6=0):
        self.OfferPx6=OfferPx6
        self.OfferNumOrder6=OfferNumOrder6
        self.OfferOrderQty6=OfferOrderQty6
        self.vcmap={}
    def __repr__(self): return "<%s>" % ",".join(["%s:%s" % (x, getattr(self, x)) for x in ['OfferPx6', 'OfferNumOrder6', 'OfferOrderQty6']])
    def __str__(self):  return "<%s>" % ",".join(["%s:%s" % (y, self.getval(x)) for x,y in [('OfferPx6', u'申卖价六'),('OfferNumOrder6', u'实际卖总委托笔数六'),('OfferOrderQty6', u'申卖量六')]])
    def getval(self, n):
        if n in []:
            return self.vcmap[n][getattr(self, n)].encode("utf-8")
        else: return getattr(self, n)
# Set short name alias for the stupid Hungarian Notation
L2MarketDataOffer3=CThostFtdcL2MarketDataOffer3Field
AuthenticationInfo=CThostFtdcAuthenticationInfoField
L2MarketDataBase=CThostFtdcL2MarketDataBaseField
L2MarketDataStatic=CThostFtdcL2MarketDataStaticField
L2MarketDataBid7=CThostFtdcL2MarketDataBid7Field
L2MarketDataOfferOrder=CThostFtdcL2MarketDataOfferOrderField
RspAuthenticate=CThostFtdcRspAuthenticateField
L2MarketDataBid1=CThostFtdcL2MarketDataBid1Field
SpecificSecurity=CThostFtdcSpecificSecurityField
L2MarketDataBidA=CThostFtdcL2MarketDataBidAField
Dissemination=CThostFtdcDisseminationField
UserLogout=CThostFtdcUserLogoutField
UserSessionRef=CThostFtdcUserSessionRefField
L2MarketDataOffer1=CThostFtdcL2MarketDataOffer1Field
L2MarketDataOffer7=CThostFtdcL2MarketDataOffer7Field
L2MarketDataOffer4=CThostFtdcL2MarketDataOffer4Field
L2MarketDataUpdateTime=CThostFtdcL2MarketDataUpdateTimeField
L2MarketDataBid4=CThostFtdcL2MarketDataBid4Field
L2MarketDataBid8=CThostFtdcL2MarketDataBid8Field
L2MarketDataOffer2=CThostFtdcL2MarketDataOffer2Field
ReqAuthenticate=CThostFtdcReqAuthenticateField
ReqUserLogin=CThostFtdcReqUserLoginField
NGTSIndex=CThostFtdcNGTSIndexField
RspUserLogin=CThostFtdcRspUserLoginField
Level2User=CThostFtdcLevel2UserField
Level2MarketData=CThostFtdcLevel2MarketDataField
L2MarketDataBid5=CThostFtdcL2MarketDataBid5Field
L2MarketDataBidOrder=CThostFtdcL2MarketDataBidOrderField
RspInfo=CThostFtdcRspInfoField
L2MarketDataOffer8=CThostFtdcL2MarketDataOffer8Field
L2MarketDataBid6=CThostFtdcL2MarketDataBid6Field
L2MarketDataPriceLevel=CThostFtdcL2MarketDataPriceLevelField
L2MarketDataOffer5=CThostFtdcL2MarketDataOffer5Field
L2MarketDataOffer9=CThostFtdcL2MarketDataOffer9Field
L2MarketDataBid2=CThostFtdcL2MarketDataBid2Field
L2MarketDataBid9=CThostFtdcL2MarketDataBid9Field
L2MarketDataWarrant=CThostFtdcL2MarketDataWarrantField
L2MarketDataTraded=CThostFtdcL2MarketDataTradedField
L2MarketDataOfferA=CThostFtdcL2MarketDataOfferAField
L2MarketDataBid3=CThostFtdcL2MarketDataBid3Field
L2MarketDataOffer6=CThostFtdcL2MarketDataOffer6Field
