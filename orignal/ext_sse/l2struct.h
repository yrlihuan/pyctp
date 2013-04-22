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

//This file is auto generated! Please don't edit directly.
#ifndef STRUCT_TRADE_H
#define STRUCT_TRADE_H

//#include <Python.h>
#ifdef _DEBUG
#undef _DEBUG   //links to pythonxx.lib
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif

#include "../ctp_sse/api/trade/linux64/public/ThostFtdcLevel2UserApiStruct.h"

_USING_LEVEL2_NS_

PyObject * register_struct(PyObject * self, PyObject * args);
PyObject * new_CThostFtdcL2MarketDataOffer3Field(CThostFtdcL2MarketDataOffer3Field * p);
CThostFtdcL2MarketDataOffer3Field * from_CThostFtdcL2MarketDataOffer3Field(PyObject * p);
PyObject * new_CThostFtdcAuthenticationInfoField(CThostFtdcAuthenticationInfoField * p);
CThostFtdcAuthenticationInfoField * from_CThostFtdcAuthenticationInfoField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBaseField(CThostFtdcL2MarketDataBaseField * p);
CThostFtdcL2MarketDataBaseField * from_CThostFtdcL2MarketDataBaseField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataStaticField(CThostFtdcL2MarketDataStaticField * p);
CThostFtdcL2MarketDataStaticField * from_CThostFtdcL2MarketDataStaticField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid7Field(CThostFtdcL2MarketDataBid7Field * p);
CThostFtdcL2MarketDataBid7Field * from_CThostFtdcL2MarketDataBid7Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOfferOrderField(CThostFtdcL2MarketDataOfferOrderField * p);
CThostFtdcL2MarketDataOfferOrderField * from_CThostFtdcL2MarketDataOfferOrderField(PyObject * p);
PyObject * new_CThostFtdcRspAuthenticateField(CThostFtdcRspAuthenticateField * p);
CThostFtdcRspAuthenticateField * from_CThostFtdcRspAuthenticateField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid1Field(CThostFtdcL2MarketDataBid1Field * p);
CThostFtdcL2MarketDataBid1Field * from_CThostFtdcL2MarketDataBid1Field(PyObject * p);
PyObject * new_CThostFtdcSpecificSecurityField(CThostFtdcSpecificSecurityField * p);
CThostFtdcSpecificSecurityField * from_CThostFtdcSpecificSecurityField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBidAField(CThostFtdcL2MarketDataBidAField * p);
CThostFtdcL2MarketDataBidAField * from_CThostFtdcL2MarketDataBidAField(PyObject * p);
PyObject * new_CThostFtdcDisseminationField(CThostFtdcDisseminationField * p);
CThostFtdcDisseminationField * from_CThostFtdcDisseminationField(PyObject * p);
PyObject * new_CThostFtdcUserLogoutField(CThostFtdcUserLogoutField * p);
CThostFtdcUserLogoutField * from_CThostFtdcUserLogoutField(PyObject * p);
PyObject * new_CThostFtdcUserSessionRefField(CThostFtdcUserSessionRefField * p);
CThostFtdcUserSessionRefField * from_CThostFtdcUserSessionRefField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer1Field(CThostFtdcL2MarketDataOffer1Field * p);
CThostFtdcL2MarketDataOffer1Field * from_CThostFtdcL2MarketDataOffer1Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer7Field(CThostFtdcL2MarketDataOffer7Field * p);
CThostFtdcL2MarketDataOffer7Field * from_CThostFtdcL2MarketDataOffer7Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer4Field(CThostFtdcL2MarketDataOffer4Field * p);
CThostFtdcL2MarketDataOffer4Field * from_CThostFtdcL2MarketDataOffer4Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataUpdateTimeField(CThostFtdcL2MarketDataUpdateTimeField * p);
CThostFtdcL2MarketDataUpdateTimeField * from_CThostFtdcL2MarketDataUpdateTimeField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid4Field(CThostFtdcL2MarketDataBid4Field * p);
CThostFtdcL2MarketDataBid4Field * from_CThostFtdcL2MarketDataBid4Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid8Field(CThostFtdcL2MarketDataBid8Field * p);
CThostFtdcL2MarketDataBid8Field * from_CThostFtdcL2MarketDataBid8Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer2Field(CThostFtdcL2MarketDataOffer2Field * p);
CThostFtdcL2MarketDataOffer2Field * from_CThostFtdcL2MarketDataOffer2Field(PyObject * p);
PyObject * new_CThostFtdcReqAuthenticateField(CThostFtdcReqAuthenticateField * p);
CThostFtdcReqAuthenticateField * from_CThostFtdcReqAuthenticateField(PyObject * p);
PyObject * new_CThostFtdcReqUserLoginField(CThostFtdcReqUserLoginField * p);
CThostFtdcReqUserLoginField * from_CThostFtdcReqUserLoginField(PyObject * p);
PyObject * new_CThostFtdcNGTSIndexField(CThostFtdcNGTSIndexField * p);
CThostFtdcNGTSIndexField * from_CThostFtdcNGTSIndexField(PyObject * p);
PyObject * new_CThostFtdcRspUserLoginField(CThostFtdcRspUserLoginField * p);
CThostFtdcRspUserLoginField * from_CThostFtdcRspUserLoginField(PyObject * p);
PyObject * new_CThostFtdcLevel2UserField(CThostFtdcLevel2UserField * p);
CThostFtdcLevel2UserField * from_CThostFtdcLevel2UserField(PyObject * p);
PyObject * new_CThostFtdcLevel2MarketDataField(CThostFtdcLevel2MarketDataField * p);
CThostFtdcLevel2MarketDataField * from_CThostFtdcLevel2MarketDataField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid5Field(CThostFtdcL2MarketDataBid5Field * p);
CThostFtdcL2MarketDataBid5Field * from_CThostFtdcL2MarketDataBid5Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBidOrderField(CThostFtdcL2MarketDataBidOrderField * p);
CThostFtdcL2MarketDataBidOrderField * from_CThostFtdcL2MarketDataBidOrderField(PyObject * p);
PyObject * new_CThostFtdcRspInfoField(CThostFtdcRspInfoField * p);
CThostFtdcRspInfoField * from_CThostFtdcRspInfoField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer8Field(CThostFtdcL2MarketDataOffer8Field * p);
CThostFtdcL2MarketDataOffer8Field * from_CThostFtdcL2MarketDataOffer8Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid6Field(CThostFtdcL2MarketDataBid6Field * p);
CThostFtdcL2MarketDataBid6Field * from_CThostFtdcL2MarketDataBid6Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataPriceLevelField(CThostFtdcL2MarketDataPriceLevelField * p);
CThostFtdcL2MarketDataPriceLevelField * from_CThostFtdcL2MarketDataPriceLevelField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer5Field(CThostFtdcL2MarketDataOffer5Field * p);
CThostFtdcL2MarketDataOffer5Field * from_CThostFtdcL2MarketDataOffer5Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer9Field(CThostFtdcL2MarketDataOffer9Field * p);
CThostFtdcL2MarketDataOffer9Field * from_CThostFtdcL2MarketDataOffer9Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid2Field(CThostFtdcL2MarketDataBid2Field * p);
CThostFtdcL2MarketDataBid2Field * from_CThostFtdcL2MarketDataBid2Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid9Field(CThostFtdcL2MarketDataBid9Field * p);
CThostFtdcL2MarketDataBid9Field * from_CThostFtdcL2MarketDataBid9Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataWarrantField(CThostFtdcL2MarketDataWarrantField * p);
CThostFtdcL2MarketDataWarrantField * from_CThostFtdcL2MarketDataWarrantField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataTradedField(CThostFtdcL2MarketDataTradedField * p);
CThostFtdcL2MarketDataTradedField * from_CThostFtdcL2MarketDataTradedField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOfferAField(CThostFtdcL2MarketDataOfferAField * p);
CThostFtdcL2MarketDataOfferAField * from_CThostFtdcL2MarketDataOfferAField(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataBid3Field(CThostFtdcL2MarketDataBid3Field * p);
CThostFtdcL2MarketDataBid3Field * from_CThostFtdcL2MarketDataBid3Field(PyObject * p);
PyObject * new_CThostFtdcL2MarketDataOffer6Field(CThostFtdcL2MarketDataOffer6Field * p);
CThostFtdcL2MarketDataOffer6Field * from_CThostFtdcL2MarketDataOffer6Field(PyObject * p);
#endif
