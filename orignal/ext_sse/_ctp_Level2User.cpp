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

#include "ThostFtdcLevel2UserApi.h"
#include "wrapper_Level2User.h"
#include "l2struct.h"

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

static PyObject* create_Level2UserApi(PyObject* self, PyObject *args)
{
  char * flowpath;
  bool IsUsingUdp;

  PyArg_ParseTuple(args, "sb", &flowpath, &IsUsingUdp);
  void *p = CThostFtdcLevel2UserApi::CreateFtdcLevel2UserApi(flowpath, IsUsingUdp);
  return PyInt_FromLong((long)p);
}


static PyObject* Level2User_UnSubscribeLevel2MarketData(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSecurityList = PyTuple_GET_ITEM(args, 1);
  CThostFtdcSpecificSecurityField* pSecurityList = from_CThostFtdcSpecificSecurityField(py_pSecurityList);
  PyObject * py_nCount = PyTuple_GET_ITEM(args, 2);
  int nCount = PyInt_AsLong(py_nCount);
  PyObject * ret = Py_BuildValue("i", user->UnSubscribeLevel2MarketData(pSecurityList, nCount));
  free(pSecurityList);
  return ret;
}

static PyObject* Level2User_ReqUserLogout(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pUserLogout = PyTuple_GET_ITEM(args, 1);
  CThostFtdcUserLogoutField* pUserLogout = from_CThostFtdcUserLogoutField(py_pUserLogout);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogout(pUserLogout, nRequestID));
  free(pUserLogout);
  return ret;
}

static PyObject* Level2User_Join(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("i", user->Join());
  return ret;
}

static PyObject* Level2User_SubscribeLevel2MarketData(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSecurityList = PyTuple_GET_ITEM(args, 1);
  CThostFtdcSpecificSecurityField* pSecurityList = from_CThostFtdcSpecificSecurityField(py_pSecurityList);
  PyObject * py_nCount = PyTuple_GET_ITEM(args, 2);
  int nCount = PyInt_AsLong(py_nCount);
  PyObject * ret = Py_BuildValue("i", user->SubscribeLevel2MarketData(pSecurityList, nCount));
  free(pSecurityList);
  return ret;
}

static PyObject* Level2User_RegisterFront(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pszFrontAddress = PyTuple_GET_ITEM(args, 1);
  char* pszFrontAddress = PyString_AsString(py_pszFrontAddress);
  user->RegisterFront(pszFrontAddress);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Level2User_Init(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Init();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Level2User_ReqUserLogin(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqUserLoginField = PyTuple_GET_ITEM(args, 1);
  CThostFtdcReqUserLoginField* pReqUserLoginField = from_CThostFtdcReqUserLoginField(py_pReqUserLoginField);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogin(pReqUserLoginField, nRequestID));
  free(pReqUserLoginField);
  return ret;
}

static PyObject* Level2User_Release(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Release();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Level2User_SubscribePublicTopic(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_nResumeType = PyTuple_GET_ITEM(args, 1);
  THOST_TE_RESUME_TYPE nResumeType = (THOST_TE_RESUME_TYPE)PyInt_AsLong(py_nResumeType);
  user->SubscribePublicTopic(nResumeType);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Level2User_GetTradingDay(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("s", user->GetTradingDay());
  return ret;
}

static PyObject* Level2User_UnSubscribeNGTSIndex(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSecurityList = PyTuple_GET_ITEM(args, 1);
  CThostFtdcSpecificSecurityField* pSecurityList = from_CThostFtdcSpecificSecurityField(py_pSecurityList);
  PyObject * py_nCount = PyTuple_GET_ITEM(args, 2);
  int nCount = PyInt_AsLong(py_nCount);
  PyObject * ret = Py_BuildValue("i", user->UnSubscribeNGTSIndex(pSecurityList, nCount));
  free(pSecurityList);
  return ret;
}

static PyObject* Level2User_SubscribeNGTSIndex(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSecurityList = PyTuple_GET_ITEM(args, 1);
  CThostFtdcSpecificSecurityField* pSecurityList = from_CThostFtdcSpecificSecurityField(py_pSecurityList);
  PyObject * py_nCount = PyTuple_GET_ITEM(args, 2);
  int nCount = PyInt_AsLong(py_nCount);
  PyObject * ret = Py_BuildValue("i", user->SubscribeNGTSIndex(pSecurityList, nCount));
  free(pSecurityList);
  return ret;
}

static PyObject* Level2User_RegisterSpi(PyObject * self, PyObject * args){
  CThostFtdcLevel2UserApi * user = (CThostFtdcLevel2UserApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSpi = PyTuple_GET_ITEM(args, 1);
  CThostFtdcLevel2UserSpi* pSpi = new MySpiWrapper(py_pSpi);
  user->RegisterSpi(pSpi);


  Py_INCREF(Py_None);
  return Py_None;
}

extern "C" void init_ctp_Level2User()
{
   static PyMethodDef mbMethods[] = {
     {"create_Level2UserApi", create_Level2UserApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

     {"UnSubscribeLevel2MarketData", Level2User_UnSubscribeLevel2MarketData, METH_VARARGS} ,
     {"ReqUserLogout", Level2User_ReqUserLogout, METH_VARARGS} ,
     {"Join", Level2User_Join, METH_VARARGS} ,
     {"SubscribeLevel2MarketData", Level2User_SubscribeLevel2MarketData, METH_VARARGS} ,
     {"RegisterFront", Level2User_RegisterFront, METH_VARARGS} ,
     {"Init", Level2User_Init, METH_VARARGS} ,
     {"ReqUserLogin", Level2User_ReqUserLogin, METH_VARARGS} ,
     {"Release", Level2User_Release, METH_VARARGS} ,
     {"SubscribePublicTopic", Level2User_SubscribePublicTopic, METH_VARARGS} ,
     {"GetTradingDay", Level2User_GetTradingDay, METH_VARARGS} ,
     {"UnSubscribeNGTSIndex", Level2User_UnSubscribeNGTSIndex, METH_VARARGS} ,
     {"SubscribeNGTSIndex", Level2User_SubscribeNGTSIndex, METH_VARARGS} ,
     {"RegisterSpi", Level2User_RegisterSpi, METH_VARARGS} ,

     {NULL, NULL, NULL} /*sentinel，哨兵，用来标识结束*/
   };

   PyObject *m = Py_InitModule("_ctp_Level2User", mbMethods);

   PyEval_InitThreads();
}

