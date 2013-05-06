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

#pragma warning(disable : 4996)

//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "ThostFtdcTraderApi.h"
#include "wrapper_Trader.h"
#include "struct.h"

/*
#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_MD_API_EXPORT
#define MD_API_EXPORT __declspec(dllexport)
#else
#define MD_API_EXPORT __declspec(dllimport)
#endif
#else
#define MD_API_EXPORT
#endif
*/

//using namespace std;  

static PyObject* create_TraderApi(PyObject* self, PyObject *args)
{
  char * flowpath;
  bool IsUsingUdp;

  PyArg_ParseTuple(args, "sb", &flowpath, &IsUsingUdp);
  void *p = CThostFtdcTraderApi::CreateFtdcTraderApi(flowpath, IsUsingUdp);
  return PyInt_FromLong((long)p);
}


static PyObject* Trader_ReqQryTradingAccount(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTradingAccount = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryTradingAccountField* pQryTradingAccount = from_CThostFtdcQryTradingAccountField(py_pQryTradingAccount);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTradingAccount(pQryTradingAccount, nRequestID));
  free(pQryTradingAccount);
  return ret;
}

static PyObject* Trader_ReqQryExchange(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryExchange = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryExchangeField* pQryExchange = from_CThostFtdcQryExchangeField(py_pQryExchange);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryExchange(pQryExchange, nRequestID));
  free(pQryExchange);
  return ret;
}

static PyObject* Trader_ReqUserPasswordUpdate(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pUserPasswordUpdate = PyTuple_GET_ITEM(args, 1);
  CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate = from_CThostFtdcUserPasswordUpdateField(py_pUserPasswordUpdate);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserPasswordUpdate(pUserPasswordUpdate, nRequestID));
  free(pUserPasswordUpdate);
  return ret;
}

static PyObject* Trader_ReqQryTradingNotice(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTradingNotice = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryTradingNoticeField* pQryTradingNotice = from_CThostFtdcQryTradingNoticeField(py_pQryTradingNotice);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTradingNotice(pQryTradingNotice, nRequestID));
  free(pQryTradingNotice);
  return ret;
}

static PyObject* Trader_ReqQryTrade(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTrade = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryTradeField* pQryTrade = from_CThostFtdcQryTradeField(py_pQryTrade);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTrade(pQryTrade, nRequestID));
  free(pQryTrade);
  return ret;
}

static PyObject* Trader_ReqQueryMaxOrderVolume(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQueryMaxOrderVolume = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume = from_CThostFtdcQueryMaxOrderVolumeField(py_pQueryMaxOrderVolume);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQueryMaxOrderVolume(pQueryMaxOrderVolume, nRequestID));
  free(pQueryMaxOrderVolume);
  return ret;
}

static PyObject* Trader_ReqSettlementInfoConfirm(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSettlementInfoConfirm = PyTuple_GET_ITEM(args, 1);
  CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm = from_CThostFtdcSettlementInfoConfirmField(py_pSettlementInfoConfirm);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqSettlementInfoConfirm(pSettlementInfoConfirm, nRequestID));
  free(pSettlementInfoConfirm);
  return ret;
}

static PyObject* Trader_ReqQryInvestorPosition(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInvestorPosition = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryInvestorPositionField* pQryInvestorPosition = from_CThostFtdcQryInvestorPositionField(py_pQryInvestorPosition);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInvestorPosition(pQryInvestorPosition, nRequestID));
  free(pQryInvestorPosition);
  return ret;
}

static PyObject* Trader_ReqQryBrokerTradingAlgos(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryBrokerTradingAlgos = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryBrokerTradingAlgosField* pQryBrokerTradingAlgos = from_CThostFtdcQryBrokerTradingAlgosField(py_pQryBrokerTradingAlgos);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryBrokerTradingAlgos(pQryBrokerTradingAlgos, nRequestID));
  free(pQryBrokerTradingAlgos);
  return ret;
}

static PyObject* Trader_ReqQryOrder(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryOrder = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryOrderField* pQryOrder = from_CThostFtdcQryOrderField(py_pQryOrder);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryOrder(pQryOrder, nRequestID));
  free(pQryOrder);
  return ret;
}

static PyObject* Trader_Init(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Init();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_ReqQryTradingCode(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTradingCode = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryTradingCodeField* pQryTradingCode = from_CThostFtdcQryTradingCodeField(py_pQryTradingCode);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTradingCode(pQryTradingCode, nRequestID));
  free(pQryTradingCode);
  return ret;
}

static PyObject* Trader_ReqUserLogin(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqUserLoginField = PyTuple_GET_ITEM(args, 1);
  CThostFtdcReqUserLoginField* pReqUserLoginField = from_CThostFtdcReqUserLoginField(py_pReqUserLoginField);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogin(pReqUserLoginField, nRequestID));
  free(pReqUserLoginField);
  return ret;
}

static PyObject* Trader_ReqFromFutureToBankByFuture(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqTransfer = PyTuple_GET_ITEM(args, 1);
  CThostFtdcReqTransferField* pReqTransfer = from_CThostFtdcReqTransferField(py_pReqTransfer);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqFromFutureToBankByFuture(pReqTransfer, nRequestID));
  free(pReqTransfer);
  return ret;
}

static PyObject* Trader_RegisterSpi(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSpi = PyTuple_GET_ITEM(args, 1);
  CThostFtdcTraderSpi* pSpi = new MySpiWrapper(py_pSpi);
  user->RegisterSpi(pSpi);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_SubscribePublicTopic(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_nResumeType = PyTuple_GET_ITEM(args, 1);
  THOST_TE_RESUME_TYPE nResumeType = (THOST_TE_RESUME_TYPE)PyInt_AsLong(py_nResumeType);
  user->SubscribePublicTopic(nResumeType);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_GetTradingDay(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("s", user->GetTradingDay());
  return ret;
}

static PyObject* Trader_ReqFromBankToFutureByFuture(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqTransfer = PyTuple_GET_ITEM(args, 1);
  CThostFtdcReqTransferField* pReqTransfer = from_CThostFtdcReqTransferField(py_pReqTransfer);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqFromBankToFutureByFuture(pReqTransfer, nRequestID));
  free(pReqTransfer);
  return ret;
}

static PyObject* Trader_ReqQryTransferSerial(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTransferSerial = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryTransferSerialField* pQryTransferSerial = from_CThostFtdcQryTransferSerialField(py_pQryTransferSerial);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTransferSerial(pQryTransferSerial, nRequestID));
  free(pQryTransferSerial);
  return ret;
}

static PyObject* Trader_ReqUserLogout(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pUserLogout = PyTuple_GET_ITEM(args, 1);
  CThostFtdcUserLogoutField* pUserLogout = from_CThostFtdcUserLogoutField(py_pUserLogout);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogout(pUserLogout, nRequestID));
  free(pUserLogout);
  return ret;
}

static PyObject* Trader_ReqQryBrokerTradingParams(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryBrokerTradingParams = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryBrokerTradingParamsField* pQryBrokerTradingParams = from_CThostFtdcQryBrokerTradingParamsField(py_pQryBrokerTradingParams);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryBrokerTradingParams(pQryBrokerTradingParams, nRequestID));
  free(pQryBrokerTradingParams);
  return ret;
}

static PyObject* Trader_ReqQrySettlementInfoConfirm(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQrySettlementInfoConfirm = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQrySettlementInfoConfirmField* pQrySettlementInfoConfirm = from_CThostFtdcQrySettlementInfoConfirmField(py_pQrySettlementInfoConfirm);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQrySettlementInfoConfirm(pQrySettlementInfoConfirm, nRequestID));
  free(pQrySettlementInfoConfirm);
  return ret;
}

static PyObject* Trader_ReqQryNotice(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryNotice = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryNoticeField* pQryNotice = from_CThostFtdcQryNoticeField(py_pQryNotice);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryNotice(pQryNotice, nRequestID));
  free(pQryNotice);
  return ret;
}

static PyObject* Trader_ReqParkedOrderInsert(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pParkedOrder = PyTuple_GET_ITEM(args, 1);
  CThostFtdcParkedOrderField* pParkedOrder = from_CThostFtdcParkedOrderField(py_pParkedOrder);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqParkedOrderInsert(pParkedOrder, nRequestID));
  free(pParkedOrder);
  return ret;
}

static PyObject* Trader_ReqQryContractBank(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryContractBank = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryContractBankField* pQryContractBank = from_CThostFtdcQryContractBankField(py_pQryContractBank);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryContractBank(pQryContractBank, nRequestID));
  free(pQryContractBank);
  return ret;
}

static PyObject* Trader_ReqQryInvestorPositionCombineDetail(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInvestorPositionCombineDetail = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryInvestorPositionCombineDetailField* pQryInvestorPositionCombineDetail = from_CThostFtdcQryInvestorPositionCombineDetailField(py_pQryInvestorPositionCombineDetail);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInvestorPositionCombineDetail(pQryInvestorPositionCombineDetail, nRequestID));
  free(pQryInvestorPositionCombineDetail);
  return ret;
}

static PyObject* Trader_ReqParkedOrderAction(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pParkedOrderAction = PyTuple_GET_ITEM(args, 1);
  CThostFtdcParkedOrderActionField* pParkedOrderAction = from_CThostFtdcParkedOrderActionField(py_pParkedOrderAction);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqParkedOrderAction(pParkedOrderAction, nRequestID));
  free(pParkedOrderAction);
  return ret;
}

static PyObject* Trader_ReqQueryBankAccountMoneyByFuture(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqQueryAccount = PyTuple_GET_ITEM(args, 1);
  CThostFtdcReqQueryAccountField* pReqQueryAccount = from_CThostFtdcReqQueryAccountField(py_pReqQueryAccount);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQueryBankAccountMoneyByFuture(pReqQueryAccount, nRequestID));
  free(pReqQueryAccount);
  return ret;
}

static PyObject* Trader_Join(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("i", user->Join());
  return ret;
}

static PyObject* Trader_ReqQryParkedOrderAction(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryParkedOrderAction = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryParkedOrderActionField* pQryParkedOrderAction = from_CThostFtdcQryParkedOrderActionField(py_pQryParkedOrderAction);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryParkedOrderAction(pQryParkedOrderAction, nRequestID));
  free(pQryParkedOrderAction);
  return ret;
}

static PyObject* Trader_ReqAuthenticate(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqAuthenticateField = PyTuple_GET_ITEM(args, 1);
  CThostFtdcReqAuthenticateField* pReqAuthenticateField = from_CThostFtdcReqAuthenticateField(py_pReqAuthenticateField);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqAuthenticate(pReqAuthenticateField, nRequestID));
  free(pReqAuthenticateField);
  return ret;
}

static PyObject* Trader_ReqOrderInsert(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pInputOrder = PyTuple_GET_ITEM(args, 1);
  CThostFtdcInputOrderField* pInputOrder = from_CThostFtdcInputOrderField(py_pInputOrder);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqOrderInsert(pInputOrder, nRequestID));
  free(pInputOrder);
  return ret;
}

static PyObject* Trader_ReqQrySettlementInfo(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQrySettlementInfo = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQrySettlementInfoField* pQrySettlementInfo = from_CThostFtdcQrySettlementInfoField(py_pQrySettlementInfo);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQrySettlementInfo(pQrySettlementInfo, nRequestID));
  free(pQrySettlementInfo);
  return ret;
}

static PyObject* Trader_ReqQryInstrument(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInstrument = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryInstrumentField* pQryInstrument = from_CThostFtdcQryInstrumentField(py_pQryInstrument);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInstrument(pQryInstrument, nRequestID));
  free(pQryInstrument);
  return ret;
}

static PyObject* Trader_ReqOrderAction(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pInputOrderAction = PyTuple_GET_ITEM(args, 1);
  CThostFtdcInputOrderActionField* pInputOrderAction = from_CThostFtdcInputOrderActionField(py_pInputOrderAction);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqOrderAction(pInputOrderAction, nRequestID));
  free(pInputOrderAction);
  return ret;
}

static PyObject* Trader_ReqQryInstrumentCommissionRate(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInstrumentCommissionRate = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryInstrumentCommissionRateField* pQryInstrumentCommissionRate = from_CThostFtdcQryInstrumentCommissionRateField(py_pQryInstrumentCommissionRate);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInstrumentCommissionRate(pQryInstrumentCommissionRate, nRequestID));
  free(pQryInstrumentCommissionRate);
  return ret;
}

static PyObject* Trader_Release(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Release();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_ReqQryInstrumentMarginRate(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInstrumentMarginRate = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryInstrumentMarginRateField* pQryInstrumentMarginRate = from_CThostFtdcQryInstrumentMarginRateField(py_pQryInstrumentMarginRate);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInstrumentMarginRate(pQryInstrumentMarginRate, nRequestID));
  free(pQryInstrumentMarginRate);
  return ret;
}

static PyObject* Trader_ReqQryInvestor(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInvestor = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryInvestorField* pQryInvestor = from_CThostFtdcQryInvestorField(py_pQryInvestor);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInvestor(pQryInvestor, nRequestID));
  free(pQryInvestor);
  return ret;
}

static PyObject* Trader_ReqQryDepthMarketData(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryDepthMarketData = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryDepthMarketDataField* pQryDepthMarketData = from_CThostFtdcQryDepthMarketDataField(py_pQryDepthMarketData);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryDepthMarketData(pQryDepthMarketData, nRequestID));
  free(pQryDepthMarketData);
  return ret;
}

static PyObject* Trader_RegisterFront(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pszFrontAddress = PyTuple_GET_ITEM(args, 1);
  char* pszFrontAddress = PyString_AsString(py_pszFrontAddress);
  user->RegisterFront(pszFrontAddress);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_ReqRemoveParkedOrderAction(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pRemoveParkedOrderAction = PyTuple_GET_ITEM(args, 1);
  CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction = from_CThostFtdcRemoveParkedOrderActionField(py_pRemoveParkedOrderAction);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqRemoveParkedOrderAction(pRemoveParkedOrderAction, nRequestID));
  free(pRemoveParkedOrderAction);
  return ret;
}

static PyObject* Trader_ReqQryTransferBank(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTransferBank = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryTransferBankField* pQryTransferBank = from_CThostFtdcQryTransferBankField(py_pQryTransferBank);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTransferBank(pQryTransferBank, nRequestID));
  free(pQryTransferBank);
  return ret;
}

static PyObject* Trader_ReqQryCFMMCTradingAccountKey(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryCFMMCTradingAccountKey = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryCFMMCTradingAccountKeyField* pQryCFMMCTradingAccountKey = from_CThostFtdcQryCFMMCTradingAccountKeyField(py_pQryCFMMCTradingAccountKey);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryCFMMCTradingAccountKey(pQryCFMMCTradingAccountKey, nRequestID));
  free(pQryCFMMCTradingAccountKey);
  return ret;
}

static PyObject* Trader_ReqTradingAccountPasswordUpdate(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pTradingAccountPasswordUpdate = PyTuple_GET_ITEM(args, 1);
  CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate = from_CThostFtdcTradingAccountPasswordUpdateField(py_pTradingAccountPasswordUpdate);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, nRequestID));
  free(pTradingAccountPasswordUpdate);
  return ret;
}

static PyObject* Trader_ReqQryAccountregister(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryAccountregister = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryAccountregisterField* pQryAccountregister = from_CThostFtdcQryAccountregisterField(py_pQryAccountregister);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryAccountregister(pQryAccountregister, nRequestID));
  free(pQryAccountregister);
  return ret;
}

static PyObject* Trader_ReqQryParkedOrder(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryParkedOrder = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryParkedOrderField* pQryParkedOrder = from_CThostFtdcQryParkedOrderField(py_pQryParkedOrder);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryParkedOrder(pQryParkedOrder, nRequestID));
  free(pQryParkedOrder);
  return ret;
}

static PyObject* Trader_ReqQryEWarrantOffset(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryEWarrantOffset = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryEWarrantOffsetField* pQryEWarrantOffset = from_CThostFtdcQryEWarrantOffsetField(py_pQryEWarrantOffset);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryEWarrantOffset(pQryEWarrantOffset, nRequestID));
  free(pQryEWarrantOffset);
  return ret;
}

static PyObject* Trader_ReqQryInvestorPositionDetail(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInvestorPositionDetail = PyTuple_GET_ITEM(args, 1);
  CThostFtdcQryInvestorPositionDetailField* pQryInvestorPositionDetail = from_CThostFtdcQryInvestorPositionDetailField(py_pQryInvestorPositionDetail);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInvestorPositionDetail(pQryInvestorPositionDetail, nRequestID));
  free(pQryInvestorPositionDetail);
  return ret;
}

static PyObject* Trader_ReqRemoveParkedOrder(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pRemoveParkedOrder = PyTuple_GET_ITEM(args, 1);
  CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder = from_CThostFtdcRemoveParkedOrderField(py_pRemoveParkedOrder);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqRemoveParkedOrder(pRemoveParkedOrder, nRequestID));
  free(pRemoveParkedOrder);
  return ret;
}

static PyObject* Trader_SubscribePrivateTopic(PyObject * self, PyObject * args){
  CThostFtdcTraderApi * user = (CThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_nResumeType = PyTuple_GET_ITEM(args, 1);
  THOST_TE_RESUME_TYPE nResumeType = (THOST_TE_RESUME_TYPE)PyInt_AsLong(py_nResumeType);
  user->SubscribePrivateTopic(nResumeType);


  Py_INCREF(Py_None);
  return Py_None;
}

extern "C" void init_ctp_Trader_future()
{
   static PyMethodDef mbMethods[] = {
     {"create_TraderApi", create_TraderApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

     {"ReqQryTradingAccount", Trader_ReqQryTradingAccount, METH_VARARGS} ,
     {"ReqQryExchange", Trader_ReqQryExchange, METH_VARARGS} ,
     {"ReqUserPasswordUpdate", Trader_ReqUserPasswordUpdate, METH_VARARGS} ,
     {"ReqQryTradingNotice", Trader_ReqQryTradingNotice, METH_VARARGS} ,
     {"ReqQryTrade", Trader_ReqQryTrade, METH_VARARGS} ,
     {"ReqQueryMaxOrderVolume", Trader_ReqQueryMaxOrderVolume, METH_VARARGS} ,
     {"ReqSettlementInfoConfirm", Trader_ReqSettlementInfoConfirm, METH_VARARGS} ,
     {"ReqQryInvestorPosition", Trader_ReqQryInvestorPosition, METH_VARARGS} ,
     {"ReqQryBrokerTradingAlgos", Trader_ReqQryBrokerTradingAlgos, METH_VARARGS} ,
     {"ReqQryOrder", Trader_ReqQryOrder, METH_VARARGS} ,
     {"Init", Trader_Init, METH_VARARGS} ,
     {"ReqQryTradingCode", Trader_ReqQryTradingCode, METH_VARARGS} ,
     {"ReqUserLogin", Trader_ReqUserLogin, METH_VARARGS} ,
     {"ReqFromFutureToBankByFuture", Trader_ReqFromFutureToBankByFuture, METH_VARARGS} ,
     {"RegisterSpi", Trader_RegisterSpi, METH_VARARGS} ,
     {"SubscribePublicTopic", Trader_SubscribePublicTopic, METH_VARARGS} ,
     {"GetTradingDay", Trader_GetTradingDay, METH_VARARGS} ,
     {"ReqFromBankToFutureByFuture", Trader_ReqFromBankToFutureByFuture, METH_VARARGS} ,
     {"ReqQryTransferSerial", Trader_ReqQryTransferSerial, METH_VARARGS} ,
     {"ReqUserLogout", Trader_ReqUserLogout, METH_VARARGS} ,
     {"ReqQryBrokerTradingParams", Trader_ReqQryBrokerTradingParams, METH_VARARGS} ,
     {"ReqQrySettlementInfoConfirm", Trader_ReqQrySettlementInfoConfirm, METH_VARARGS} ,
     {"ReqQryNotice", Trader_ReqQryNotice, METH_VARARGS} ,
     {"ReqParkedOrderInsert", Trader_ReqParkedOrderInsert, METH_VARARGS} ,
     {"ReqQryContractBank", Trader_ReqQryContractBank, METH_VARARGS} ,
     {"ReqQryInvestorPositionCombineDetail", Trader_ReqQryInvestorPositionCombineDetail, METH_VARARGS} ,
     {"ReqParkedOrderAction", Trader_ReqParkedOrderAction, METH_VARARGS} ,
     {"ReqQueryBankAccountMoneyByFuture", Trader_ReqQueryBankAccountMoneyByFuture, METH_VARARGS} ,
     {"Join", Trader_Join, METH_VARARGS} ,
     {"ReqQryParkedOrderAction", Trader_ReqQryParkedOrderAction, METH_VARARGS} ,
     {"ReqAuthenticate", Trader_ReqAuthenticate, METH_VARARGS} ,
     {"ReqOrderInsert", Trader_ReqOrderInsert, METH_VARARGS} ,
     {"ReqQrySettlementInfo", Trader_ReqQrySettlementInfo, METH_VARARGS} ,
     {"ReqQryInstrument", Trader_ReqQryInstrument, METH_VARARGS} ,
     {"ReqOrderAction", Trader_ReqOrderAction, METH_VARARGS} ,
     {"ReqQryInstrumentCommissionRate", Trader_ReqQryInstrumentCommissionRate, METH_VARARGS} ,
     {"Release", Trader_Release, METH_VARARGS} ,
     {"ReqQryInstrumentMarginRate", Trader_ReqQryInstrumentMarginRate, METH_VARARGS} ,
     {"ReqQryInvestor", Trader_ReqQryInvestor, METH_VARARGS} ,
     {"ReqQryDepthMarketData", Trader_ReqQryDepthMarketData, METH_VARARGS} ,
     {"RegisterFront", Trader_RegisterFront, METH_VARARGS} ,
     {"ReqRemoveParkedOrderAction", Trader_ReqRemoveParkedOrderAction, METH_VARARGS} ,
     {"ReqQryTransferBank", Trader_ReqQryTransferBank, METH_VARARGS} ,
     {"ReqQryCFMMCTradingAccountKey", Trader_ReqQryCFMMCTradingAccountKey, METH_VARARGS} ,
     {"ReqTradingAccountPasswordUpdate", Trader_ReqTradingAccountPasswordUpdate, METH_VARARGS} ,
     {"ReqQryAccountregister", Trader_ReqQryAccountregister, METH_VARARGS} ,
     {"ReqQryParkedOrder", Trader_ReqQryParkedOrder, METH_VARARGS} ,
     {"ReqQryEWarrantOffset", Trader_ReqQryEWarrantOffset, METH_VARARGS} ,
     {"ReqQryInvestorPositionDetail", Trader_ReqQryInvestorPositionDetail, METH_VARARGS} ,
     {"ReqRemoveParkedOrder", Trader_ReqRemoveParkedOrder, METH_VARARGS} ,
     {"SubscribePrivateTopic", Trader_SubscribePrivateTopic, METH_VARARGS} ,

     {NULL, NULL, NULL} /*sentinel，哨兵，用来标识结束*/
   };

   PyObject *m = Py_InitModule("_ctp_Trader_future", mbMethods);

   PyEval_InitThreads();
}

