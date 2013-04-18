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


//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "ThostFtdcTraderApiSSE.h"
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
  void *p = CZQThostFtdcTraderApi::CreateFtdcTraderApi(flowpath, IsUsingUdp);
  return PyInt_FromLong((long)p);
}


static PyObject* Trader_ReqQryTradingAccount(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTradingAccount = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryTradingAccountField* pQryTradingAccount = from_CZQThostFtdcQryTradingAccountField(py_pQryTradingAccount);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTradingAccount(pQryTradingAccount, nRequestID));
  free(pQryTradingAccount);
  return ret;
}

static PyObject* Trader_ReqQryExchange(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryExchange = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryExchangeField* pQryExchange = from_CZQThostFtdcQryExchangeField(py_pQryExchange);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryExchange(pQryExchange, nRequestID));
  free(pQryExchange);
  return ret;
}

static PyObject* Trader_ReqUserPasswordUpdate(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pUserPasswordUpdate = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcUserPasswordUpdateField* pUserPasswordUpdate = from_CZQThostFtdcUserPasswordUpdateField(py_pUserPasswordUpdate);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserPasswordUpdate(pUserPasswordUpdate, nRequestID));
  free(pUserPasswordUpdate);
  return ret;
}

static PyObject* Trader_ReqQryTrade(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTrade = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryTradeField* pQryTrade = from_CZQThostFtdcQryTradeField(py_pQryTrade);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTrade(pQryTrade, nRequestID));
  free(pQryTrade);
  return ret;
}

static PyObject* Trader_ReqQueryMaxOrderVolume(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQueryMaxOrderVolume = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume = from_CZQThostFtdcQueryMaxOrderVolumeField(py_pQueryMaxOrderVolume);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQueryMaxOrderVolume(pQueryMaxOrderVolume, nRequestID));
  free(pQueryMaxOrderVolume);
  return ret;
}

static PyObject* Trader_ReqQryInvestorPosition(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInvestorPosition = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryInvestorPositionField* pQryInvestorPosition = from_CZQThostFtdcQryInvestorPositionField(py_pQryInvestorPosition);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInvestorPosition(pQryInvestorPosition, nRequestID));
  free(pQryInvestorPosition);
  return ret;
}

static PyObject* Trader_ReqQryOrder(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryOrder = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryOrderField* pQryOrder = from_CZQThostFtdcQryOrderField(py_pQryOrder);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryOrder(pQryOrder, nRequestID));
  free(pQryOrder);
  return ret;
}

static PyObject* Trader_Init(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Init();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_ReqQryTradingCode(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryTradingCode = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryTradingCodeField* pQryTradingCode = from_CZQThostFtdcQryTradingCodeField(py_pQryTradingCode);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryTradingCode(pQryTradingCode, nRequestID));
  free(pQryTradingCode);
  return ret;
}

static PyObject* Trader_ReqUserLogin(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqUserLoginField = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcReqUserLoginField* pReqUserLoginField = from_CZQThostFtdcReqUserLoginField(py_pReqUserLoginField);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogin(pReqUserLoginField, nRequestID));
  free(pReqUserLoginField);
  return ret;
}

static PyObject* Trader_RegisterSpi(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSpi = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcTraderSpi* pSpi = new MySpiWrapper(py_pSpi);
  user->RegisterSpi(pSpi);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_SubscribePublicTopic(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_nResumeType = PyTuple_GET_ITEM(args, 1);
  ZQTHOST_TE_RESUME_TYPE nResumeType = (ZQTHOST_TE_RESUME_TYPE)PyInt_AsLong(py_nResumeType);
  user->SubscribePublicTopic(nResumeType);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_GetTradingDay(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("s", user->GetTradingDay());
  return ret;
}

static PyObject* Trader_ReqUserLogout(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pUserLogout = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcUserLogoutField* pUserLogout = from_CZQThostFtdcUserLogoutField(py_pUserLogout);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogout(pUserLogout, nRequestID));
  free(pUserLogout);
  return ret;
}

static PyObject* Trader_Join(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("i", user->Join());
  return ret;
}

static PyObject* Trader_ReqAuthenticate(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqAuthenticateField = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcReqAuthenticateField* pReqAuthenticateField = from_CZQThostFtdcReqAuthenticateField(py_pReqAuthenticateField);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqAuthenticate(pReqAuthenticateField, nRequestID));
  free(pReqAuthenticateField);
  return ret;
}

static PyObject* Trader_ReqOrderInsert(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pInputOrder = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcInputOrderField* pInputOrder = from_CZQThostFtdcInputOrderField(py_pInputOrder);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqOrderInsert(pInputOrder, nRequestID));
  free(pInputOrder);
  return ret;
}

static PyObject* Trader_ReqQryInstrument(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInstrument = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryInstrumentField* pQryInstrument = from_CZQThostFtdcQryInstrumentField(py_pQryInstrument);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInstrument(pQryInstrument, nRequestID));
  free(pQryInstrument);
  return ret;
}

static PyObject* Trader_ReqOrderAction(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pInputOrderAction = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcInputOrderActionField* pInputOrderAction = from_CZQThostFtdcInputOrderActionField(py_pInputOrderAction);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqOrderAction(pInputOrderAction, nRequestID));
  free(pInputOrderAction);
  return ret;
}

static PyObject* Trader_ReqQryInstrumentCommissionRate(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInstrumentCommissionRate = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryInstrumentCommissionRateField* pQryInstrumentCommissionRate = from_CZQThostFtdcQryInstrumentCommissionRateField(py_pQryInstrumentCommissionRate);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInstrumentCommissionRate(pQryInstrumentCommissionRate, nRequestID));
  free(pQryInstrumentCommissionRate);
  return ret;
}

static PyObject* Trader_Release(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Release();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_ReqQryInvestor(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInvestor = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryInvestorField* pQryInvestor = from_CZQThostFtdcQryInvestorField(py_pQryInvestor);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInvestor(pQryInvestor, nRequestID));
  free(pQryInvestor);
  return ret;
}

static PyObject* Trader_ReqQryDepthMarketData(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryDepthMarketData = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryDepthMarketDataField* pQryDepthMarketData = from_CZQThostFtdcQryDepthMarketDataField(py_pQryDepthMarketData);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryDepthMarketData(pQryDepthMarketData, nRequestID));
  free(pQryDepthMarketData);
  return ret;
}

static PyObject* Trader_RegisterFront(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pszFrontAddress = PyTuple_GET_ITEM(args, 1);
  char* pszFrontAddress = PyString_AsString(py_pszFrontAddress);
  user->RegisterFront(pszFrontAddress);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Trader_ReqTradingAccountPasswordUpdate(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pTradingAccountPasswordUpdate = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate = from_CZQThostFtdcTradingAccountPasswordUpdateField(py_pTradingAccountPasswordUpdate);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, nRequestID));
  free(pTradingAccountPasswordUpdate);
  return ret;
}

static PyObject* Trader_ReqQryInvestorPositionDetail(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pQryInvestorPositionDetail = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcQryInvestorPositionDetailField* pQryInvestorPositionDetail = from_CZQThostFtdcQryInvestorPositionDetailField(py_pQryInvestorPositionDetail);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqQryInvestorPositionDetail(pQryInvestorPositionDetail, nRequestID));
  free(pQryInvestorPositionDetail);
  return ret;
}

static PyObject* Trader_SubscribePrivateTopic(PyObject * self, PyObject * args){
  CZQThostFtdcTraderApi * user = (CZQThostFtdcTraderApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_nResumeType = PyTuple_GET_ITEM(args, 1);
  ZQTHOST_TE_RESUME_TYPE nResumeType = (ZQTHOST_TE_RESUME_TYPE)PyInt_AsLong(py_nResumeType);
  user->SubscribePrivateTopic(nResumeType);


  Py_INCREF(Py_None);
  return Py_None;
}

extern "C" void init_ctp_Trader()
{
   static PyMethodDef mbMethods[] = {
     {"create_TraderApi", create_TraderApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

     {"ReqQryTradingAccount", Trader_ReqQryTradingAccount, METH_VARARGS} ,
     {"ReqQryExchange", Trader_ReqQryExchange, METH_VARARGS} ,
     {"ReqUserPasswordUpdate", Trader_ReqUserPasswordUpdate, METH_VARARGS} ,
     {"ReqQryTrade", Trader_ReqQryTrade, METH_VARARGS} ,
     {"ReqQueryMaxOrderVolume", Trader_ReqQueryMaxOrderVolume, METH_VARARGS} ,
     {"ReqQryInvestorPosition", Trader_ReqQryInvestorPosition, METH_VARARGS} ,
     {"ReqQryOrder", Trader_ReqQryOrder, METH_VARARGS} ,
     {"Init", Trader_Init, METH_VARARGS} ,
     {"ReqQryTradingCode", Trader_ReqQryTradingCode, METH_VARARGS} ,
     {"ReqUserLogin", Trader_ReqUserLogin, METH_VARARGS} ,
     {"RegisterSpi", Trader_RegisterSpi, METH_VARARGS} ,
     {"SubscribePublicTopic", Trader_SubscribePublicTopic, METH_VARARGS} ,
     {"GetTradingDay", Trader_GetTradingDay, METH_VARARGS} ,
     {"ReqUserLogout", Trader_ReqUserLogout, METH_VARARGS} ,
     {"Join", Trader_Join, METH_VARARGS} ,
     {"ReqAuthenticate", Trader_ReqAuthenticate, METH_VARARGS} ,
     {"ReqOrderInsert", Trader_ReqOrderInsert, METH_VARARGS} ,
     {"ReqQryInstrument", Trader_ReqQryInstrument, METH_VARARGS} ,
     {"ReqOrderAction", Trader_ReqOrderAction, METH_VARARGS} ,
     {"ReqQryInstrumentCommissionRate", Trader_ReqQryInstrumentCommissionRate, METH_VARARGS} ,
     {"Release", Trader_Release, METH_VARARGS} ,
     {"ReqQryInvestor", Trader_ReqQryInvestor, METH_VARARGS} ,
     {"ReqQryDepthMarketData", Trader_ReqQryDepthMarketData, METH_VARARGS} ,
     {"RegisterFront", Trader_RegisterFront, METH_VARARGS} ,
     {"ReqTradingAccountPasswordUpdate", Trader_ReqTradingAccountPasswordUpdate, METH_VARARGS} ,
     {"ReqQryInvestorPositionDetail", Trader_ReqQryInvestorPositionDetail, METH_VARARGS} ,
     {"SubscribePrivateTopic", Trader_SubscribePrivateTopic, METH_VARARGS} ,

     {NULL, NULL, NULL} /*sentinel，哨兵，用来标识结束*/
   };

   PyObject *m = Py_InitModule("_ctp_Trader", mbMethods);

   PyEval_InitThreads();
}

