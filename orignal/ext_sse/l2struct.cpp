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

#include "l2struct.h"

static PyObject * mod=NULL;
PyObject * register_struct(PyObject * self, PyObject * args){
  mod = PyTuple_GET_ITEM(args,0);
  Py_INCREF(Py_None);
  return Py_None;
}

//Level2行情申卖三属性
PyObject * new_CThostFtdcL2MarketDataOffer3Field(CThostFtdcL2MarketDataOffer3Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer3Field", (char*)"idi",
p->OfferOrderQty3, p->OfferPx3, p->OfferNumOrder3);
}
CThostFtdcL2MarketDataOffer3Field * from_CThostFtdcL2MarketDataOffer3Field(PyObject * p){
  CThostFtdcL2MarketDataOffer3Field *t = (CThostFtdcL2MarketDataOffer3Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer3Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer3Field));
  //申卖量三
  t->OfferOrderQty3 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty3"));
  //申卖价三
  t->OfferPx3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx3"));
  //实际卖总委托笔数三
  t->OfferNumOrder3 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder3"));

  return t;
};

//客户端认证信息
PyObject * new_CThostFtdcAuthenticationInfoField(CThostFtdcAuthenticationInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcAuthenticationInfoField", (char*)"ssiss",
p->UserID, p->AuthInfo, p->IsResult, p->BrokerID, p->UserProductInfo);
}
CThostFtdcAuthenticationInfoField * from_CThostFtdcAuthenticationInfoField(PyObject * p){
  CThostFtdcAuthenticationInfoField *t = (CThostFtdcAuthenticationInfoField *)calloc(1, sizeof(CThostFtdcAuthenticationInfoField));
  memset(t,0,sizeof(CThostFtdcAuthenticationInfoField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //认证信息
  strcpy(t->AuthInfo, PyString_AsString(PyObject_GetAttrString(p, "AuthInfo")));
  //是否为认证结果
  t->IsResult =   PyInt_AsLong(PyObject_GetAttrString(p, "IsResult"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

  return t;
};

//Level2行情基本信息
PyObject * new_CThostFtdcL2MarketDataBaseField(CThostFtdcL2MarketDataBaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBaseField", (char*)"d",
p->LastPx);
}
CThostFtdcL2MarketDataBaseField * from_CThostFtdcL2MarketDataBaseField(PyObject * p){
  CThostFtdcL2MarketDataBaseField *t = (CThostFtdcL2MarketDataBaseField *)calloc(1, sizeof(CThostFtdcL2MarketDataBaseField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBaseField));
  //现价
  t->LastPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPx"));

  return t;
};

//Level2行情静态属性
PyObject * new_CThostFtdcL2MarketDataStaticField(CThostFtdcL2MarketDataStaticField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataStaticField", (char*)"ddddddd",
p->OpenPx, p->YieldToMaturity, p->LowPx, p->ClosePx, p->IOPV, p->PreClosePx, p->HighPx);
}
CThostFtdcL2MarketDataStaticField * from_CThostFtdcL2MarketDataStaticField(PyObject * p){
  CThostFtdcL2MarketDataStaticField *t = (CThostFtdcL2MarketDataStaticField *)calloc(1, sizeof(CThostFtdcL2MarketDataStaticField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataStaticField));
  //今开盘价
  t->OpenPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPx"));
  //到期收益率
  t->YieldToMaturity =   PyFloat_AsDouble(PyObject_GetAttrString(p, "YieldToMaturity"));
  //最低价
  t->LowPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowPx"));
  //收盘价
  t->ClosePx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePx"));
  //净值估值
  t->IOPV =   PyFloat_AsDouble(PyObject_GetAttrString(p, "IOPV"));
  //昨收盘价
  t->PreClosePx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePx"));
  //最高价
  t->HighPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighPx"));

  return t;
};

//Level2行情申买七属性
PyObject * new_CThostFtdcL2MarketDataBid7Field(CThostFtdcL2MarketDataBid7Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid7Field", (char*)"iid",
p->BidOrderQty7, p->BidNumOrder7, p->BidPx7);
}
CThostFtdcL2MarketDataBid7Field * from_CThostFtdcL2MarketDataBid7Field(PyObject * p){
  CThostFtdcL2MarketDataBid7Field *t = (CThostFtdcL2MarketDataBid7Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid7Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid7Field));
  //申买量七
  t->BidOrderQty7 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty7"));
  //实际买总委托笔数七
  t->BidNumOrder7 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder7"));
  //申买价七
  t->BidPx7 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx7"));

  return t;
};

//Level2委卖信息
PyObject * new_CThostFtdcL2MarketDataOfferOrderField(CThostFtdcL2MarketDataOfferOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOfferOrderField", (char*)"ddd",
p->AltWeightedAvgOfferPx, p->WeightedAvgOfferPx, p->TotalOfferQty);
}
CThostFtdcL2MarketDataOfferOrderField * from_CThostFtdcL2MarketDataOfferOrderField(PyObject * p){
  CThostFtdcL2MarketDataOfferOrderField *t = (CThostFtdcL2MarketDataOfferOrderField *)calloc(1, sizeof(CThostFtdcL2MarketDataOfferOrderField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOfferOrderField));
  //债券加权平均委卖价格
  t->AltWeightedAvgOfferPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AltWeightedAvgOfferPx"));
  //加权平均委卖价
  t->WeightedAvgOfferPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WeightedAvgOfferPx"));
  //委托卖出总量
  t->TotalOfferQty =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalOfferQty"));

  return t;
};

//客户端认证响应
PyObject * new_CThostFtdcRspAuthenticateField(CThostFtdcRspAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspAuthenticateField", (char*)"sss",
p->UserID, p->BrokerID, p->UserProductInfo);
}
CThostFtdcRspAuthenticateField * from_CThostFtdcRspAuthenticateField(PyObject * p){
  CThostFtdcRspAuthenticateField *t = (CThostFtdcRspAuthenticateField *)calloc(1, sizeof(CThostFtdcRspAuthenticateField));
  memset(t,0,sizeof(CThostFtdcRspAuthenticateField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

  return t;
};

//Level2行情申买一属性
PyObject * new_CThostFtdcL2MarketDataBid1Field(CThostFtdcL2MarketDataBid1Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid1Field", (char*)"dii",
p->BidPx1, p->BidNumOrder1, p->BidOrderQty1);
}
CThostFtdcL2MarketDataBid1Field * from_CThostFtdcL2MarketDataBid1Field(PyObject * p){
  CThostFtdcL2MarketDataBid1Field *t = (CThostFtdcL2MarketDataBid1Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid1Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid1Field));
  //申买价一
  t->BidPx1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx1"));
  //实际买总委托笔数一
  t->BidNumOrder1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder1"));
  //申买量一
  t->BidOrderQty1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty1"));

  return t;
};

//指定的证券
PyObject * new_CThostFtdcSpecificSecurityField(CThostFtdcSpecificSecurityField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSpecificSecurityField", (char*)"ss",
p->ExchangeID, p->SecurityID);
}
CThostFtdcSpecificSecurityField * from_CThostFtdcSpecificSecurityField(PyObject * p){
  CThostFtdcSpecificSecurityField *t = (CThostFtdcSpecificSecurityField *)calloc(1, sizeof(CThostFtdcSpecificSecurityField));
  memset(t,0,sizeof(CThostFtdcSpecificSecurityField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //证券代码
  strcpy(t->SecurityID, PyString_AsString(PyObject_GetAttrString(p, "SecurityID")));

  return t;
};

//Level2行情申买十属性
PyObject * new_CThostFtdcL2MarketDataBidAField(CThostFtdcL2MarketDataBidAField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBidAField", (char*)"dii",
p->BidPxA, p->BidNumOrderA, p->BidOrderQtyA);
}
CThostFtdcL2MarketDataBidAField * from_CThostFtdcL2MarketDataBidAField(PyObject * p){
  CThostFtdcL2MarketDataBidAField *t = (CThostFtdcL2MarketDataBidAField *)calloc(1, sizeof(CThostFtdcL2MarketDataBidAField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBidAField));
  //申买价十
  t->BidPxA =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPxA"));
  //实际买总委托笔数十
  t->BidNumOrderA =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrderA"));
  //申买量十
  t->BidOrderQtyA =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQtyA"));

  return t;
};

//信息分发
PyObject * new_CThostFtdcDisseminationField(CThostFtdcDisseminationField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDisseminationField", (char*)"ih",
p->SequenceNo, p->SequenceSeries);
}
CThostFtdcDisseminationField * from_CThostFtdcDisseminationField(PyObject * p){
  CThostFtdcDisseminationField *t = (CThostFtdcDisseminationField *)calloc(1, sizeof(CThostFtdcDisseminationField));
  memset(t,0,sizeof(CThostFtdcDisseminationField));
  //序列号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //序列系列号
  t->SequenceSeries =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));

  return t;
};

//用户登出请求
PyObject * new_CThostFtdcUserLogoutField(CThostFtdcUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserLogoutField", (char*)"ss",
p->UserID, p->BrokerID);
}
CThostFtdcUserLogoutField * from_CThostFtdcUserLogoutField(PyObject * p){
  CThostFtdcUserLogoutField *t = (CThostFtdcUserLogoutField *)calloc(1, sizeof(CThostFtdcUserLogoutField));
  memset(t,0,sizeof(CThostFtdcUserLogoutField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//用户会话
PyObject * new_CThostFtdcUserSessionRefField(CThostFtdcUserSessionRefField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserSessionRefField", (char*)"ii",
p->FrontID, p->SessionID);
}
CThostFtdcUserSessionRefField * from_CThostFtdcUserSessionRefField(PyObject * p){
  CThostFtdcUserSessionRefField *t = (CThostFtdcUserSessionRefField *)calloc(1, sizeof(CThostFtdcUserSessionRefField));
  memset(t,0,sizeof(CThostFtdcUserSessionRefField));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));

  return t;
};

//Level2行情申卖一属性
PyObject * new_CThostFtdcL2MarketDataOffer1Field(CThostFtdcL2MarketDataOffer1Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer1Field", (char*)"iid",
p->OfferOrderQty1, p->OfferNumOrder1, p->OfferPx1);
}
CThostFtdcL2MarketDataOffer1Field * from_CThostFtdcL2MarketDataOffer1Field(PyObject * p){
  CThostFtdcL2MarketDataOffer1Field *t = (CThostFtdcL2MarketDataOffer1Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer1Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer1Field));
  //申卖量一
  t->OfferOrderQty1 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty1"));
  //实际卖总委托笔数一
  t->OfferNumOrder1 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder1"));
  //申卖价一
  t->OfferPx1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx1"));

  return t;
};

//Level2行情申卖七属性
PyObject * new_CThostFtdcL2MarketDataOffer7Field(CThostFtdcL2MarketDataOffer7Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer7Field", (char*)"dii",
p->OfferPx7, p->OfferNumOrder7, p->OfferOrderQty7);
}
CThostFtdcL2MarketDataOffer7Field * from_CThostFtdcL2MarketDataOffer7Field(PyObject * p){
  CThostFtdcL2MarketDataOffer7Field *t = (CThostFtdcL2MarketDataOffer7Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer7Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer7Field));
  //申卖价七
  t->OfferPx7 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx7"));
  //实际卖总委托笔数七
  t->OfferNumOrder7 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder7"));
  //申卖量七
  t->OfferOrderQty7 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty7"));

  return t;
};

//Level2行情申卖四属性
PyObject * new_CThostFtdcL2MarketDataOffer4Field(CThostFtdcL2MarketDataOffer4Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer4Field", (char*)"idi",
p->OfferNumOrder4, p->OfferPx4, p->OfferOrderQty4);
}
CThostFtdcL2MarketDataOffer4Field * from_CThostFtdcL2MarketDataOffer4Field(PyObject * p){
  CThostFtdcL2MarketDataOffer4Field *t = (CThostFtdcL2MarketDataOffer4Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer4Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer4Field));
  //实际卖总委托笔数四
  t->OfferNumOrder4 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder4"));
  //申卖价四
  t->OfferPx4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx4"));
  //申卖量四
  t->OfferOrderQty4 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty4"));

  return t;
};

//Level2行情更新时间属性
PyObject * new_CThostFtdcL2MarketDataUpdateTimeField(CThostFtdcL2MarketDataUpdateTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataUpdateTimeField", (char*)"ssss",
p->TradingDay, p->ExchangeID, p->SecurityID, p->DataTimeStamp);
}
CThostFtdcL2MarketDataUpdateTimeField * from_CThostFtdcL2MarketDataUpdateTimeField(PyObject * p){
  CThostFtdcL2MarketDataUpdateTimeField *t = (CThostFtdcL2MarketDataUpdateTimeField *)calloc(1, sizeof(CThostFtdcL2MarketDataUpdateTimeField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataUpdateTimeField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //证券代码
  strcpy(t->SecurityID, PyString_AsString(PyObject_GetAttrString(p, "SecurityID")));
  //时间戳
  strcpy(t->DataTimeStamp, PyString_AsString(PyObject_GetAttrString(p, "DataTimeStamp")));

  return t;
};

//Level2行情申买四属性
PyObject * new_CThostFtdcL2MarketDataBid4Field(CThostFtdcL2MarketDataBid4Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid4Field", (char*)"idi",
p->BidNumOrder4, p->BidPx4, p->BidOrderQty4);
}
CThostFtdcL2MarketDataBid4Field * from_CThostFtdcL2MarketDataBid4Field(PyObject * p){
  CThostFtdcL2MarketDataBid4Field *t = (CThostFtdcL2MarketDataBid4Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid4Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid4Field));
  //实际买总委托笔数四
  t->BidNumOrder4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder4"));
  //申买价四
  t->BidPx4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx4"));
  //申买量四
  t->BidOrderQty4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty4"));

  return t;
};

//Level2行情申买八属性
PyObject * new_CThostFtdcL2MarketDataBid8Field(CThostFtdcL2MarketDataBid8Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid8Field", (char*)"idi",
p->BidNumOrder8, p->BidPx8, p->BidOrderQty8);
}
CThostFtdcL2MarketDataBid8Field * from_CThostFtdcL2MarketDataBid8Field(PyObject * p){
  CThostFtdcL2MarketDataBid8Field *t = (CThostFtdcL2MarketDataBid8Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid8Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid8Field));
  //实际买总委托笔数八
  t->BidNumOrder8 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder8"));
  //申买价八
  t->BidPx8 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx8"));
  //申买量八
  t->BidOrderQty8 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty8"));

  return t;
};

//Level2行情申卖二属性
PyObject * new_CThostFtdcL2MarketDataOffer2Field(CThostFtdcL2MarketDataOffer2Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer2Field", (char*)"idi",
p->OfferOrderQty2, p->OfferPx2, p->OfferNumOrder2);
}
CThostFtdcL2MarketDataOffer2Field * from_CThostFtdcL2MarketDataOffer2Field(PyObject * p){
  CThostFtdcL2MarketDataOffer2Field *t = (CThostFtdcL2MarketDataOffer2Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer2Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer2Field));
  //申卖量二
  t->OfferOrderQty2 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty2"));
  //申卖价二
  t->OfferPx2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx2"));
  //实际卖总委托笔数二
  t->OfferNumOrder2 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder2"));

  return t;
};

//客户端认证请求
PyObject * new_CThostFtdcReqAuthenticateField(CThostFtdcReqAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqAuthenticateField", (char*)"ssss",
p->UserID, p->AuthCode, p->BrokerID, p->UserProductInfo);
}
CThostFtdcReqAuthenticateField * from_CThostFtdcReqAuthenticateField(PyObject * p){
  CThostFtdcReqAuthenticateField *t = (CThostFtdcReqAuthenticateField *)calloc(1, sizeof(CThostFtdcReqAuthenticateField));
  memset(t,0,sizeof(CThostFtdcReqAuthenticateField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //认证码
  strcpy(t->AuthCode, PyString_AsString(PyObject_GetAttrString(p, "AuthCode")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

  return t;
};

//用户登录请求
PyObject * new_CThostFtdcReqUserLoginField(CThostFtdcReqUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqUserLoginField", (char*)"ssssssssss",
p->MacAddress, p->UserProductInfo, p->UserID, p->TradingDay, p->InterfaceProductInfo, p->BrokerID, p->ClientIPAddress, p->OneTimePassword, p->ProtocolInfo, p->Password);
}
CThostFtdcReqUserLoginField * from_CThostFtdcReqUserLoginField(PyObject * p){
  CThostFtdcReqUserLoginField *t = (CThostFtdcReqUserLoginField *)calloc(1, sizeof(CThostFtdcReqUserLoginField));
  memset(t,0,sizeof(CThostFtdcReqUserLoginField));
  //Mac地址
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //接口端产品信息
  strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //终端IP地址
  strcpy(t->ClientIPAddress, PyString_AsString(PyObject_GetAttrString(p, "ClientIPAddress")));
  //动态密码
  strcpy(t->OneTimePassword, PyString_AsString(PyObject_GetAttrString(p, "OneTimePassword")));
  //协议信息
  strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));

  return t;
};

//Level2指数行情
PyObject * new_CThostFtdcNGTSIndexField(CThostFtdcNGTSIndexField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNGTSIndexField", (char*)"sdsdddsssdddd",
p->ExchangeID, p->HighIndex, p->TimeStamp, p->LowIndex, p->PreCloseIndex, p->LastIndex, p->TradingDay, p->SecurityID, p->TradeTime, p->OpenIndex, p->TotalVolumeTraded, p->CloseIndex, p->TurnOver);
}
CThostFtdcNGTSIndexField * from_CThostFtdcNGTSIndexField(PyObject * p){
  CThostFtdcNGTSIndexField *t = (CThostFtdcNGTSIndexField *)calloc(1, sizeof(CThostFtdcNGTSIndexField));
  memset(t,0,sizeof(CThostFtdcNGTSIndexField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //最高指数
  t->HighIndex =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighIndex"));
  //行情时间（秒）
  strcpy(t->TimeStamp, PyString_AsString(PyObject_GetAttrString(p, "TimeStamp")));
  //最低指数
  t->LowIndex =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowIndex"));
  //前收盘指数
  t->PreCloseIndex =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCloseIndex"));
  //最新指数
  t->LastIndex =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastIndex"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //指数代码
  strcpy(t->SecurityID, PyString_AsString(PyObject_GetAttrString(p, "SecurityID")));
  //成交时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //今开盘指数
  t->OpenIndex =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenIndex"));
  //参与计算相应指数的交易数量（手）
  t->TotalVolumeTraded =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalVolumeTraded"));
  //今日收盘指数
  t->CloseIndex =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseIndex"));
  //参与计算相应指数的成交金额（元）
  t->TurnOver =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TurnOver"));

  return t;
};

//用户登录应答
PyObject * new_CThostFtdcRspUserLoginField(CThostFtdcRspUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspUserLoginField", (char*)"sssisisss",
p->UserID, p->SZETime, p->TradingDay, p->SessionID, p->SystemName, p->FrontID, p->BrokerID, p->LoginTime, p->SSETime);
}
CThostFtdcRspUserLoginField * from_CThostFtdcRspUserLoginField(PyObject * p){
  CThostFtdcRspUserLoginField *t = (CThostFtdcRspUserLoginField *)calloc(1, sizeof(CThostFtdcRspUserLoginField));
  memset(t,0,sizeof(CThostFtdcRspUserLoginField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //深证所时间
  strcpy(t->SZETime, PyString_AsString(PyObject_GetAttrString(p, "SZETime")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //交易系统名称
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //登录成功时间
  strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
  //上证所时间
  strcpy(t->SSETime, PyString_AsString(PyObject_GetAttrString(p, "SSETime")));

  return t;
};

//用户信息
PyObject * new_CThostFtdcLevel2UserField(CThostFtdcLevel2UserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLevel2UserField", (char*)"ssss",
p->UserName, p->Password, p->UserID, p->EffectiveDate);
}
CThostFtdcLevel2UserField * from_CThostFtdcLevel2UserField(PyObject * p){
  CThostFtdcLevel2UserField *t = (CThostFtdcLevel2UserField *)calloc(1, sizeof(CThostFtdcLevel2UserField));
  memset(t,0,sizeof(CThostFtdcLevel2UserField));
  //用户名称
  strcpy(t->UserName, PyString_AsString(PyObject_GetAttrString(p, "UserName")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //启用日期
  strcpy(t->EffectiveDate, PyString_AsString(PyObject_GetAttrString(p, "EffectiveDate")));

  return t;
};

//Level2行情
PyObject * new_CThostFtdcLevel2MarketDataField(CThostFtdcLevel2MarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLevel2MarketDataField", (char*)"ddddddddddddiddddddddddddisdiiiiiiiddidiiiiddddiiiiiiiiiiidiiiidiiiiiiisiiiisiidddsddi",
p->WeightedAvgBidPx, p->TotalOfferQty, p->ClosePx, p->BidPx9, p->BidPx8, p->BidPx5, p->BidPx4, p->BidPx7, p->BidPx6, p->BidPx1, p->BidPx3, p->BidPx2, p->OfferOrderQtyA, p->OfferPx6, p->OfferPx7, p->OfferPx4, p->OfferPx5, p->OfferPx2, p->OfferPx3, p->OfferPx1, p->TotalBidQty, p->OfferPx8, p->OfferPx9, p->OfferPxA, p->LowPx, p->OfferOrderQty8, p->TradingDay, p->PreClosePx, p->OfferOrderQty1, p->OfferOrderQty2, p->OfferOrderQty3, p->OfferOrderQty4, p->OfferOrderQty5, p->OfferOrderQty6, p->OfferOrderQty7, p->YieldToMaturity, p->BidPxA, p->OfferPriceLevel, p->AltWeightedAvgBidPx, p->BidNumOrder2, p->OfferNumOrderA, p->NumTrades, p->BidPriceLevel, p->WarUpperPx, p->WarLowerPx, p->OpenPx, p->HighPx, p->OfferNumOrder8, p->OfferNumOrder9, p->OfferNumOrder1, p->OfferNumOrder2, p->OfferNumOrder3, p->OfferNumOrder4, p->OfferNumOrder5, p->OfferNumOrder6, p->OfferNumOrder7, p->BidOrderQty7, p->BidOrderQty6, p->TotalValueTrade, p->BidOrderQty4, p->BidOrderQty3, p->BidOrderQty2, p->BidOrderQty1, p->TotalWarrantExecQty, p->BidOrderQty9, p->BidOrderQty8, p->BidNumOrder7, p->BidNumOrder6, p->BidNumOrder5, p->BidNumOrder4, p->BidNumOrder3, p->DataTimeStamp, p->BidNumOrder1, p->BidOrderQty5, p->BidNumOrder9, p->BidNumOrder8, p->ExchangeID, p->BidNumOrderA, p->BidOrderQtyA, p->TotalVolumeTrade, p->AltWeightedAvgOfferPx, p->WeightedAvgOfferPx, p->SecurityID, p->LastPx, p->IOPV, p->OfferOrderQty9);
}
CThostFtdcLevel2MarketDataField * from_CThostFtdcLevel2MarketDataField(PyObject * p){
  CThostFtdcLevel2MarketDataField *t = (CThostFtdcLevel2MarketDataField *)calloc(1, sizeof(CThostFtdcLevel2MarketDataField));
  memset(t,0,sizeof(CThostFtdcLevel2MarketDataField));
  //加权平均委买价
  t->WeightedAvgBidPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WeightedAvgBidPx"));
  //委托卖出总量
  t->TotalOfferQty =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalOfferQty"));
  //收盘价
  t->ClosePx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePx"));
  //申买价九
  t->BidPx9 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx9"));
  //申买价八
  t->BidPx8 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx8"));
  //申买价五
  t->BidPx5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx5"));
  //申买价四
  t->BidPx4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx4"));
  //申买价七
  t->BidPx7 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx7"));
  //申买价六
  t->BidPx6 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx6"));
  //申买价一
  t->BidPx1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx1"));
  //申买价三
  t->BidPx3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx3"));
  //申买价二
  t->BidPx2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx2"));
  //申卖量十
  t->OfferOrderQtyA =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQtyA"));
  //申卖价六
  t->OfferPx6 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx6"));
  //申卖价七
  t->OfferPx7 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx7"));
  //申卖价四
  t->OfferPx4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx4"));
  //申卖价五
  t->OfferPx5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx5"));
  //申卖价二
  t->OfferPx2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx2"));
  //申卖价三
  t->OfferPx3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx3"));
  //申卖价一
  t->OfferPx1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx1"));
  //委托买入总量
  t->TotalBidQty =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalBidQty"));
  //申卖价八
  t->OfferPx8 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx8"));
  //申卖价九
  t->OfferPx9 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx9"));
  //申卖价十
  t->OfferPxA =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPxA"));
  //最低价
  t->LowPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowPx"));
  //申卖量八
  t->OfferOrderQty8 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty8"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //昨收盘价
  t->PreClosePx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePx"));
  //申卖量一
  t->OfferOrderQty1 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty1"));
  //申卖量二
  t->OfferOrderQty2 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty2"));
  //申卖量三
  t->OfferOrderQty3 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty3"));
  //申卖量四
  t->OfferOrderQty4 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty4"));
  //申卖量五
  t->OfferOrderQty5 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty5"));
  //申卖量六
  t->OfferOrderQty6 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty6"));
  //申卖量七
  t->OfferOrderQty7 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty7"));
  //到期收益率
  t->YieldToMaturity =   PyFloat_AsDouble(PyObject_GetAttrString(p, "YieldToMaturity"));
  //申买价十
  t->BidPxA =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPxA"));
  //卖价深度
  t->OfferPriceLevel =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferPriceLevel"));
  //债券加权平均委买价
  t->AltWeightedAvgBidPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AltWeightedAvgBidPx"));
  //实际买总委托笔数二
  t->BidNumOrder2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder2"));
  //实际卖总委托笔数十
  t->OfferNumOrderA =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrderA"));
  //成交笔数
  t->NumTrades =   PyInt_AsLong(PyObject_GetAttrString(p, "NumTrades"));
  //买价深度
  t->BidPriceLevel =   PyInt_AsLong(PyObject_GetAttrString(p, "BidPriceLevel"));
  //权证涨停价格
  t->WarUpperPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WarUpperPx"));
  //权证跌停价格
  t->WarLowerPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WarLowerPx"));
  //今开盘价
  t->OpenPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPx"));
  //最高价
  t->HighPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighPx"));
  //实际卖总委托笔数八
  t->OfferNumOrder8 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder8"));
  //实际卖总委托笔数九
  t->OfferNumOrder9 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder9"));
  //实际卖总委托笔数一
  t->OfferNumOrder1 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder1"));
  //实际卖总委托笔数二
  t->OfferNumOrder2 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder2"));
  //实际卖总委托笔数三
  t->OfferNumOrder3 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder3"));
  //实际卖总委托笔数四
  t->OfferNumOrder4 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder4"));
  //实际卖总委托笔数五
  t->OfferNumOrder5 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder5"));
  //实际卖总委托笔数六
  t->OfferNumOrder6 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder6"));
  //实际卖总委托笔数七
  t->OfferNumOrder7 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder7"));
  //申买量七
  t->BidOrderQty7 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty7"));
  //申买量六
  t->BidOrderQty6 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty6"));
  //成交总金额
  t->TotalValueTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalValueTrade"));
  //申买量四
  t->BidOrderQty4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty4"));
  //申买量三
  t->BidOrderQty3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty3"));
  //申买量二
  t->BidOrderQty2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty2"));
  //申买量一
  t->BidOrderQty1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty1"));
  //权证执行总数量
  t->TotalWarrantExecQty =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalWarrantExecQty"));
  //申买量九
  t->BidOrderQty9 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty9"));
  //申买量八
  t->BidOrderQty8 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty8"));
  //实际买总委托笔数七
  t->BidNumOrder7 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder7"));
  //实际买总委托笔数六
  t->BidNumOrder6 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder6"));
  //实际买总委托笔数五
  t->BidNumOrder5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder5"));
  //实际买总委托笔数四
  t->BidNumOrder4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder4"));
  //实际买总委托笔数三
  t->BidNumOrder3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder3"));
  //时间戳
  strcpy(t->DataTimeStamp, PyString_AsString(PyObject_GetAttrString(p, "DataTimeStamp")));
  //实际买总委托笔数一
  t->BidNumOrder1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder1"));
  //申买量五
  t->BidOrderQty5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty5"));
  //实际买总委托笔数九
  t->BidNumOrder9 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder9"));
  //实际买总委托笔数八
  t->BidNumOrder8 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder8"));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //实际买总委托笔数十
  t->BidNumOrderA =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrderA"));
  //申买量十
  t->BidOrderQtyA =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQtyA"));
  //成交总量
  t->TotalVolumeTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalVolumeTrade"));
  //债券加权平均委卖价格
  t->AltWeightedAvgOfferPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AltWeightedAvgOfferPx"));
  //加权平均委卖价
  t->WeightedAvgOfferPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WeightedAvgOfferPx"));
  //证券代码
  strcpy(t->SecurityID, PyString_AsString(PyObject_GetAttrString(p, "SecurityID")));
  //现价
  t->LastPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPx"));
  //净值估值
  t->IOPV =   PyFloat_AsDouble(PyObject_GetAttrString(p, "IOPV"));
  //申卖量九
  t->OfferOrderQty9 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty9"));

  return t;
};

//Level2行情申买五属性
PyObject * new_CThostFtdcL2MarketDataBid5Field(CThostFtdcL2MarketDataBid5Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid5Field", (char*)"dii",
p->BidPx5, p->BidOrderQty5, p->BidNumOrder5);
}
CThostFtdcL2MarketDataBid5Field * from_CThostFtdcL2MarketDataBid5Field(PyObject * p){
  CThostFtdcL2MarketDataBid5Field *t = (CThostFtdcL2MarketDataBid5Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid5Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid5Field));
  //申买价五
  t->BidPx5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx5"));
  //申买量五
  t->BidOrderQty5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty5"));
  //实际买总委托笔数五
  t->BidNumOrder5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder5"));

  return t;
};

//Level2委买信息
PyObject * new_CThostFtdcL2MarketDataBidOrderField(CThostFtdcL2MarketDataBidOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBidOrderField", (char*)"ddd",
p->TotalBidQty, p->AltWeightedAvgBidPx, p->WeightedAvgBidPx);
}
CThostFtdcL2MarketDataBidOrderField * from_CThostFtdcL2MarketDataBidOrderField(PyObject * p){
  CThostFtdcL2MarketDataBidOrderField *t = (CThostFtdcL2MarketDataBidOrderField *)calloc(1, sizeof(CThostFtdcL2MarketDataBidOrderField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBidOrderField));
  //委托买入总量
  t->TotalBidQty =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalBidQty"));
  //债券加权平均委买价
  t->AltWeightedAvgBidPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AltWeightedAvgBidPx"));
  //加权平均委买价
  t->WeightedAvgBidPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WeightedAvgBidPx"));

  return t;
};

//响应信息
PyObject * new_CThostFtdcRspInfoField(CThostFtdcRspInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspInfoField", (char*)"si",
p->ErrorMsg, p->ErrorID);
}
CThostFtdcRspInfoField * from_CThostFtdcRspInfoField(PyObject * p){
  CThostFtdcRspInfoField *t = (CThostFtdcRspInfoField *)calloc(1, sizeof(CThostFtdcRspInfoField));
  memset(t,0,sizeof(CThostFtdcRspInfoField));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//Level2行情申卖八属性
PyObject * new_CThostFtdcL2MarketDataOffer8Field(CThostFtdcL2MarketDataOffer8Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer8Field", (char*)"iid",
p->OfferOrderQty8, p->OfferNumOrder8, p->OfferPx8);
}
CThostFtdcL2MarketDataOffer8Field * from_CThostFtdcL2MarketDataOffer8Field(PyObject * p){
  CThostFtdcL2MarketDataOffer8Field *t = (CThostFtdcL2MarketDataOffer8Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer8Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer8Field));
  //申卖量八
  t->OfferOrderQty8 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty8"));
  //实际卖总委托笔数八
  t->OfferNumOrder8 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder8"));
  //申卖价八
  t->OfferPx8 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx8"));

  return t;
};

//Level2行情申买六属性
PyObject * new_CThostFtdcL2MarketDataBid6Field(CThostFtdcL2MarketDataBid6Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid6Field", (char*)"idi",
p->BidOrderQty6, p->BidPx6, p->BidNumOrder6);
}
CThostFtdcL2MarketDataBid6Field * from_CThostFtdcL2MarketDataBid6Field(PyObject * p){
  CThostFtdcL2MarketDataBid6Field *t = (CThostFtdcL2MarketDataBid6Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid6Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid6Field));
  //申买量六
  t->BidOrderQty6 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty6"));
  //申买价六
  t->BidPx6 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx6"));
  //实际买总委托笔数六
  t->BidNumOrder6 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder6"));

  return t;
};

//Level2价格深度属性
PyObject * new_CThostFtdcL2MarketDataPriceLevelField(CThostFtdcL2MarketDataPriceLevelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataPriceLevelField", (char*)"ii",
p->OfferPriceLevel, p->BidPriceLevel);
}
CThostFtdcL2MarketDataPriceLevelField * from_CThostFtdcL2MarketDataPriceLevelField(PyObject * p){
  CThostFtdcL2MarketDataPriceLevelField *t = (CThostFtdcL2MarketDataPriceLevelField *)calloc(1, sizeof(CThostFtdcL2MarketDataPriceLevelField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataPriceLevelField));
  //卖价深度
  t->OfferPriceLevel =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferPriceLevel"));
  //买价深度
  t->BidPriceLevel =   PyInt_AsLong(PyObject_GetAttrString(p, "BidPriceLevel"));

  return t;
};

//Level2行情申卖五属性
PyObject * new_CThostFtdcL2MarketDataOffer5Field(CThostFtdcL2MarketDataOffer5Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer5Field", (char*)"dii",
p->OfferPx5, p->OfferOrderQty5, p->OfferNumOrder5);
}
CThostFtdcL2MarketDataOffer5Field * from_CThostFtdcL2MarketDataOffer5Field(PyObject * p){
  CThostFtdcL2MarketDataOffer5Field *t = (CThostFtdcL2MarketDataOffer5Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer5Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer5Field));
  //申卖价五
  t->OfferPx5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx5"));
  //申卖量五
  t->OfferOrderQty5 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty5"));
  //实际卖总委托笔数五
  t->OfferNumOrder5 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder5"));

  return t;
};

//Level2行情申卖九属性
PyObject * new_CThostFtdcL2MarketDataOffer9Field(CThostFtdcL2MarketDataOffer9Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer9Field", (char*)"iid",
p->OfferOrderQty9, p->OfferNumOrder9, p->OfferPx9);
}
CThostFtdcL2MarketDataOffer9Field * from_CThostFtdcL2MarketDataOffer9Field(PyObject * p){
  CThostFtdcL2MarketDataOffer9Field *t = (CThostFtdcL2MarketDataOffer9Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer9Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer9Field));
  //申卖量九
  t->OfferOrderQty9 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty9"));
  //实际卖总委托笔数九
  t->OfferNumOrder9 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder9"));
  //申卖价九
  t->OfferPx9 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx9"));

  return t;
};

//Level2行情申买二属性
PyObject * new_CThostFtdcL2MarketDataBid2Field(CThostFtdcL2MarketDataBid2Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid2Field", (char*)"iid",
p->BidNumOrder2, p->BidOrderQty2, p->BidPx2);
}
CThostFtdcL2MarketDataBid2Field * from_CThostFtdcL2MarketDataBid2Field(PyObject * p){
  CThostFtdcL2MarketDataBid2Field *t = (CThostFtdcL2MarketDataBid2Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid2Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid2Field));
  //实际买总委托笔数二
  t->BidNumOrder2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder2"));
  //申买量二
  t->BidOrderQty2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty2"));
  //申买价二
  t->BidPx2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx2"));

  return t;
};

//Level2行情申买九属性
PyObject * new_CThostFtdcL2MarketDataBid9Field(CThostFtdcL2MarketDataBid9Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid9Field", (char*)"dii",
p->BidPx9, p->BidNumOrder9, p->BidOrderQty9);
}
CThostFtdcL2MarketDataBid9Field * from_CThostFtdcL2MarketDataBid9Field(PyObject * p){
  CThostFtdcL2MarketDataBid9Field *t = (CThostFtdcL2MarketDataBid9Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid9Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid9Field));
  //申买价九
  t->BidPx9 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx9"));
  //实际买总委托笔数九
  t->BidNumOrder9 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder9"));
  //申买量九
  t->BidOrderQty9 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty9"));

  return t;
};

//Level2权证信息
PyObject * new_CThostFtdcL2MarketDataWarrantField(CThostFtdcL2MarketDataWarrantField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataWarrantField", (char*)"ddd",
p->WarUpperPx, p->TotalWarrantExecQty, p->WarLowerPx);
}
CThostFtdcL2MarketDataWarrantField * from_CThostFtdcL2MarketDataWarrantField(PyObject * p){
  CThostFtdcL2MarketDataWarrantField *t = (CThostFtdcL2MarketDataWarrantField *)calloc(1, sizeof(CThostFtdcL2MarketDataWarrantField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataWarrantField));
  //权证涨停价格
  t->WarUpperPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WarUpperPx"));
  //权证执行总数量
  t->TotalWarrantExecQty =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalWarrantExecQty"));
  //权证跌停价格
  t->WarLowerPx =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WarLowerPx"));

  return t;
};

//Level2成交信息
PyObject * new_CThostFtdcL2MarketDataTradedField(CThostFtdcL2MarketDataTradedField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataTradedField", (char*)"did",
p->TotalValueTrade, p->NumTrades, p->TotalVolumeTrade);
}
CThostFtdcL2MarketDataTradedField * from_CThostFtdcL2MarketDataTradedField(PyObject * p){
  CThostFtdcL2MarketDataTradedField *t = (CThostFtdcL2MarketDataTradedField *)calloc(1, sizeof(CThostFtdcL2MarketDataTradedField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataTradedField));
  //成交总金额
  t->TotalValueTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalValueTrade"));
  //成交笔数
  t->NumTrades =   PyInt_AsLong(PyObject_GetAttrString(p, "NumTrades"));
  //成交总量
  t->TotalVolumeTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TotalVolumeTrade"));

  return t;
};

//Level2行情申卖十属性
PyObject * new_CThostFtdcL2MarketDataOfferAField(CThostFtdcL2MarketDataOfferAField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOfferAField", (char*)"iid",
p->OfferNumOrderA, p->OfferOrderQtyA, p->OfferPxA);
}
CThostFtdcL2MarketDataOfferAField * from_CThostFtdcL2MarketDataOfferAField(PyObject * p){
  CThostFtdcL2MarketDataOfferAField *t = (CThostFtdcL2MarketDataOfferAField *)calloc(1, sizeof(CThostFtdcL2MarketDataOfferAField));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOfferAField));
  //实际卖总委托笔数十
  t->OfferNumOrderA =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrderA"));
  //申卖量十
  t->OfferOrderQtyA =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQtyA"));
  //申卖价十
  t->OfferPxA =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPxA"));

  return t;
};

//Level2行情申买三属性
PyObject * new_CThostFtdcL2MarketDataBid3Field(CThostFtdcL2MarketDataBid3Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataBid3Field", (char*)"iid",
p->BidNumOrder3, p->BidOrderQty3, p->BidPx3);
}
CThostFtdcL2MarketDataBid3Field * from_CThostFtdcL2MarketDataBid3Field(PyObject * p){
  CThostFtdcL2MarketDataBid3Field *t = (CThostFtdcL2MarketDataBid3Field *)calloc(1, sizeof(CThostFtdcL2MarketDataBid3Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataBid3Field));
  //实际买总委托笔数三
  t->BidNumOrder3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidNumOrder3"));
  //申买量三
  t->BidOrderQty3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidOrderQty3"));
  //申买价三
  t->BidPx3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPx3"));

  return t;
};

//Level2行情申卖六属性
PyObject * new_CThostFtdcL2MarketDataOffer6Field(CThostFtdcL2MarketDataOffer6Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcL2MarketDataOffer6Field", (char*)"dii",
p->OfferPx6, p->OfferNumOrder6, p->OfferOrderQty6);
}
CThostFtdcL2MarketDataOffer6Field * from_CThostFtdcL2MarketDataOffer6Field(PyObject * p){
  CThostFtdcL2MarketDataOffer6Field *t = (CThostFtdcL2MarketDataOffer6Field *)calloc(1, sizeof(CThostFtdcL2MarketDataOffer6Field));
  memset(t,0,sizeof(CThostFtdcL2MarketDataOffer6Field));
  //申卖价六
  t->OfferPx6 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OfferPx6"));
  //实际卖总委托笔数六
  t->OfferNumOrder6 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferNumOrder6"));
  //申卖量六
  t->OfferOrderQty6 =   PyInt_AsLong(PyObject_GetAttrString(p, "OfferOrderQty6"));

  return t;
};
