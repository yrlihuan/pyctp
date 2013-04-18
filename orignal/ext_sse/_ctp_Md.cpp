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

#include "ThostFtdcMdApiSSE.h"
#include "wrapper_Md.h"
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

static PyObject* create_MdApi(PyObject* self, PyObject *args)
{
  char * flowpath;
  bool IsUsingUdp;

  PyArg_ParseTuple(args, "sb", &flowpath, &IsUsingUdp);
  void *p = CZQThostFtdcMdApi::CreateFtdcMdApi(flowpath, IsUsingUdp);
  return PyInt_FromLong((long)p);
}


static PyObject* Md_ReqUserLogout(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pUserLogout = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcUserLogoutField* pUserLogout = from_CZQThostFtdcUserLogoutField(py_pUserLogout);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogout(pUserLogout, nRequestID));
  free(pUserLogout);
  return ret;
}

static PyObject* Md_Join(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("i", user->Join());
  return ret;
}

static PyObject * Md_UnSubscribeMarketData(PyObject* self, PyObject * args)
{
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *)PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * instruments = PyTuple_GET_ITEM(args, 1);

  int l = PySequence_Length(instruments);
  char ** pp =(char**)calloc(l, sizeof(char *));
  int i;
  for (i=0; i<l; i++){
    pp[i] = PyString_AsString(PySequence_GetItem(instruments, i));
  }

  PyObject *pyExchangeId = PyTuple_GET_ITEM(args, 2);
  char *pszExchangeId = PyString_AsString(pyExchangeId);

  user->UnSubscribeMarketData(pp, l, pszExchangeId);
  
  free(pp);

  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_RegisterFront(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pszFrontAddress = PyTuple_GET_ITEM(args, 1);
  char* pszFrontAddress = PyString_AsString(py_pszFrontAddress);
  user->RegisterFront(pszFrontAddress);


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_Init(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Init();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_ReqUserLogin(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pReqUserLoginField = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcReqUserLoginField* pReqUserLoginField = from_CZQThostFtdcReqUserLoginField(py_pReqUserLoginField);
  PyObject * py_nRequestID = PyTuple_GET_ITEM(args, 2);
  int nRequestID = PyInt_AsLong(py_nRequestID);
  PyObject * ret = Py_BuildValue("i", user->ReqUserLogin(pReqUserLoginField, nRequestID));
  free(pReqUserLoginField);
  return ret;
}

static PyObject* Md_Release(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  user->Release();


  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_GetTradingDay(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * ret = Py_BuildValue("s", user->GetTradingDay());
  return ret;
}

static PyObject * Md_SubscribeMarketData(PyObject* self, PyObject * args)
{
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *)PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * instruments = PyTuple_GET_ITEM(args, 1);

  int l = PySequence_Length(instruments);
  char ** pp =(char**)calloc(l, sizeof(char *));
  int i;
  for (i=0; i<l; i++){
    pp[i] = PyString_AsString(PySequence_GetItem(instruments, i));
  }

  PyObject *pyExchangeId = PyTuple_GET_ITEM(args, 2);
  char *pszExchangeId = PyString_AsString(pyExchangeId);

  user->SubscribeMarketData(pp, l, pszExchangeId);
  
  free(pp);

  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject* Md_RegisterSpi(PyObject * self, PyObject * args){
  CZQThostFtdcMdApi * user = (CZQThostFtdcMdApi *) PyInt_AsLong(PyTuple_GET_ITEM(args, 0));
  PyObject * py_pSpi = PyTuple_GET_ITEM(args, 1);
  CZQThostFtdcMdSpi* pSpi = new MySpiWrapper(py_pSpi);
  user->RegisterSpi(pSpi);


  Py_INCREF(Py_None);
  return Py_None;
}

extern "C" void init_ctp_Md()
{
   static PyMethodDef mbMethods[] = {
     {"create_MdApi", create_MdApi, METH_VARARGS},
     {"register_struct", register_struct, METH_VARARGS},

     {"ReqUserLogout", Md_ReqUserLogout, METH_VARARGS} ,
     {"Join", Md_Join, METH_VARARGS} ,
     {"UnSubscribeMarketData", Md_UnSubscribeMarketData, METH_VARARGS} ,
     {"RegisterFront", Md_RegisterFront, METH_VARARGS} ,
     {"Init", Md_Init, METH_VARARGS} ,
     {"ReqUserLogin", Md_ReqUserLogin, METH_VARARGS} ,
     {"Release", Md_Release, METH_VARARGS} ,
     {"GetTradingDay", Md_GetTradingDay, METH_VARARGS} ,
     {"SubscribeMarketData", Md_SubscribeMarketData, METH_VARARGS} ,
     {"RegisterSpi", Md_RegisterSpi, METH_VARARGS} ,

     {NULL, NULL, NULL} /*sentinel，哨兵，用来标识结束*/
   };

   PyObject *m = Py_InitModule("_ctp_Md", mbMethods);

   PyEval_InitThreads();
}

