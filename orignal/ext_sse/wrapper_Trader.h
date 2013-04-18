/*

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
*/

#ifndef WRAPPER_H
#define WRAPPER_H

//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "ThostFtdcTraderApiSSE.h"

class MySpiWrapper : public CZQThostFtdcTraderSpi
{
 public:
  MySpiWrapper(PyObject * parent);

  virtual void OnRspQryInstrument(CZQThostFtdcInstrumentField* pInstrument, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnFrontDisconnected(int nReason);
  virtual void OnRspQryExchange(CZQThostFtdcExchangeField* pExchange, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspOrderAction(CZQThostFtdcInputOrderActionField* pInputOrderAction, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryInvestorPositionDetail(CZQThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspError(CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserLogin(CZQThostFtdcRspUserLoginField* pRspUserLogin, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnErrRtnOrderAction(CZQThostFtdcOrderActionField* pOrderAction, CZQThostFtdcRspInfoField* pRspInfo);
  virtual void OnRtnInstrumentStatus(CZQThostFtdcInstrumentStatusField* pInstrumentStatus);
  virtual void OnRspOrderInsert(CZQThostFtdcInputOrderField* pInputOrder, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserPasswordUpdate(CZQThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnHeartBeatWarning(int nTimeLapse);
  virtual void OnRspQryTradingCode(CZQThostFtdcTradingCodeField* pTradingCode, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryInvestorPosition(CZQThostFtdcInvestorPositionField* pInvestorPosition, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserLogout(CZQThostFtdcUserLogoutField* pUserLogout, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryInvestor(CZQThostFtdcInvestorField* pInvestor, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspAuthenticate(CZQThostFtdcRspAuthenticateField* pRspAuthenticateField, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQueryMaxOrderVolume(CZQThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnTrade(CZQThostFtdcTradeField* pTrade);
  virtual void OnErrRtnOrderInsert(CZQThostFtdcInputOrderField* pInputOrder, CZQThostFtdcRspInfoField* pRspInfo);
  virtual void OnRspQryTradingAccount(CZQThostFtdcTradingAccountField* pTradingAccount, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspTradingAccountPasswordUpdate(CZQThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnOrder(CZQThostFtdcOrderField* pOrder);
  virtual void OnRspQryDepthMarketData(CZQThostFtdcDepthMarketDataField* pDepthMarketData, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnFrontConnected();
  virtual void OnRspQryInstrumentCommissionRate(CZQThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryOrder(CZQThostFtdcOrderField* pOrder, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspQryTrade(CZQThostFtdcTradeField* pTrade, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

 private:
  PyObject * py_spi;
};

#endif
