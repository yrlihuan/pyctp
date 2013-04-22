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

#include "l2struct.h"
#include "wrapper_Level2User.h"
        
MySpiWrapper::MySpiWrapper(PyObject * parent):CThostFtdcLevel2UserSpi(){
  py_spi = parent;
  Py_INCREF(py_spi);
}


void MySpiWrapper::OnRtnLevel2MarketData(CThostFtdcLevel2MarketDataField* pLevel2MarketData){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnLevel2MarketData", (char*)"N", new_CThostFtdcLevel2MarketDataField(pLevel2MarketData))){
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

void MySpiWrapper::OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserLogout", (char*)"NNib", new_CThostFtdcUserLogoutField(pUserLogout), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspSubNGTSIndex(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspSubNGTSIndex", (char*)"NNib", new_CThostFtdcSpecificSecurityField(pSpecificSecurity), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspSubLevel2MarketData(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspSubLevel2MarketData", (char*)"NNib", new_CThostFtdcSpecificSecurityField(pSpecificSecurity), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

MySpiWrapper::~MySpiWrapper(){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"CThostFtdcLevel2UserSpi", NULL))
{
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

void MySpiWrapper::OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspError", (char*)"Nib", new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUserLogin", (char*)"NNib", new_CThostFtdcRspUserLoginField(pRspUserLogin), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
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

void MySpiWrapper::OnRspUnSubNGTSIndex(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUnSubNGTSIndex", (char*)"NNib", new_CThostFtdcSpecificSecurityField(pSpecificSecurity), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRspUnSubLevel2MarketData(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRspUnSubLevel2MarketData", (char*)"NNib", new_CThostFtdcSpecificSecurityField(pSpecificSecurity), new_CThostFtdcRspInfoField(pRspInfo), nRequestID, bIsLast)){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}

void MySpiWrapper::OnRtnNGTSIndex(CThostFtdcNGTSIndexField* pNGTSIndex){
  PyGILState_STATE gstate;
  gstate=PyGILState_Ensure();

  if (!PyObject_CallMethod(py_spi, (char*)"OnRtnNGTSIndex", (char*)"N", new_CThostFtdcNGTSIndexField(pNGTSIndex))){
    PyErr_Print();
  }

  PyGILState_Release(gstate);
}
