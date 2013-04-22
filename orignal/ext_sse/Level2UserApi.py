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

import _ctp_Level2User
import os
import UserApiStruct

_ctp_Level2User.register_struct(UserApiStruct)

class Level2UserSpi:
    def register_api(self, api):
        self.api=api

    def OnRtnLevel2MarketData(self, pLevel2MarketData):
        '''Level2行情通知'''
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

    def OnRspUserLogout(self, pUserLogout, pRspInfo, nRequestID, bIsLast):
        '''登出请求响应'''
        pass

    def OnRspSubNGTSIndex(self, pSpecificSecurity, pRspInfo, nRequestID, bIsLast):
        '''订阅Level2指数行情应答'''
        pass

    def OnRspSubLevel2MarketData(self, pSpecificSecurity, pRspInfo, nRequestID, bIsLast):
        '''订阅Level2行情应答'''
        pass

    def CThostFtdcLevel2UserSpi(self, ):
        ''''''
        pass

    def OnHeartBeatWarning(self, nTimeLapse):
        '''心跳超时警告。当长时间未收到报文时，该方法被调用。
@param nTimeLapse 距离上次接收报文的时间'''
        pass

    def OnRspError(self, pRspInfo, nRequestID, bIsLast):
        '''错误应答'''
        pass

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        '''登录请求响应'''
        pass

    def OnFrontConnected(self, ):
        '''当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。'''
        pass

    def OnRspUnSubNGTSIndex(self, pSpecificSecurity, pRspInfo, nRequestID, bIsLast):
        '''取消订阅Level2指数行情应答'''
        pass

    def OnRspUnSubLevel2MarketData(self, pSpecificSecurity, pRspInfo, nRequestID, bIsLast):
        '''取消订阅Level2行情应答'''
        pass

    def OnRtnNGTSIndex(self, pNGTSIndex):
        '''Level2指数行情通知'''
        pass


class Level2UserApi:
    @staticmethod
    def CreateLevel2UserApi(FlowPath="", IsUsingUdp=False):
        if FlowPath:
            FlowPath=os.path.abspath(FlowPath)
        api_ptr=_ctp_Level2User.create_Level2UserApi(FlowPath, IsUsingUdp)
        return Level2UserApi(api_ptr)

    def __init__(self, api_ptr):
        self.api_ptr = api_ptr

    def UnSubscribeLevel2MarketData(self, pSecurityList, nCount):
        ''''''
        return _ctp_Level2User.UnSubscribeLevel2MarketData(self.api_ptr, pSecurityList, nCount)

    def ReqUserLogout(self, pUserLogout, nRequestID):
        '''登出请求'''
        return _ctp_Level2User.ReqUserLogout(self.api_ptr, pUserLogout, nRequestID)

    def Join(self, ):
        '''等待接口线程结束运行
@return 线程退出代码'''
        return _ctp_Level2User.Join(self.api_ptr, )

    def SubscribeLevel2MarketData(self, pSecurityList, nCount):
        ''''''
        return _ctp_Level2User.SubscribeLevel2MarketData(self.api_ptr, pSecurityList, nCount)

    def RegisterFront(self, pszFrontAddress):
        '''注册前置机网络地址
@param pszFrontAddress：前置机网络地址。
@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。
@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。'''
        return _ctp_Level2User.RegisterFront(self.api_ptr, pszFrontAddress)

    def Init(self, ):
        '''初始化
@remark 初始化运行环境,只有调用后,接口才开始工作'''
        return _ctp_Level2User.Init(self.api_ptr, )

    def ReqUserLogin(self, pReqUserLoginField, nRequestID):
        '''用户登录请求'''
        return _ctp_Level2User.ReqUserLogin(self.api_ptr, pReqUserLoginField, nRequestID)

    def Release(self, ):
        '''删除接口对象本身
@remark 不再使用本接口对象时,调用该函数删除接口对象'''
        return _ctp_Level2User.Release(self.api_ptr, )

    def SubscribePublicTopic(self, nResumeType):
        '''订阅公共流。
@param nResumeType 公共流重传方式
        THOST_TERT_RESTART:从本交易日开始重传
        THOST_TERT_RESUME:从上次收到的续传
        THOST_TERT_QUICK:只传送登录后公共流的内容
@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。'''
        return _ctp_Level2User.SubscribePublicTopic(self.api_ptr, nResumeType)

    def GetTradingDay(self, ):
        '''获取当前交易日
@retrun 获取到的交易日
@remark 只有登录成功后,才能得到正确的交易日'''
        return _ctp_Level2User.GetTradingDay(self.api_ptr, )

    def UnSubscribeNGTSIndex(self, pSecurityList, nCount):
        ''''''
        return _ctp_Level2User.UnSubscribeNGTSIndex(self.api_ptr, pSecurityList, nCount)

    def SubscribeNGTSIndex(self, pSecurityList, nCount):
        ''''''
        return _ctp_Level2User.SubscribeNGTSIndex(self.api_ptr, pSecurityList, nCount)

    def RegisterSpi(self, pSpi):
        '''注册回调接口
@param pSpi 派生自回调接口类的实例'''
        ret = _ctp_Level2User.RegisterSpi(self.api_ptr, pSpi)
        pSpi.register_api(self)
        return ret

