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

import _ctp_Trader
import os
import UserApiStruct

_ctp_Trader.register_struct(UserApiStruct)

class TraderSpi:
    def register_api(self, api):
        self.api=api

    def OnRtnChangeAccountByBank(self, pChangeAccount):
        '''银行发起变更银行账号通知'''
        pass

    def OnRspQryInstrument(self, pInstrument, pRspInfo, nRequestID, bIsLast):
        '''请求查询合约响应'''
        pass

    def OnErrRtnFutureToBankByFuture(self, pReqTransfer, pRspInfo):
        '''期货发起期货资金转银行错误回报'''
        pass

    def OnRspQryInstrumentMarginRate(self, pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast):
        '''请求查询合约保证金率响应'''
        pass

    def OnFrontDisconnected(self, nReason):
        '''当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
@param nReason 错误原因
        0x1001 网络读失败
        0x1002 网络写失败
        0x2001 接收心跳超时
        0x2002 发送心跳失败
        0x2003 收到错误报文'''
        pass

    def OnRspQryExchange(self, pExchange, pRspInfo, nRequestID, bIsLast):
        '''请求查询交易所响应'''
        pass

    def OnRspOrderAction(self, pInputOrderAction, pRspInfo, nRequestID, bIsLast):
        '''报单操作请求响应'''
        pass

    def OnErrRtnRepealBankToFutureByFutureManual(self, pReqRepeal, pRspInfo):
        '''系统运行时期货端手工发起冲正银行转期货错误回报'''
        pass

    def OnErrRtnBankToFutureByFuture(self, pReqTransfer, pRspInfo):
        '''期货发起银行资金转期货错误回报'''
        pass

    def OnRtnFromFutureToBankByBank(self, pRspTransfer):
        '''银行发起期货资金转银行通知'''
        pass

    def OnRspQryInvestor(self, pInvestor, pRspInfo, nRequestID, bIsLast):
        '''请求查询投资者响应'''
        pass

    def OnRspRemoveParkedOrder(self, pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast):
        '''删除预埋单响应'''
        pass

    def OnRspQryTransferBank(self, pTransferBank, pRspInfo, nRequestID, bIsLast):
        '''请求查询转帐银行响应'''
        pass

    def OnRspQryBrokerTradingAlgos(self, pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast):
        '''请求查询经纪公司交易算法响应'''
        pass

    def OnRspQrySettlementInfo(self, pSettlementInfo, pRspInfo, nRequestID, bIsLast):
        '''请求查询投资者结算结果响应'''
        pass

    def OnRtnRepealFromFutureToBankByBank(self, pRspRepeal):
        '''银行发起冲正期货转银行通知'''
        pass

    def OnRtnOpenAccountByBank(self, pOpenAccount):
        '''银行发起银期开户通知'''
        pass

    def OnRspError(self, pRspInfo, nRequestID, bIsLast):
        '''错误应答'''
        pass

    def OnRspQryCFMMCTradingAccountKey(self, pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast):
        '''查询保证金监管系统经纪公司资金账户密钥响应'''
        pass

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        '''登录请求响应'''
        pass

    def OnRtnRepealFromFutureToBankByFuture(self, pRspRepeal):
        '''期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知'''
        pass

    def OnRspParkedOrderAction(self, pParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        '''预埋撤单录入请求响应'''
        pass

    def OnErrRtnOrderAction(self, pOrderAction, pRspInfo):
        '''报单操作错误回报'''
        pass

    def OnRtnCancelAccountByBank(self, pCancelAccount):
        '''银行发起银期销户通知'''
        pass

    def OnRtnInstrumentStatus(self, pInstrumentStatus):
        '''合约交易状态通知'''
        pass

    def OnRspQryContractBank(self, pContractBank, pRspInfo, nRequestID, bIsLast):
        '''请求查询签约银行响应'''
        pass

    def OnRspOrderInsert(self, pInputOrder, pRspInfo, nRequestID, bIsLast):
        '''报单录入请求响应'''
        pass

    def OnRspQryEWarrantOffset(self, pEWarrantOffset, pRspInfo, nRequestID, bIsLast):
        '''请求查询仓单折抵信息响应'''
        pass

    def OnRspUserPasswordUpdate(self, pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast):
        '''用户口令更新请求响应'''
        pass

    def OnRspParkedOrderInsert(self, pParkedOrder, pRspInfo, nRequestID, bIsLast):
        '''预埋单录入请求响应'''
        pass

    def OnRtnTradingNotice(self, pTradingNoticeInfo):
        '''交易通知'''
        pass

    def OnRspFromBankToFutureByFuture(self, pReqTransfer, pRspInfo, nRequestID, bIsLast):
        '''期货发起银行资金转期货应答'''
        pass

    def OnRspQryInvestorPositionCombineDetail(self, pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast):
        '''请求查询投资者持仓明细响应'''
        pass

    def OnRspFromFutureToBankByFuture(self, pReqTransfer, pRspInfo, nRequestID, bIsLast):
        '''期货发起期货资金转银行应答'''
        pass

    def OnHeartBeatWarning(self, nTimeLapse):
        '''心跳超时警告。当长时间未收到报文时，该方法被调用。
@param nTimeLapse 距离上次接收报文的时间'''
        pass

    def OnErrRtnQueryBankBalanceByFuture(self, pReqQueryAccount, pRspInfo):
        '''期货发起查询银行余额错误回报'''
        pass

    def OnRspQryAccountregister(self, pAccountregister, pRspInfo, nRequestID, bIsLast):
        '''请求查询银期签约关系响应'''
        pass

    def OnRspQryTradingCode(self, pTradingCode, pRspInfo, nRequestID, bIsLast):
        '''请求查询交易编码响应'''
        pass

    def OnRtnErrorConditionalOrder(self, pErrorConditionalOrder):
        '''提示条件单校验错误'''
        pass

    def OnRtnFromBankToFutureByFuture(self, pRspTransfer):
        '''期货发起银行资金转期货通知'''
        pass

    def OnRspQrySettlementInfoConfirm(self, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast):
        '''请求查询结算信息确认响应'''
        pass

    def OnRtnQueryBankBalanceByFuture(self, pNotifyQueryAccount):
        '''期货发起查询银行余额通知'''
        pass

    def OnRtnOrder(self, pOrder):
        '''报单通知'''
        pass

    def OnRspQryTransferSerial(self, pTransferSerial, pRspInfo, nRequestID, bIsLast):
        '''请求查询转帐流水响应'''
        pass

    def OnRspQryInvestorPosition(self, pInvestorPosition, pRspInfo, nRequestID, bIsLast):
        '''请求查询投资者持仓响应'''
        pass

    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        '''登出请求响应'''
        pass

    def OnErrRtnRepealFutureToBankByFutureManual(self, pReqRepeal, pRspInfo):
        '''系统运行时期货端手工发起冲正期货转银行错误回报'''
        pass

    def OnRspQryInvestorPositionDetail(self, pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast):
        '''请求查询投资者持仓明细响应'''
        pass

    def OnRtnFromBankToFutureByBank(self, pRspTransfer):
        '''银行发起银行资金转期货通知'''
        pass

    def OnRspQryParkedOrderAction(self, pParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        '''请求查询预埋撤单响应'''
        pass

    def OnRspQryBrokerTradingParams(self, pBrokerTradingParams, pRspInfo, nRequestID, bIsLast):
        '''请求查询经纪公司交易参数响应'''
        pass

    def OnRspQryParkedOrder(self, pParkedOrder, pRspInfo, nRequestID, bIsLast):
        '''请求查询预埋单响应'''
        pass

    def OnRspQueryBankAccountMoneyByFuture(self, pReqQueryAccount, pRspInfo, nRequestID, bIsLast):
        '''期货发起查询银行余额应答'''
        pass

    def OnRspQueryMaxOrderVolume(self, pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast):
        '''查询最大报单数量响应'''
        pass

    def OnRtnTrade(self, pTrade):
        '''成交通知'''
        pass

    def OnErrRtnOrderInsert(self, pInputOrder, pRspInfo):
        '''报单录入错误回报'''
        pass

    def OnRspQryTradingNotice(self, pTradingNotice, pRspInfo, nRequestID, bIsLast):
        '''请求查询交易通知响应'''
        pass

    def OnRtnRepealFromBankToFutureByFuture(self, pRspRepeal):
        '''期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知'''
        pass

    def OnRspQryNotice(self, pNotice, pRspInfo, nRequestID, bIsLast):
        '''请求查询客户通知响应'''
        pass

    def OnRspQryTradingAccount(self, pTradingAccount, pRspInfo, nRequestID, bIsLast):
        '''请求查询资金账户响应'''
        pass

    def OnRspTradingAccountPasswordUpdate(self, pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast):
        '''资金账户口令更新请求响应'''
        pass

    def OnRtnRepealFromFutureToBankByFutureManual(self, pRspRepeal):
        '''系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知'''
        pass

    def OnRspSettlementInfoConfirm(self, pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast):
        '''投资者结算结果确认响应'''
        pass

    def OnRtnRepealFromBankToFutureByFutureManual(self, pRspRepeal):
        '''系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知'''
        pass

    def OnRtnFromFutureToBankByFuture(self, pRspTransfer):
        '''期货发起期货资金转银行通知'''
        pass

    def OnRspQryDepthMarketData(self, pDepthMarketData, pRspInfo, nRequestID, bIsLast):
        '''请求查询行情响应'''
        pass

    def OnRspRemoveParkedOrderAction(self, pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast):
        '''删除预埋撤单响应'''
        pass

    def OnFrontConnected(self, ):
        '''当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。'''
        pass

    def OnRspQryInstrumentCommissionRate(self, pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast):
        '''请求查询合约手续费率响应'''
        pass

    def OnRtnRepealFromBankToFutureByBank(self, pRspRepeal):
        '''银行发起冲正银行转期货通知'''
        pass

    def OnRspQryOrder(self, pOrder, pRspInfo, nRequestID, bIsLast):
        '''请求查询报单响应'''
        pass

    def OnRspQryTrade(self, pTrade, pRspInfo, nRequestID, bIsLast):
        '''请求查询成交响应'''
        pass


class TraderApi:
    @staticmethod
    def CreateTraderApi(FlowPath="", IsUsingUdp=False):
        if FlowPath:
            FlowPath=os.path.abspath(FlowPath)
        api_ptr=_ctp_Trader.create_TraderApi(FlowPath, IsUsingUdp)
        return TraderApi(api_ptr)

    def __init__(self, api_ptr):
        self.api_ptr = api_ptr

    def ReqQryTradingAccount(self, pQryTradingAccount, nRequestID):
        '''请求查询资金账户'''
        return _ctp_Trader.ReqQryTradingAccount(self.api_ptr, pQryTradingAccount, nRequestID)

    def ReqQryExchange(self, pQryExchange, nRequestID):
        '''请求查询交易所'''
        return _ctp_Trader.ReqQryExchange(self.api_ptr, pQryExchange, nRequestID)

    def ReqUserPasswordUpdate(self, pUserPasswordUpdate, nRequestID):
        '''用户口令更新请求'''
        return _ctp_Trader.ReqUserPasswordUpdate(self.api_ptr, pUserPasswordUpdate, nRequestID)

    def ReqQryTradingNotice(self, pQryTradingNotice, nRequestID):
        '''请求查询交易通知'''
        return _ctp_Trader.ReqQryTradingNotice(self.api_ptr, pQryTradingNotice, nRequestID)

    def ReqQryTrade(self, pQryTrade, nRequestID):
        '''请求查询成交'''
        return _ctp_Trader.ReqQryTrade(self.api_ptr, pQryTrade, nRequestID)

    def ReqQueryMaxOrderVolume(self, pQueryMaxOrderVolume, nRequestID):
        '''查询最大报单数量请求'''
        return _ctp_Trader.ReqQueryMaxOrderVolume(self.api_ptr, pQueryMaxOrderVolume, nRequestID)

    def ReqSettlementInfoConfirm(self, pSettlementInfoConfirm, nRequestID):
        '''投资者结算结果确认'''
        return _ctp_Trader.ReqSettlementInfoConfirm(self.api_ptr, pSettlementInfoConfirm, nRequestID)

    def ReqQryInvestorPosition(self, pQryInvestorPosition, nRequestID):
        '''请求查询投资者持仓'''
        return _ctp_Trader.ReqQryInvestorPosition(self.api_ptr, pQryInvestorPosition, nRequestID)

    def ReqQryBrokerTradingAlgos(self, pQryBrokerTradingAlgos, nRequestID):
        '''请求查询经纪公司交易算法'''
        return _ctp_Trader.ReqQryBrokerTradingAlgos(self.api_ptr, pQryBrokerTradingAlgos, nRequestID)

    def ReqQryOrder(self, pQryOrder, nRequestID):
        '''请求查询报单'''
        return _ctp_Trader.ReqQryOrder(self.api_ptr, pQryOrder, nRequestID)

    def Init(self, ):
        '''初始化
@remark 初始化运行环境,只有调用后,接口才开始工作'''
        return _ctp_Trader.Init(self.api_ptr, )

    def ReqQryTradingCode(self, pQryTradingCode, nRequestID):
        '''请求查询交易编码'''
        return _ctp_Trader.ReqQryTradingCode(self.api_ptr, pQryTradingCode, nRequestID)

    def ReqUserLogin(self, pReqUserLoginField, nRequestID):
        '''用户登录请求'''
        return _ctp_Trader.ReqUserLogin(self.api_ptr, pReqUserLoginField, nRequestID)

    def ReqFromFutureToBankByFuture(self, pReqTransfer, nRequestID):
        '''期货发起期货资金转银行请求'''
        return _ctp_Trader.ReqFromFutureToBankByFuture(self.api_ptr, pReqTransfer, nRequestID)

    def RegisterSpi(self, pSpi):
        '''注册回调接口
@param pSpi 派生自回调接口类的实例'''
        ret = _ctp_Trader.RegisterSpi(self.api_ptr, pSpi)
        pSpi.register_api(self)
        return ret

    def SubscribePublicTopic(self, nResumeType):
        '''订阅公共流。
@param nResumeType 公共流重传方式
        THOST_TERT_RESTART:从本交易日开始重传
        THOST_TERT_RESUME:从上次收到的续传
        THOST_TERT_QUICK:只传送登录后公共流的内容
@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。'''
        return _ctp_Trader.SubscribePublicTopic(self.api_ptr, nResumeType)

    def GetTradingDay(self, ):
        '''获取当前交易日
@retrun 获取到的交易日
@remark 只有登录成功后,才能得到正确的交易日'''
        return _ctp_Trader.GetTradingDay(self.api_ptr, )

    def ReqFromBankToFutureByFuture(self, pReqTransfer, nRequestID):
        '''期货发起银行资金转期货请求'''
        return _ctp_Trader.ReqFromBankToFutureByFuture(self.api_ptr, pReqTransfer, nRequestID)

    def ReqQryTransferSerial(self, pQryTransferSerial, nRequestID):
        '''请求查询转帐流水'''
        return _ctp_Trader.ReqQryTransferSerial(self.api_ptr, pQryTransferSerial, nRequestID)

    def ReqUserLogout(self, pUserLogout, nRequestID):
        '''登出请求'''
        return _ctp_Trader.ReqUserLogout(self.api_ptr, pUserLogout, nRequestID)

    def ReqQryBrokerTradingParams(self, pQryBrokerTradingParams, nRequestID):
        '''请求查询经纪公司交易参数'''
        return _ctp_Trader.ReqQryBrokerTradingParams(self.api_ptr, pQryBrokerTradingParams, nRequestID)

    def ReqQrySettlementInfoConfirm(self, pQrySettlementInfoConfirm, nRequestID):
        '''请求查询结算信息确认'''
        return _ctp_Trader.ReqQrySettlementInfoConfirm(self.api_ptr, pQrySettlementInfoConfirm, nRequestID)

    def ReqQryNotice(self, pQryNotice, nRequestID):
        '''请求查询客户通知'''
        return _ctp_Trader.ReqQryNotice(self.api_ptr, pQryNotice, nRequestID)

    def ReqParkedOrderInsert(self, pParkedOrder, nRequestID):
        '''预埋单录入请求'''
        return _ctp_Trader.ReqParkedOrderInsert(self.api_ptr, pParkedOrder, nRequestID)

    def ReqQryContractBank(self, pQryContractBank, nRequestID):
        '''请求查询签约银行'''
        return _ctp_Trader.ReqQryContractBank(self.api_ptr, pQryContractBank, nRequestID)

    def ReqQryInvestorPositionCombineDetail(self, pQryInvestorPositionCombineDetail, nRequestID):
        '''请求查询投资者持仓明细'''
        return _ctp_Trader.ReqQryInvestorPositionCombineDetail(self.api_ptr, pQryInvestorPositionCombineDetail, nRequestID)

    def ReqParkedOrderAction(self, pParkedOrderAction, nRequestID):
        '''预埋撤单录入请求'''
        return _ctp_Trader.ReqParkedOrderAction(self.api_ptr, pParkedOrderAction, nRequestID)

    def ReqQueryBankAccountMoneyByFuture(self, pReqQueryAccount, nRequestID):
        '''期货发起查询银行余额请求'''
        return _ctp_Trader.ReqQueryBankAccountMoneyByFuture(self.api_ptr, pReqQueryAccount, nRequestID)

    def Join(self, ):
        '''等待接口线程结束运行
@return 线程退出代码'''
        return _ctp_Trader.Join(self.api_ptr, )

    def ReqQryParkedOrderAction(self, pQryParkedOrderAction, nRequestID):
        '''请求查询预埋撤单'''
        return _ctp_Trader.ReqQryParkedOrderAction(self.api_ptr, pQryParkedOrderAction, nRequestID)

    def ReqOrderInsert(self, pInputOrder, nRequestID):
        '''报单录入请求'''
        return _ctp_Trader.ReqOrderInsert(self.api_ptr, pInputOrder, nRequestID)

    def ReqQrySettlementInfo(self, pQrySettlementInfo, nRequestID):
        '''请求查询投资者结算结果'''
        return _ctp_Trader.ReqQrySettlementInfo(self.api_ptr, pQrySettlementInfo, nRequestID)

    def ReqQryInstrument(self, pQryInstrument, nRequestID):
        '''请求查询合约'''
        return _ctp_Trader.ReqQryInstrument(self.api_ptr, pQryInstrument, nRequestID)

    def ReqOrderAction(self, pInputOrderAction, nRequestID):
        '''报单操作请求'''
        return _ctp_Trader.ReqOrderAction(self.api_ptr, pInputOrderAction, nRequestID)

    def ReqQryInstrumentCommissionRate(self, pQryInstrumentCommissionRate, nRequestID):
        '''请求查询合约手续费率'''
        return _ctp_Trader.ReqQryInstrumentCommissionRate(self.api_ptr, pQryInstrumentCommissionRate, nRequestID)

    def Release(self, ):
        '''删除接口对象本身
@remark 不再使用本接口对象时,调用该函数删除接口对象'''
        return _ctp_Trader.Release(self.api_ptr, )

    def ReqQryInstrumentMarginRate(self, pQryInstrumentMarginRate, nRequestID):
        '''请求查询合约保证金率'''
        return _ctp_Trader.ReqQryInstrumentMarginRate(self.api_ptr, pQryInstrumentMarginRate, nRequestID)

    def ReqQryInvestor(self, pQryInvestor, nRequestID):
        '''请求查询投资者'''
        return _ctp_Trader.ReqQryInvestor(self.api_ptr, pQryInvestor, nRequestID)

    def ReqQryDepthMarketData(self, pQryDepthMarketData, nRequestID):
        '''请求查询行情'''
        return _ctp_Trader.ReqQryDepthMarketData(self.api_ptr, pQryDepthMarketData, nRequestID)

    def RegisterFront(self, pszFrontAddress):
        '''注册前置机网络地址
@param pszFrontAddress：前置机网络地址。
@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。'''
        return _ctp_Trader.RegisterFront(self.api_ptr, pszFrontAddress)

    def ReqRemoveParkedOrderAction(self, pRemoveParkedOrderAction, nRequestID):
        '''请求删除预埋撤单'''
        return _ctp_Trader.ReqRemoveParkedOrderAction(self.api_ptr, pRemoveParkedOrderAction, nRequestID)

    def ReqQryTransferBank(self, pQryTransferBank, nRequestID):
        '''请求查询转帐银行'''
        return _ctp_Trader.ReqQryTransferBank(self.api_ptr, pQryTransferBank, nRequestID)

    def ReqQryCFMMCTradingAccountKey(self, pQryCFMMCTradingAccountKey, nRequestID):
        '''请求查询保证金监管系统经纪公司资金账户密钥'''
        return _ctp_Trader.ReqQryCFMMCTradingAccountKey(self.api_ptr, pQryCFMMCTradingAccountKey, nRequestID)

    def ReqTradingAccountPasswordUpdate(self, pTradingAccountPasswordUpdate, nRequestID):
        '''资金账户口令更新请求'''
        return _ctp_Trader.ReqTradingAccountPasswordUpdate(self.api_ptr, pTradingAccountPasswordUpdate, nRequestID)

    def ReqQryAccountregister(self, pQryAccountregister, nRequestID):
        '''请求查询银期签约关系'''
        return _ctp_Trader.ReqQryAccountregister(self.api_ptr, pQryAccountregister, nRequestID)

    def ReqQryParkedOrder(self, pQryParkedOrder, nRequestID):
        '''请求查询预埋单'''
        return _ctp_Trader.ReqQryParkedOrder(self.api_ptr, pQryParkedOrder, nRequestID)

    def ReqQryEWarrantOffset(self, pQryEWarrantOffset, nRequestID):
        '''请求查询仓单折抵信息'''
        return _ctp_Trader.ReqQryEWarrantOffset(self.api_ptr, pQryEWarrantOffset, nRequestID)

    def ReqQryInvestorPositionDetail(self, pQryInvestorPositionDetail, nRequestID):
        '''请求查询投资者持仓明细'''
        return _ctp_Trader.ReqQryInvestorPositionDetail(self.api_ptr, pQryInvestorPositionDetail, nRequestID)

    def ReqRemoveParkedOrder(self, pRemoveParkedOrder, nRequestID):
        '''请求删除预埋单'''
        return _ctp_Trader.ReqRemoveParkedOrder(self.api_ptr, pRemoveParkedOrder, nRequestID)

    def SubscribePrivateTopic(self, nResumeType):
        '''订阅私有流。
@param nResumeType 私有流重传方式
        THOST_TERT_RESTART:从本交易日开始重传
        THOST_TERT_RESUME:从上次收到的续传
        THOST_TERT_QUICK:只传送登录后私有流的内容
@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。'''
        return _ctp_Trader.SubscribePrivateTopic(self.api_ptr, nResumeType)

