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

#include "ThostFtdcL2ApiSSE.h"

class MySpiWrapper : public CThostFtdcL2Spi
{
 public:
  MySpiWrapper(PyObject * parent);

  virtual void OnRtnLevel2MarketData(CThostFtdcLevel2MarketDataField* pLevel2MarketData);
  virtual void OnFrontDisconnected(int nReason);
  virtual void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspSubNGTSIndex(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspSubLevel2MarketData(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual ~ CThostFtdcLevel2UserSpi();
  virtual void OnHeartBeatWarning(int nTimeLapse);
  virtual void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnFrontConnected();
  virtual void OnRspUnSubNGTSIndex(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRspUnSubLevel2MarketData(CThostFtdcSpecificSecurityField* pSpecificSecurity, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
  virtual void OnRtnNGTSIndex(CThostFtdcNGTSIndexField* pNGTSIndex);

 private:
  PyObject * py_spi;
};

#endif
