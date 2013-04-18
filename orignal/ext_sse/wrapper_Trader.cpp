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

#include "struct.h"
#include "wrapper_Trader.h"
        
MySpiWrapper::MySpiWrapper(PyObject * parent):CZQThostFtdcTraderSpi(){
  py_spi = parent;
  Py_INCREF(py_spi);
}


void MySpiWrapper::OnRspQryInstrument(CZQThostFtdcInstrumentField* pInstrument, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInstrument", (char*)"NNib", new_CZQThostFtdcInstrumentField(pInstrument), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnFrontDisconnected(int nReason){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontDisconnected", (char*)"i", nReason)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryExchange(CZQThostFtdcExchangeField* pExchange, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryExchange", (char*)"NNib", new_CZQThostFtdcExchangeField(pExchange), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspOrderAction(CZQThostFtdcInputOrderActionField* pInputOrderAction, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspOrderAction", (char*)"NNib", new_CZQThostFtdcInputOrderActionField(pInputOrderAction), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestorPositionDetail(CZQThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestorPositionDetail", (char*)"NNib", new_CZQThostFtdcInvestorPositionDetailField(pInvestorPositionDetail), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspError(CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspError", (char*)"Nib", new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUserLogin(CZQThostFtdcRspUserLoginField* pRspUserLogin, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserLogin", (char*)"NNib", new_CZQThostFtdcRspUserLoginField(pRspUserLogin), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnOrderAction(CZQThostFtdcOrderActionField* pOrderAction, CZQThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnOrderAction", (char*)"NN", new_CZQThostFtdcOrderActionField(pOrderAction), new_CZQThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnInstrumentStatus(CZQThostFtdcInstrumentStatusField* pInstrumentStatus){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnInstrumentStatus", (char*)"N", new_CZQThostFtdcInstrumentStatusField(pInstrumentStatus))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspOrderInsert(CZQThostFtdcInputOrderField* pInputOrder, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspOrderInsert", (char*)"NNib", new_CZQThostFtdcInputOrderField(pInputOrder), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUserPasswordUpdate(CZQThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserPasswordUpdate", (char*)"NNib", new_CZQThostFtdcUserPasswordUpdateField(pUserPasswordUpdate), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnHeartBeatWarning(int nTimeLapse){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnHeartBeatWarning", (char*)"i", nTimeLapse)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTradingCode(CZQThostFtdcTradingCodeField* pTradingCode, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTradingCode", (char*)"NNib", new_CZQThostFtdcTradingCodeField(pTradingCode), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestorPosition(CZQThostFtdcInvestorPositionField* pInvestorPosition, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestorPosition", (char*)"NNib", new_CZQThostFtdcInvestorPositionField(pInvestorPosition), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUserLogout(CZQThostFtdcUserLogoutField* pUserLogout, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserLogout", (char*)"NNib", new_CZQThostFtdcUserLogoutField(pUserLogout), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInvestor(CZQThostFtdcInvestorField* pInvestor, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInvestor", (char*)"NNib", new_CZQThostFtdcInvestorField(pInvestor), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspAuthenticate(CZQThostFtdcRspAuthenticateField* pRspAuthenticateField, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspAuthenticate", (char*)"NNib", new_CZQThostFtdcRspAuthenticateField(pRspAuthenticateField), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQueryMaxOrderVolume(CZQThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQueryMaxOrderVolume", (char*)"NNib", new_CZQThostFtdcQueryMaxOrderVolumeField(pQueryMaxOrderVolume), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnTrade(CZQThostFtdcTradeField* pTrade){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnTrade", (char*)"N", new_CZQThostFtdcTradeField(pTrade))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnErrRtnOrderInsert(CZQThostFtdcInputOrderField* pInputOrder, CZQThostFtdcRspInfoField* pRspInfo){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnErrRtnOrderInsert", (char*)"NN", new_CZQThostFtdcInputOrderField(pInputOrder), new_CZQThostFtdcRspInfoField(pRspInfo))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTradingAccount(CZQThostFtdcTradingAccountField* pTradingAccount, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTradingAccount", (char*)"NNib", new_CZQThostFtdcTradingAccountField(pTradingAccount), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspTradingAccountPasswordUpdate(CZQThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspTradingAccountPasswordUpdate", (char*)"NNib", new_CZQThostFtdcTradingAccountPasswordUpdateField(pTradingAccountPasswordUpdate), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnOrder(CZQThostFtdcOrderField* pOrder){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnOrder", (char*)"N", new_CZQThostFtdcOrderField(pOrder))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryDepthMarketData(CZQThostFtdcDepthMarketDataField* pDepthMarketData, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryDepthMarketData", (char*)"NNib", new_CZQThostFtdcDepthMarketDataField(pDepthMarketData), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnFrontConnected(){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontConnected", NULL))
{
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryInstrumentCommissionRate(CZQThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryInstrumentCommissionRate", (char*)"NNib", new_CZQThostFtdcInstrumentCommissionRateField(pInstrumentCommissionRate), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryOrder(CZQThostFtdcOrderField* pOrder, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryOrder", (char*)"NNib", new_CZQThostFtdcOrderField(pOrder), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspQryTrade(CZQThostFtdcTradeField* pTrade, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspQryTrade", (char*)"NNib", new_CZQThostFtdcTradeField(pTrade), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
