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
#include "wrapper_Md.h"
        
MySpiWrapper::MySpiWrapper(PyObject * parent):CZQThostFtdcMdSpi(){
  py_spi = parent;
  Py_INCREF(py_spi);
}


void MySpiWrapper::OnFrontDisconnected(int nReason){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontDisconnected", (char*)"i", nReason)){
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

void MySpiWrapper::OnRtnDepthMarketData(CZQThostFtdcDepthMarketDataField* pDepthMarketData){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnDepthMarketData", (char*)"N", new_CZQThostFtdcDepthMarketDataField(pDepthMarketData))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspSubMarketData(CZQThostFtdcSpecificInstrumentField* pSpecificInstrument, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspSubMarketData", (char*)"NNib", new_CZQThostFtdcSpecificInstrumentField(pSpecificInstrument), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUnSubMarketData(CZQThostFtdcSpecificInstrumentField* pSpecificInstrument, CZQThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUnSubMarketData", (char*)"NNib", new_CZQThostFtdcSpecificInstrumentField(pSpecificInstrument), new_CZQThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
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

void MySpiWrapper::OnFrontConnected(){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnFrontConnected", NULL))
{
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
