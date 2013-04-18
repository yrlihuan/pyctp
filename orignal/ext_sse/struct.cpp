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

#include "struct.h"

static PyObject * mod=NULL;
PyObject * register_struct(PyObject * self, PyObject * args){
  mod = PyTuple_GET_ITEM(args,0);
  Py_INCREF(Py_None);
  return Py_None;
}

//期商签到响应
PyObject * new_CZQThostFtdcRspFutureSignInField(CZQThostFtdcRspFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspFutureSignInField", (char*)"sssiisssissiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->PinKey, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->MacKey, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CZQThostFtdcRspFutureSignInField * from_CZQThostFtdcRspFutureSignInField(PyObject * p){
  CZQThostFtdcRspFutureSignInField *t = (CZQThostFtdcRspFutureSignInField *)calloc(1, sizeof(CZQThostFtdcRspFutureSignInField));
  memset(t,0,sizeof(CZQThostFtdcRspFutureSignInField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //PIN密钥
  strcpy(t->PinKey, PyString_AsString(PyObject_GetAttrString(p, "PinKey")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //MAC密钥
  strcpy(t->MacKey, PyString_AsString(PyObject_GetAttrString(p, "MacKey")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询交易事件通知
PyObject * new_CZQThostFtdcQryTradingNoticeField(CZQThostFtdcQryTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTradingNoticeField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryTradingNoticeField * from_CZQThostFtdcQryTradingNoticeField(PyObject * p){
  CZQThostFtdcQryTradingNoticeField *t = (CZQThostFtdcQryTradingNoticeField *)calloc(1, sizeof(CZQThostFtdcQryTradingNoticeField));
  memset(t,0,sizeof(CZQThostFtdcQryTradingNoticeField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//资金账户
PyObject * new_CZQThostFtdcTradingAccountField(CZQThostFtdcTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradingAccountField", (char*)"ddddddddddddsddddddddddddidssdddddddddddddddd",
p->FrozenTransferFee, p->Mortgage, p->ExchangeDeliveryMargin, p->FrozenMargin, p->WithdrawQuota, p->PositionProfit, p->BondRepurchaseValue, p->TransferFee, p->Commission, p->Interest, p->ShortSellingAmount, p->CashIn, p->AccountID, p->Available, p->LowLimitRatio, p->PreCredit, p->PreMortgage, p->CreditRatio, p->MarginTradingAvail, p->CreditAmount, p->InterestBase, p->ExchangeMargin, p->ConversionAmount, p->SSStockValue, p->PreMargin, p->SettlementID, p->DeliveryMargin, p->TradingDay, p->BrokerID, p->FrozenCash, p->Withdraw, p->StampTax, p->Balance, p->FrozenStampTax, p->Reserve, p->PreDeposit, p->ShortSellingAvail, p->Credit, p->PreBalance, p->CurrMargin, p->FrozenCommission, p->CloseProfit, p->StockValue, p->MarginTradingAmount, p->Deposit);
}
CZQThostFtdcTradingAccountField * from_CZQThostFtdcTradingAccountField(PyObject * p){
  CZQThostFtdcTradingAccountField *t = (CZQThostFtdcTradingAccountField *)calloc(1, sizeof(CZQThostFtdcTradingAccountField));
  memset(t,0,sizeof(CZQThostFtdcTradingAccountField));
  //冻结的过户费
  t->FrozenTransferFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenTransferFee"));
  //质押金额
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //交易所交割保证金
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //可取资金
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //融资持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //国债回购占用资金
  t->BondRepurchaseValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BondRepurchaseValue"));
  //过户费
  t->TransferFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFee"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //利息收入
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //融券卖出金额
  t->ShortSellingAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellingAmount"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //现金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //最低维持担保比例
  t->LowLimitRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowLimitRatio"));
  //上次信用额度
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //上次质押金额
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //维持担保比例
  t->CreditRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CreditRatio"));
  //融资买入可用金额
  t->MarginTradingAvail =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradingAvail"));
  //授信额度
  t->CreditAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CreditAmount"));
  //利息基数
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //折算金额
  t->ConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConversionAmount"));
  //融券总市值
  t->SSStockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SSStockValue"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //投资者交割保证金
  t->DeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //出金金额
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //印花税
  t->StampTax =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTax"));
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //冻结的印花税
  t->FrozenStampTax =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenStampTax"));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //上次存款额
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //融券卖出可用金额
  t->ShortSellingAvail =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellingAvail"));
  //保证金可用余额
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //融券持仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //证券总价值
  t->StockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StockValue"));
  //融资买入金额
  t->MarginTradingAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradingAmount"));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));

  return t;
};

//客户端认证信息
PyObject * new_CZQThostFtdcAuthenticationInfoField(CZQThostFtdcAuthenticationInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcAuthenticationInfoField", (char*)"ssiss",
p->UserID, p->AuthInfo, p->IsResult, p->BrokerID, p->UserProductInfo);
}
CZQThostFtdcAuthenticationInfoField * from_CZQThostFtdcAuthenticationInfoField(PyObject * p){
  CZQThostFtdcAuthenticationInfoField *t = (CZQThostFtdcAuthenticationInfoField *)calloc(1, sizeof(CZQThostFtdcAuthenticationInfoField));
  memset(t,0,sizeof(CZQThostFtdcAuthenticationInfoField));
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

//经纪公司交易参数
PyObject * new_CZQThostFtdcBrokerTradingParamsField(CZQThostFtdcBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerTradingParamsField", (char*)"scscc",
p->InvestorID, p->MarginPriceType, p->BrokerID, p->AvailIncludeCloseProfit, p->Algorithm);
}
CZQThostFtdcBrokerTradingParamsField * from_CZQThostFtdcBrokerTradingParamsField(PyObject * p){
  CZQThostFtdcBrokerTradingParamsField *t = (CZQThostFtdcBrokerTradingParamsField *)calloc(1, sizeof(CZQThostFtdcBrokerTradingParamsField));
  memset(t,0,sizeof(CZQThostFtdcBrokerTradingParamsField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //保证金价格类型
  //enum类型
  //THOST_FTDC_MPT_OpenPrice -> '4', 开仓价
  //THOST_FTDC_MPT_PreSettlementPrice -> '1', 昨结算价
  //THOST_FTDC_MPT_AveragePrice -> '3', 成交均价
  //THOST_FTDC_MPT_SettlementPrice -> '2', 最新价
  t->MarginPriceType =   PyString_AsString(PyObject_GetAttrString(p, "MarginPriceType"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //可用是否包含平仓盈利
  //enum类型
  //THOST_FTDC_ICP_NotInclude -> '2', 不包含平仓盈利
  //THOST_FTDC_ICP_Include -> '0', 包含平仓盈利
  t->AvailIncludeCloseProfit =   PyString_AsString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"))[0];
  //盈亏算法
  //enum类型
  //THOST_FTDC_AG_OnlyLost -> '2', 浮盈不计，浮亏计
  //THOST_FTDC_AG_None -> '4', 浮盈浮亏都不计算
  //THOST_FTDC_AG_All -> '1', 浮盈浮亏都计算
  //THOST_FTDC_AG_OnlyGain -> '3', 浮盈计，浮亏不计
  t->Algorithm =   PyString_AsString(PyObject_GetAttrString(p, "Algorithm"))[0];

  return t;
};

//查询经纪公司
PyObject * new_CZQThostFtdcQryBrokerField(CZQThostFtdcQryBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryBrokerField", (char*)"s",
p->BrokerID);
}
CZQThostFtdcQryBrokerField * from_CZQThostFtdcQryBrokerField(PyObject * p){
  CZQThostFtdcQryBrokerField *t = (CZQThostFtdcQryBrokerField *)calloc(1, sizeof(CZQThostFtdcQryBrokerField));
  memset(t,0,sizeof(CZQThostFtdcQryBrokerField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//成交
PyObject * new_CZQThostFtdcTradeField(CZQThostFtdcTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradeField", (char*)"cscscsssissssissscssssisisscc",
p->TradeType, p->TraderID, p->HedgeFlag, p->TradeTime, p->Direction, p->ParticipantID, p->Price, p->ClientID, p->Volume, p->OrderSysID, p->ClearingPartID, p->InstrumentID, p->ExchangeID, p->SettlementID, p->UserID, p->TradingDay, p->BrokerID, p->OffsetFlag, p->OrderLocalID, p->TradeID, p->TradeDate, p->BusinessUnit, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->ExchangeInstID, p->PriceSource, p->TradingRole);
}
CZQThostFtdcTradeField * from_CZQThostFtdcTradeField(PyObject * p){
  CZQThostFtdcTradeField *t = (CZQThostFtdcTradeField *)calloc(1, sizeof(CZQThostFtdcTradeField));
  memset(t,0,sizeof(CZQThostFtdcTradeField));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  //THOST_FTDC_TRDT_EFTPurchase -> '5', ETF申购
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_EFTRedem -> '6', ETF赎回
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //成交时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //价格
  strcpy(t->Price, PyString_AsString(PyObject_GetAttrString(p, "Price")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //开平标志
  //enum类型
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //成交编号
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //成交时期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //序号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //经纪公司报单编号
  t->BrokerOrderSeq =   PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //成交价来源
  //enum类型
  //THOST_FTDC_PSRC_Sell -> '2', 卖委托价
  //THOST_FTDC_PSRC_Buy -> '1', 买委托价
  //THOST_FTDC_PSRC_LastPrice -> '0', 前成交价
  t->PriceSource =   PyString_AsString(PyObject_GetAttrString(p, "PriceSource"))[0];
  //交易角色
  //enum类型
  //THOST_FTDC_ER_Host -> '2', 自营
  //THOST_FTDC_ER_Broker -> '1', 代理
  //THOST_FTDC_ER_Maker -> '3', 做市商
  t->TradingRole =   PyString_AsString(PyObject_GetAttrString(p, "TradingRole"))[0];

  return t;
};

//查询交易所
PyObject * new_CZQThostFtdcQryExchangeField(CZQThostFtdcQryExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryExchangeField", (char*)"s",
p->ExchangeID);
}
CZQThostFtdcQryExchangeField * from_CZQThostFtdcQryExchangeField(PyObject * p){
  CZQThostFtdcQryExchangeField *t = (CZQThostFtdcQryExchangeField *)calloc(1, sizeof(CZQThostFtdcQryExchangeField));
  memset(t,0,sizeof(CZQThostFtdcQryExchangeField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//查询投资者结算结果
PyObject * new_CZQThostFtdcQrySettlementInfoField(CZQThostFtdcQrySettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQrySettlementInfoField", (char*)"sss",
p->InvestorID, p->BrokerID, p->TradingDay);
}
CZQThostFtdcQrySettlementInfoField * from_CZQThostFtdcQrySettlementInfoField(PyObject * p){
  CZQThostFtdcQrySettlementInfoField *t = (CZQThostFtdcQrySettlementInfoField *)calloc(1, sizeof(CZQThostFtdcQrySettlementInfoField));
  memset(t,0,sizeof(CZQThostFtdcQrySettlementInfoField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

  return t;
};

//日终文件就绪请求
PyObject * new_CZQThostFtdcReqDayEndFileReadyField(CZQThostFtdcReqDayEndFileReadyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqDayEndFileReadyField", (char*)"csscssssisssis",
p->FileBusinessCode, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BankSerial, p->BankBranchID, p->TradingDay, p->SessionID, p->BrokerID, p->BankID, p->TradeTime, p->PlateSerial, p->Digest);
}
CZQThostFtdcReqDayEndFileReadyField * from_CZQThostFtdcReqDayEndFileReadyField(PyObject * p){
  CZQThostFtdcReqDayEndFileReadyField *t = (CZQThostFtdcReqDayEndFileReadyField *)calloc(1, sizeof(CZQThostFtdcReqDayEndFileReadyField));
  memset(t,0,sizeof(CZQThostFtdcReqDayEndFileReadyField));
  //文件业务功能
  //enum类型
  //THOST_FTDC_FBC_TransferDetails -> '1', 转账交易明细对账
  //THOST_FTDC_FBC_FutureAccountChangeInfoDetails -> '4', 期货账户信息变更明细对账
  //THOST_FTDC_FBC_CustMoneyDetail -> '5', 客户资金台账余额明细对账
  //THOST_FTDC_FBC_MainPartMonitorData -> 'd', 总分平衡监管数据
  //THOST_FTDC_FBC_CustAccStatus -> '2', 客户账户状态对账
  //THOST_FTDC_FBC_PreparationMoney -> 'e', 存管银行备付金余额
  //THOST_FTDC_FBC_CustMoneySendAndReceiveDetails -> 'a', 客户资金交收明细
  //THOST_FTDC_FBC_MainbodyMoneyTotal -> 'c', 主体间资金交收汇总
  //THOST_FTDC_FBC_BankMoneyMonitorData -> 'f', 协办存管银行资金监管数据
  //THOST_FTDC_FBC_AccountTradeDetails -> '3', 账户类交易明细对账
  //THOST_FTDC_FBC_CustInterestNetMoneyDetails -> '9', 客户结息净额明细
  //THOST_FTDC_FBC_OthersExceptionResult -> '8', 其它对账异常结果文件
  //THOST_FTDC_FBC_Others -> '0', 其他
  //THOST_FTDC_FBC_CorporationMoneyTotal -> 'b', 法人存管银行资金交收汇总
  //THOST_FTDC_FBC_CustMoneyResult -> '7', 客户资金余额对账结果
  //THOST_FTDC_FBC_CustCancelAccountInfo -> '6', 客户销户结息明细对账
  t->FileBusinessCode =   PyString_AsString(PyObject_GetAttrString(p, "FileBusinessCode"))[0];
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//正在同步中的投资者
PyObject * new_CZQThostFtdcSyncingInvestorField(CZQThostFtdcSyncingInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingInvestorField", (char*)"ssssssisssssic",
p->SZBranchID, p->InvestorName, p->Mobile, p->IdentifiedCardNo, p->Telephone, p->InvestorID, p->IsCreditAccount, p->BrokerID, p->SHBranchID, p->Address, p->InvestorGroupID, p->OpenDate, p->IsActive, p->IdentifiedCardType);
}
CZQThostFtdcSyncingInvestorField * from_CZQThostFtdcSyncingInvestorField(PyObject * p){
  CZQThostFtdcSyncingInvestorField *t = (CZQThostFtdcSyncingInvestorField *)calloc(1, sizeof(CZQThostFtdcSyncingInvestorField));
  memset(t,0,sizeof(CZQThostFtdcSyncingInvestorField));
  //深圳营业部编号
  strcpy(t->SZBranchID, PyString_AsString(PyObject_GetAttrString(p, "SZBranchID")));
  //投资者名称
  strcpy(t->InvestorName, PyString_AsString(PyObject_GetAttrString(p, "InvestorName")));
  //手机
  strcpy(t->Mobile, PyString_AsString(PyObject_GetAttrString(p, "Mobile")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //联系电话
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //是否信用账户
  t->IsCreditAccount =   PyInt_AsLong(PyObject_GetAttrString(p, "IsCreditAccount"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //上海营业部编号
  strcpy(t->SHBranchID, PyString_AsString(PyObject_GetAttrString(p, "SHBranchID")));
  //通讯地址
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //开户日期
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdentifiedCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];

  return t;
};

//保证金监管系统经纪公司资金账户密钥
PyObject * new_CZQThostFtdcCFMMCTradingAccountKeyField(CZQThostFtdcCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcCFMMCTradingAccountKeyField", (char*)"issss",
p->KeyID, p->BrokerID, p->ParticipantID, p->CurrentKey, p->AccountID);
}
CZQThostFtdcCFMMCTradingAccountKeyField * from_CZQThostFtdcCFMMCTradingAccountKeyField(PyObject * p){
  CZQThostFtdcCFMMCTradingAccountKeyField *t = (CZQThostFtdcCFMMCTradingAccountKeyField *)calloc(1, sizeof(CZQThostFtdcCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(CZQThostFtdcCFMMCTradingAccountKeyField));
  //密钥编号
  t->KeyID =   PyInt_AsLong(PyObject_GetAttrString(p, "KeyID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //经纪公司统一编码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //动态密钥
  strcpy(t->CurrentKey, PyString_AsString(PyObject_GetAttrString(p, "CurrentKey")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//查询组合合约分腿
PyObject * new_CZQThostFtdcQrySyncStatusField(CZQThostFtdcQrySyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQrySyncStatusField", (char*)"s",
p->TradingDay);
}
CZQThostFtdcQrySyncStatusField * from_CZQThostFtdcQrySyncStatusField(PyObject * p){
  CZQThostFtdcQrySyncStatusField *t = (CZQThostFtdcQrySyncStatusField *)calloc(1, sizeof(CZQThostFtdcQrySyncStatusField));
  memset(t,0,sizeof(CZQThostFtdcQrySyncStatusField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

  return t;
};

//查询投资者持仓明细
PyObject * new_CZQThostFtdcQryInvestorPositionDetailField(CZQThostFtdcQryInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInvestorPositionDetailField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryInvestorPositionDetailField * from_CZQThostFtdcQryInvestorPositionDetailField(PyObject * p){
  CZQThostFtdcQryInvestorPositionDetailField *t = (CZQThostFtdcQryInvestorPositionDetailField *)calloc(1, sizeof(CZQThostFtdcQryInvestorPositionDetailField));
  memset(t,0,sizeof(CZQThostFtdcQryInvestorPositionDetailField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//转帐银行
PyObject * new_CZQThostFtdcTransferBankField(CZQThostFtdcTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferBankField", (char*)"siss",
p->BankName, p->IsActive, p->BankBrchID, p->BankID);
}
CZQThostFtdcTransferBankField * from_CZQThostFtdcTransferBankField(PyObject * p){
  CZQThostFtdcTransferBankField *t = (CZQThostFtdcTransferBankField *)calloc(1, sizeof(CZQThostFtdcTransferBankField));
  memset(t,0,sizeof(CZQThostFtdcTransferBankField));
  //银行名称
  strcpy(t->BankName, PyString_AsString(PyObject_GetAttrString(p, "BankName")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //银行分中心代码
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//报单操作
PyObject * new_CZQThostFtdcOrderActionField(CZQThostFtdcOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcOrderActionField", (char*)"ssssdsisiiicssssssssssiic",
p->ActionTime, p->InvestorID, p->TraderID, p->UserID, p->LimitPrice, p->ClientID, p->InstallID, p->ParticipantID, p->OrderActionRef, p->VolumeChange, p->SessionID, p->ActionFlag, p->InstrumentID, p->ExchangeID, p->StatusMsg, p->BrokerID, p->ActionDate, p->OrderLocalID, p->BranchID, p->BusinessUnit, p->OrderRef, p->ActionLocalID, p->RequestID, p->FrontID, p->OrderActionStatus);
}
CZQThostFtdcOrderActionField * from_CZQThostFtdcOrderActionField(PyObject * p){
  CZQThostFtdcOrderActionField *t = (CZQThostFtdcOrderActionField *)calloc(1, sizeof(CZQThostFtdcOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcOrderActionField));
  //操作时间
  strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //报单操作引用
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //数量变化
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //状态信息
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //操作日期
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //操作本地编号
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];

  return t;
};

//查询经纪公司用户事件
PyObject * new_CZQThostFtdcQryBrokerUserEventField(CZQThostFtdcQryBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryBrokerUserEventField", (char*)"ssc",
p->UserID, p->BrokerID, p->UserEventType);
}
CZQThostFtdcQryBrokerUserEventField * from_CZQThostFtdcQryBrokerUserEventField(PyObject * p){
  CZQThostFtdcQryBrokerUserEventField *t = (CZQThostFtdcQryBrokerUserEventField *)calloc(1, sizeof(CZQThostFtdcQryBrokerUserEventField));
  memset(t,0,sizeof(CZQThostFtdcQryBrokerUserEventField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户事件类型
  //enum类型
  //THOST_FTDC_UET_Logout -> '2', 登出
  //THOST_FTDC_UET_TradingError -> '4', 交易失败
  //THOST_FTDC_UET_UpdatePassword -> '5', 修改密码
  //THOST_FTDC_UET_All -> ' ', 所有
  //THOST_FTDC_UET_Other -> '9', 其他
  //THOST_FTDC_UET_Trading -> '3', 交易成功
  //THOST_FTDC_UET_Login -> '1', 登录
  t->UserEventType =   PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];

  return t;
};

//冲正请求
PyObject * new_CZQThostFtdcReqRepealField(CZQThostFtdcReqRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqRepealField", (char*)"ssscisciissicsssisicicscsssssscccsdssdccisicsisdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->BankRepealFlag, p->RepealedTimes, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->FutureRepealSerial, p->AccountID, p->BankAccount, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->BrokerRepealFlag, p->IdCardType, p->Password, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankRepealSerial, p->RepealTimeInterval, p->BankSecuAccType, p->BrokerIDByBank, p->PlateRepealSerial, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CZQThostFtdcReqRepealField * from_CZQThostFtdcReqRepealField(PyObject * p){
  CZQThostFtdcReqRepealField *t = (CZQThostFtdcReqRepealField *)calloc(1, sizeof(CZQThostFtdcReqRepealField));
  memset(t,0,sizeof(CZQThostFtdcReqRepealField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //银行冲正标志
  //enum类型
  //THOST_FTDC_BRF_BankWaitingRepeal -> '1', 银行待自动冲正
  //THOST_FTDC_BRF_BankNotNeedRepeal -> '0', 银行无需自动冲正
  //THOST_FTDC_BRF_BankBeenRepealed -> '2', 银行已自动冲正
  t->BankRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankRepealFlag"))[0];
  //已经冲正次数
  t->RepealedTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //被冲正期货流水号
  t->FutureRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //期商冲正标志
  //enum类型
  //THOST_FTDC_BRORF_BrokerNotNeedRepeal -> '0', 期商无需自动冲正
  //THOST_FTDC_BRORF_BrokerBeenRepealed -> '2', 期商已自动冲正
  //THOST_FTDC_BRORF_BrokerWaitingRepeal -> '1', 期商待自动冲正
  t->BrokerRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BrokerRepealFlag"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //被冲正银行流水号
  strcpy(t->BankRepealSerial, PyString_AsString(PyObject_GetAttrString(p, "BankRepealSerial")));
  //冲正时间间隔
  t->RepealTimeInterval =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //被冲正平台流水号
  t->PlateRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
  //发送方给接收方的消息
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//银期转账交易流水表
PyObject * new_CZQThostFtdcTransferSerialField(CZQThostFtdcTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferSerialField", (char*)"ssssssssisicisssscssdcissddc",
p->BankNewAccount, p->BrokerBranchID, p->TradeTime, p->OperatorCode, p->AccountID, p->BankAccount, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->FutureAccType, p->ErrorID, p->BankSerial, p->IdentifiedCardNo, p->TradingDay, p->BrokerID, p->IdCardType, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->FutureSerial, p->InvestorID, p->ErrorMsg, p->CustFee, p->TradeAmount, p->AvailabilityFlag);
}
CZQThostFtdcTransferSerialField * from_CZQThostFtdcTransferSerialField(PyObject * p){
  CZQThostFtdcTransferSerialField *t = (CZQThostFtdcTransferSerialField *)calloc(1, sizeof(CZQThostFtdcTransferSerialField));
  memset(t,0,sizeof(CZQThostFtdcTransferSerialField));
  //新银行帐号
  strcpy(t->BankNewAccount, PyString_AsString(PyObject_GetAttrString(p, "BankNewAccount")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //操作员
  strcpy(t->OperatorCode, PyString_AsString(PyObject_GetAttrString(p, "OperatorCode")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //交易代码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构编码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行编码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //平台流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //期货公司帐号类型
  //enum类型
  //THOST_FTDC_FAT_BankBook -> '1', 银行存折
  //THOST_FTDC_FAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_FAT_CreditCard -> '3', 信用卡
  t->FutureAccType =   PyString_AsString(PyObject_GetAttrString(p, "FutureAccType"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //交易日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货公司编码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //交易发起方日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //交易金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //有效标志
  //enum类型
  //THOST_FTDC_AVAF_Invalid -> '0', 未确认
  //THOST_FTDC_AVAF_Valid -> '1', 有效
  //THOST_FTDC_AVAF_Repeal -> '2', 冲正
  t->AvailabilityFlag =   PyString_AsString(PyObject_GetAttrString(p, "AvailabilityFlag"))[0];

  return t;
};

//经纪公司可提资金算法表
PyObject * new_CZQThostFtdcInvestorWithdrawAlgorithmField(CZQThostFtdcInvestorWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInvestorWithdrawAlgorithmField", (char*)"sscd",
p->InvestorID, p->BrokerID, p->InvestorRange, p->UsingRatio);
}
CZQThostFtdcInvestorWithdrawAlgorithmField * from_CZQThostFtdcInvestorWithdrawAlgorithmField(PyObject * p){
  CZQThostFtdcInvestorWithdrawAlgorithmField *t = (CZQThostFtdcInvestorWithdrawAlgorithmField *)calloc(1, sizeof(CZQThostFtdcInvestorWithdrawAlgorithmField));
  memset(t,0,sizeof(CZQThostFtdcInvestorWithdrawAlgorithmField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //可提资金比例
  t->UsingRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));

  return t;
};

//用户登出请求
PyObject * new_CZQThostFtdcUserLogoutField(CZQThostFtdcUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcUserLogoutField", (char*)"ss",
p->UserID, p->BrokerID);
}
CZQThostFtdcUserLogoutField * from_CZQThostFtdcUserLogoutField(PyObject * p){
  CZQThostFtdcUserLogoutField *t = (CZQThostFtdcUserLogoutField *)calloc(1, sizeof(CZQThostFtdcUserLogoutField));
  memset(t,0,sizeof(CZQThostFtdcUserLogoutField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询经纪公司用户事件
PyObject * new_CZQThostFtdcBrokerUserEventField(CZQThostFtdcBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerUserEventField", (char*)"sissssssc",
p->InstrumentID, p->EventSequenceNo, p->EventTime, p->UserID, p->InvestorID, p->BrokerID, p->UserEventInfo, p->EventDate, p->UserEventType);
}
CZQThostFtdcBrokerUserEventField * from_CZQThostFtdcBrokerUserEventField(PyObject * p){
  CZQThostFtdcBrokerUserEventField *t = (CZQThostFtdcBrokerUserEventField *)calloc(1, sizeof(CZQThostFtdcBrokerUserEventField));
  memset(t,0,sizeof(CZQThostFtdcBrokerUserEventField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //用户事件序号
  t->EventSequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "EventSequenceNo"));
  //事件发生时间
  strcpy(t->EventTime, PyString_AsString(PyObject_GetAttrString(p, "EventTime")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户事件信息
  strcpy(t->UserEventInfo, PyString_AsString(PyObject_GetAttrString(p, "UserEventInfo")));
  //事件发生日期
  strcpy(t->EventDate, PyString_AsString(PyObject_GetAttrString(p, "EventDate")));
  //用户事件类型
  //enum类型
  //THOST_FTDC_UET_Logout -> '2', 登出
  //THOST_FTDC_UET_TradingError -> '4', 交易失败
  //THOST_FTDC_UET_UpdatePassword -> '5', 修改密码
  //THOST_FTDC_UET_All -> ' ', 所有
  //THOST_FTDC_UET_Other -> '9', 其他
  //THOST_FTDC_UET_Trading -> '3', 交易成功
  //THOST_FTDC_UET_Login -> '1', 登录
  t->UserEventType =   PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];

  return t;
};

//校验投资者密码
PyObject * new_CZQThostFtdcVerifyInvestorPasswordField(CZQThostFtdcVerifyInvestorPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcVerifyInvestorPasswordField", (char*)"sss",
p->InvestorID, p->Password, p->BrokerID);
}
CZQThostFtdcVerifyInvestorPasswordField * from_CZQThostFtdcVerifyInvestorPasswordField(PyObject * p){
  CZQThostFtdcVerifyInvestorPasswordField *t = (CZQThostFtdcVerifyInvestorPasswordField *)calloc(1, sizeof(CZQThostFtdcVerifyInvestorPasswordField));
  memset(t,0,sizeof(CZQThostFtdcVerifyInvestorPasswordField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询指定流水号的交易结果响应
PyObject * new_CZQThostFtdcRspQueryTradeResultBySerialField(CZQThostFtdcRspQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspQueryTradeResultBySerialField", (char*)"ssssssssssisiissscsissscds",
p->OriginReturnCode, p->OriginDescrInfoForReturnCode, p->BrokerBranchID, p->BankPassWord, p->TradeTime, p->AccountID, p->BankAccount, p->TradeCode, p->BankBranchID, p->RefrenceIssure, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->TradingDay, p->BrokerID, p->RefrenceIssureType, p->Password, p->Reference, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->TradeAmount, p->Digest);
}
CZQThostFtdcRspQueryTradeResultBySerialField * from_CZQThostFtdcRspQueryTradeResultBySerialField(PyObject * p){
  CZQThostFtdcRspQueryTradeResultBySerialField *t = (CZQThostFtdcRspQueryTradeResultBySerialField *)calloc(1, sizeof(CZQThostFtdcRspQueryTradeResultBySerialField));
  memset(t,0,sizeof(CZQThostFtdcRspQueryTradeResultBySerialField));
  //原始返回代码
  strcpy(t->OriginReturnCode, PyString_AsString(PyObject_GetAttrString(p, "OriginReturnCode")));
  //原始返回码描述
  strcpy(t->OriginDescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "OriginDescrInfoForReturnCode")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //本流水号发布者机构编码
  strcpy(t->RefrenceIssure, PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssure")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //本流水号发布者的机构类型
  //enum类型
  //THOST_FTDC_TS_Future -> '1', 期商
  //THOST_FTDC_TS_Bank -> '0', 银行
  //THOST_FTDC_TS_Store -> '2', 券商
  t->RefrenceIssureType =   PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssureType"))[0];
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //流水号
  t->Reference =   PyInt_AsLong(PyObject_GetAttrString(p, "Reference"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询预埋单
PyObject * new_CZQThostFtdcQryParkedOrderField(CZQThostFtdcQryParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryParkedOrderField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
CZQThostFtdcQryParkedOrderField * from_CZQThostFtdcQryParkedOrderField(PyObject * p){
  CZQThostFtdcQryParkedOrderField *t = (CZQThostFtdcQryParkedOrderField *)calloc(1, sizeof(CZQThostFtdcQryParkedOrderField));
  memset(t,0,sizeof(CZQThostFtdcQryParkedOrderField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//联系人
PyObject * new_CZQThostFtdcLinkManField(CZQThostFtdcLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcLinkManField", (char*)"cssssisssc",
p->PersonType, p->PersonName, p->IdentifiedCardNo, p->Telephone, p->ZipCode, p->Priority, p->InvestorID, p->BrokerID, p->Address, p->IdentifiedCardType);
}
CZQThostFtdcLinkManField * from_CZQThostFtdcLinkManField(PyObject * p){
  CZQThostFtdcLinkManField *t = (CZQThostFtdcLinkManField *)calloc(1, sizeof(CZQThostFtdcLinkManField));
  memset(t,0,sizeof(CZQThostFtdcLinkManField));
  //联系人类型
  //enum类型
  //THOST_FTDC_PST_Settlement -> '4', 结算单确认人
  //THOST_FTDC_PST_Open -> '2', 开户授权人
  //THOST_FTDC_PST_Order -> '1', 指定下单人
  //THOST_FTDC_PST_Fund -> '3', 资金调拨人
  t->PersonType =   PyString_AsString(PyObject_GetAttrString(p, "PersonType"))[0];
  //名称
  strcpy(t->PersonName, PyString_AsString(PyObject_GetAttrString(p, "PersonName")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //联系电话
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //邮政编码
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //优先级
  t->Priority =   PyInt_AsLong(PyObject_GetAttrString(p, "Priority"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //通讯地址
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdentifiedCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];

  return t;
};

//查询联系人
PyObject * new_CZQThostFtdcQryLinkManField(CZQThostFtdcQryLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryLinkManField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryLinkManField * from_CZQThostFtdcQryLinkManField(PyObject * p){
  CZQThostFtdcQryLinkManField *t = (CZQThostFtdcQryLinkManField *)calloc(1, sizeof(CZQThostFtdcQryLinkManField));
  memset(t,0,sizeof(CZQThostFtdcQryLinkManField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//期商签退响应
PyObject * new_CZQThostFtdcRspFutureSignOutField(CZQThostFtdcRspFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspFutureSignOutField", (char*)"sssiissisiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CZQThostFtdcRspFutureSignOutField * from_CZQThostFtdcRspFutureSignOutField(PyObject * p){
  CZQThostFtdcRspFutureSignOutField *t = (CZQThostFtdcRspFutureSignOutField *)calloc(1, sizeof(CZQThostFtdcRspFutureSignOutField));
  memset(t,0,sizeof(CZQThostFtdcRspFutureSignOutField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//转帐开户请求
PyObject * new_CZQThostFtdcReqOpenAccountField(CZQThostFtdcReqOpenAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqOpenAccountField", (char*)"csssscisssisssssisiccssssscsccssssccscscsss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankSecuAcc, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->Gender, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest, p->DeviceID);
}
CZQThostFtdcReqOpenAccountField * from_CZQThostFtdcReqOpenAccountField(PyObject * p){
  CZQThostFtdcReqOpenAccountField *t = (CZQThostFtdcReqOpenAccountField *)calloc(1, sizeof(CZQThostFtdcReqOpenAccountField));
  memset(t,0,sizeof(CZQThostFtdcReqOpenAccountField));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //电话号码
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //传真
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //国家代码
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //地址
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //性别
  //enum类型
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Male -> '1', 男
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //汇钞标志
  //enum类型
  //THOST_FTDC_CEC_Exchange -> '1', 汇
  //THOST_FTDC_CEC_Cash -> '2', 钞
  t->CashExchangeCode =   PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //手机
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //邮编
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //电子邮件
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));

  return t;
};

//登录信息
PyObject * new_CZQThostFtdcLoginInfoField(CZQThostFtdcLoginInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcLoginInfoField", (char*)"sssssssississss",
p->MacAddress, p->MaxOrderRef, p->UserProductInfo, p->InterfaceProductInfo, p->UserID, p->LoginDate, p->SystemName, p->SessionID, p->BrokerID, p->OneTimePassword, p->FrontID, p->Password, p->IPAddress, p->LoginTime, p->ProtocolInfo);
}
CZQThostFtdcLoginInfoField * from_CZQThostFtdcLoginInfoField(PyObject * p){
  CZQThostFtdcLoginInfoField *t = (CZQThostFtdcLoginInfoField *)calloc(1, sizeof(CZQThostFtdcLoginInfoField));
  memset(t,0,sizeof(CZQThostFtdcLoginInfoField));
  //Mac地址
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //最大报单引用
  strcpy(t->MaxOrderRef, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderRef")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //接口端产品信息
  strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //登录日期
  strcpy(t->LoginDate, PyString_AsString(PyObject_GetAttrString(p, "LoginDate")));
  //系统名称
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //动态密码
  strcpy(t->OneTimePassword, PyString_AsString(PyObject_GetAttrString(p, "OneTimePassword")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //IP地址
  strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));
  //登录时间
  strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
  //协议信息
  strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));

  return t;
};

//错误报单
PyObject * new_CZQThostFtdcErrOrderField(CZQThostFtdcErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcErrOrderField", (char*)"csssiciccidssicisssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Direction, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->ForceCloseReason, p->ErrorID, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
CZQThostFtdcErrOrderField * from_CZQThostFtdcErrOrderField(PyObject * p){
  CZQThostFtdcErrOrderField *t = (CZQThostFtdcErrOrderField *)calloc(1, sizeof(CZQThostFtdcErrOrderField));
  memset(t,0,sizeof(CZQThostFtdcErrOrderField));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_Touch -> '2', 止损
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  strcpy(t->LimitPrice, PyString_AsString(PyObject_GetAttrString(p, "LimitPrice")));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_InactiveBNetPassSvrCode -> 'J', 注销B股网络密码服务代码
  //THOST_FTDC_OPT_Exercise -> 'U', 权证行权
  //THOST_FTDC_OPT_InactiveANetPassSvrCode -> 'H', 注销A股网络密码服务代码
  //THOST_FTDC_OPT_Designated -> 'M', 指定登记
  //THOST_FTDC_OPT_ShortAccToHostAcc -> 'i', 证券公司融券专用账户过户到证券公司自营账户
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_TenderOffer -> 'P', 要约收购登记
  //THOST_FTDC_OPT_SubscribingShares -> 'N', 证券参与申购
  //THOST_FTDC_OPT_RedemingFunds -> 'W', 开放式基金赎回
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_RedeemETF -> 'e', ETF赎回
  //THOST_FTDC_OPT_Ballot -> 'R', 证券投票
  //THOST_FTDC_OPT_ShortAccToCreditAcc -> 'f', 证券公司融券专用账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_PurchasesETF -> 'd', ETF申购
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_SubscribingFunds -> 'X', 开放式基金认购
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_ActiveBNetPassSvrCode -> 'I', 激活B股网络密码服务代码
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_CreditAccToShortAcc -> 'g', 证券公司信用交易担保证券账户过户到证券公司融券专用账户
  //THOST_FTDC_OPT_DesignatedCancel -> 'L', 指定撤销
  //THOST_FTDC_OPT_ConvertibleBondsRepurchase -> 'T', 可转债回售登记
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_ActiveANetPassSvrCode -> 'G', 激活A股网络密码服务代码
  //THOST_FTDC_OPT_LOFConvert -> 'a', 开放式基金转换为其他基金
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_Split -> 'O', 证券参与配股
  //THOST_FTDC_OPT_LOFSetBonusType -> 'Z', 开放式基金设置分红方式
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_InvAccToCreditAcc -> 'h', 投资者普通证券账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_TenderOfferCancel -> 'Q', 要约收购撤销
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_PurchasingFunds -> 'V', 开放式基金申购
  //THOST_FTDC_OPT_ConvertibleBondsConvet -> 'S', 可转债转换登记
  //THOST_FTDC_OPT_LOFIssue -> 'Y', 开放式基金转托管转出
  //THOST_FTDC_OPT_DebentureStockOut -> 'c', 债券出库
  //THOST_FTDC_OPT_DebentureStockIn -> 'b', 债券入库
  //THOST_FTDC_OPT_Repurchase -> 'K', 回购注销
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //自动挂起标志
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //GTD日期
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//保证金监管系统经纪公司密钥
PyObject * new_CZQThostFtdcCFMMCBrokerKeyField(CZQThostFtdcCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcCFMMCBrokerKeyField", (char*)"isscsss",
p->KeyID, p->ParticipantID, p->CreateDate, p->KeyKind, p->BrokerID, p->CreateTime, p->CurrentKey);
}
CZQThostFtdcCFMMCBrokerKeyField * from_CZQThostFtdcCFMMCBrokerKeyField(PyObject * p){
  CZQThostFtdcCFMMCBrokerKeyField *t = (CZQThostFtdcCFMMCBrokerKeyField *)calloc(1, sizeof(CZQThostFtdcCFMMCBrokerKeyField));
  memset(t,0,sizeof(CZQThostFtdcCFMMCBrokerKeyField));
  //密钥编号
  t->KeyID =   PyInt_AsLong(PyObject_GetAttrString(p, "KeyID"));
  //经纪公司统一编码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //密钥生成日期
  strcpy(t->CreateDate, PyString_AsString(PyObject_GetAttrString(p, "CreateDate")));
  //动态密钥类型
  //enum类型
  //THOST_FTDC_CFMMCKK_MANUAL -> 'M', CFMMC手动更新
  //THOST_FTDC_CFMMCKK_REQUEST -> 'R', 主动请求更新
  //THOST_FTDC_CFMMCKK_AUTO -> 'A', CFMMC自动更新
  t->KeyKind =   PyString_AsString(PyObject_GetAttrString(p, "KeyKind"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //密钥生成时间
  strcpy(t->CreateTime, PyString_AsString(PyObject_GetAttrString(p, "CreateTime")));
  //动态密钥
  strcpy(t->CurrentKey, PyString_AsString(PyObject_GetAttrString(p, "CurrentKey")));

  return t;
};

//用户事件通知
PyObject * new_CZQThostFtdcTradingNoticeField(CZQThostFtdcTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradingNoticeField", (char*)"hisssssc",
p->SequenceSeries, p->SequenceNo, p->UserID, p->FieldContent, p->InvestorID, p->BrokerID, p->SendTime, p->InvestorRange);
}
CZQThostFtdcTradingNoticeField * from_CZQThostFtdcTradingNoticeField(PyObject * p){
  CZQThostFtdcTradingNoticeField *t = (CZQThostFtdcTradingNoticeField *)calloc(1, sizeof(CZQThostFtdcTradingNoticeField));
  memset(t,0,sizeof(CZQThostFtdcTradingNoticeField));
  //序列系列号
  t->SequenceSeries =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));
  //序列号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //消息正文
  strcpy(t->FieldContent, PyString_AsString(PyObject_GetAttrString(p, "FieldContent")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //发送时间
  strcpy(t->SendTime, PyString_AsString(PyObject_GetAttrString(p, "SendTime")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];

  return t;
};

//银行资金转期货请求响应
PyObject * new_CZQThostFtdcTransferBankToFutureRspField(CZQThostFtdcTransferBankToFutureRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferBankToFutureRspField", (char*)"sssdsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->RetInfo, p->CustFee);
}
CZQThostFtdcTransferBankToFutureRspField * from_CZQThostFtdcTransferBankToFutureRspField(PyObject * p){
  CZQThostFtdcTransferBankToFutureRspField *t = (CZQThostFtdcTransferBankToFutureRspField *)calloc(1, sizeof(CZQThostFtdcTransferBankToFutureRspField));
  memset(t,0,sizeof(CZQThostFtdcTransferBankToFutureRspField));
  //资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //响应代码
  strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
  //币种
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //转帐金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //响应信息
  strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
  //应收客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//查询合约状态
PyObject * new_CZQThostFtdcQryInstrumentStatusField(CZQThostFtdcQryInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInstrumentStatusField", (char*)"ss",
p->ExchangeID, p->ExchangeInstID);
}
CZQThostFtdcQryInstrumentStatusField * from_CZQThostFtdcQryInstrumentStatusField(PyObject * p){
  CZQThostFtdcQryInstrumentStatusField *t = (CZQThostFtdcQryInstrumentStatusField *)calloc(1, sizeof(CZQThostFtdcQryInstrumentStatusField));
  memset(t,0,sizeof(CZQThostFtdcQryInstrumentStatusField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));

  return t;
};

//查询投资者持仓
PyObject * new_CZQThostFtdcQryInvestorPositionField(CZQThostFtdcQryInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInvestorPositionField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryInvestorPositionField * from_CZQThostFtdcQryInvestorPositionField(PyObject * p){
  CZQThostFtdcQryInvestorPositionField *t = (CZQThostFtdcQryInvestorPositionField *)calloc(1, sizeof(CZQThostFtdcQryInvestorPositionField));
  memset(t,0,sizeof(CZQThostFtdcQryInvestorPositionField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询资金账户
PyObject * new_CZQThostFtdcQryTradingAccountField(CZQThostFtdcQryTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTradingAccountField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryTradingAccountField * from_CZQThostFtdcQryTradingAccountField(PyObject * p){
  CZQThostFtdcQryTradingAccountField *t = (CZQThostFtdcQryTradingAccountField *)calloc(1, sizeof(CZQThostFtdcQryTradingAccountField));
  memset(t,0,sizeof(CZQThostFtdcQryTradingAccountField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//经纪公司同步
PyObject * new_CZQThostFtdcBrokerSyncField(CZQThostFtdcBrokerSyncField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerSyncField", (char*)"s",
p->BrokerID);
}
CZQThostFtdcBrokerSyncField * from_CZQThostFtdcBrokerSyncField(PyObject * p){
  CZQThostFtdcBrokerSyncField *t = (CZQThostFtdcBrokerSyncField *)calloc(1, sizeof(CZQThostFtdcBrokerSyncField));
  memset(t,0,sizeof(CZQThostFtdcBrokerSyncField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询经纪公司资金
PyObject * new_CZQThostFtdcQueryBrokerDepositField(CZQThostFtdcQueryBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQueryBrokerDepositField", (char*)"ss",
p->ExchangeID, p->BrokerID);
}
CZQThostFtdcQueryBrokerDepositField * from_CZQThostFtdcQueryBrokerDepositField(PyObject * p){
  CZQThostFtdcQueryBrokerDepositField *t = (CZQThostFtdcQueryBrokerDepositField *)calloc(1, sizeof(CZQThostFtdcQueryBrokerDepositField));
  memset(t,0,sizeof(CZQThostFtdcQueryBrokerDepositField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//交易所保证金率
PyObject * new_CZQThostFtdcExchangeMarginRateField(CZQThostFtdcExchangeMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeMarginRateField", (char*)"sddcsdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->HedgeFlag, p->BrokerID, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CZQThostFtdcExchangeMarginRateField * from_CZQThostFtdcExchangeMarginRateField(PyObject * p){
  CZQThostFtdcExchangeMarginRateField *t = (CZQThostFtdcExchangeMarginRateField *)calloc(1, sizeof(CZQThostFtdcExchangeMarginRateField));
  memset(t,0,sizeof(CZQThostFtdcExchangeMarginRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//投资者结算结果确认信息
PyObject * new_CZQThostFtdcSettlementInfoConfirmField(CZQThostFtdcSettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSettlementInfoConfirmField", (char*)"ssss",
p->ConfirmTime, p->InvestorID, p->BrokerID, p->ConfirmDate);
}
CZQThostFtdcSettlementInfoConfirmField * from_CZQThostFtdcSettlementInfoConfirmField(PyObject * p){
  CZQThostFtdcSettlementInfoConfirmField *t = (CZQThostFtdcSettlementInfoConfirmField *)calloc(1, sizeof(CZQThostFtdcSettlementInfoConfirmField));
  memset(t,0,sizeof(CZQThostFtdcSettlementInfoConfirmField));
  //确认时间
  strcpy(t->ConfirmTime, PyString_AsString(PyObject_GetAttrString(p, "ConfirmTime")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //确认日期
  strcpy(t->ConfirmDate, PyString_AsString(PyObject_GetAttrString(p, "ConfirmDate")));

  return t;
};

//交易所交易员
PyObject * new_CZQThostFtdcTraderField(CZQThostFtdcTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTraderField", (char*)"sssssis",
p->ExchangeID, p->ParticipantID, p->BranchID, p->TraderID, p->BrokerID, p->InstallCount, p->Password);
}
CZQThostFtdcTraderField * from_CZQThostFtdcTraderField(PyObject * p){
  CZQThostFtdcTraderField *t = (CZQThostFtdcTraderField *)calloc(1, sizeof(CZQThostFtdcTraderField));
  memset(t,0,sizeof(CZQThostFtdcTraderField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //安装数量
  t->InstallCount =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallCount"));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));

  return t;
};

//查询经纪公司用户权限
PyObject * new_CZQThostFtdcQryBrokerUserFunctionField(CZQThostFtdcQryBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryBrokerUserFunctionField", (char*)"ss",
p->UserID, p->BrokerID);
}
CZQThostFtdcQryBrokerUserFunctionField * from_CZQThostFtdcQryBrokerUserFunctionField(PyObject * p){
  CZQThostFtdcQryBrokerUserFunctionField *t = (CZQThostFtdcQryBrokerUserFunctionField *)calloc(1, sizeof(CZQThostFtdcQryBrokerUserFunctionField));
  memset(t,0,sizeof(CZQThostFtdcQryBrokerUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//浮动盈亏算法
PyObject * new_CZQThostFtdcPositionProfitAlgorithmField(CZQThostFtdcPositionProfitAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcPositionProfitAlgorithmField", (char*)"sscs",
p->Memo, p->BrokerID, p->Algorithm, p->AccountID);
}
CZQThostFtdcPositionProfitAlgorithmField * from_CZQThostFtdcPositionProfitAlgorithmField(PyObject * p){
  CZQThostFtdcPositionProfitAlgorithmField *t = (CZQThostFtdcPositionProfitAlgorithmField *)calloc(1, sizeof(CZQThostFtdcPositionProfitAlgorithmField));
  memset(t,0,sizeof(CZQThostFtdcPositionProfitAlgorithmField));
  //备注
  strcpy(t->Memo, PyString_AsString(PyObject_GetAttrString(p, "Memo")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //盈亏算法
  //enum类型
  //THOST_FTDC_AG_OnlyLost -> '2', 浮盈不计，浮亏计
  //THOST_FTDC_AG_None -> '4', 浮盈浮亏都不计算
  //THOST_FTDC_AG_All -> '1', 浮盈浮亏都计算
  //THOST_FTDC_AG_OnlyGain -> '3', 浮盈计，浮亏不计
  t->Algorithm =   PyString_AsString(PyObject_GetAttrString(p, "Algorithm"))[0];
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//行情申卖四、五属性
PyObject * new_CZQThostFtdcMarketDataAsk45Field(CZQThostFtdcMarketDataAsk45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataAsk45Field", (char*)"ddii",
p->AskPrice5, p->AskPrice4, p->AskVolume5, p->AskVolume4);
}
CZQThostFtdcMarketDataAsk45Field * from_CZQThostFtdcMarketDataAsk45Field(PyObject * p){
  CZQThostFtdcMarketDataAsk45Field *t = (CZQThostFtdcMarketDataAsk45Field *)calloc(1, sizeof(CZQThostFtdcMarketDataAsk45Field));
  memset(t,0,sizeof(CZQThostFtdcMarketDataAsk45Field));
  //申卖价五
  t->AskPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));
  //申卖价四
  t->AskPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
  //申卖量五
  t->AskVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume5"));
  //申卖量四
  t->AskVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume4"));

  return t;
};

//期货资金转银行请求，TradeCode=202002
PyObject * new_CZQThostFtdcTransferFutureToBankReqField(CZQThostFtdcTransferFutureToBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferFutureToBankReqField", (char*)"sssdcd",
p->FutureAccount, p->FutureAccPwd, p->CurrencyCode, p->TradeAmt, p->FuturePwdFlag, p->CustFee);
}
CZQThostFtdcTransferFutureToBankReqField * from_CZQThostFtdcTransferFutureToBankReqField(PyObject * p){
  CZQThostFtdcTransferFutureToBankReqField *t = (CZQThostFtdcTransferFutureToBankReqField *)calloc(1, sizeof(CZQThostFtdcTransferFutureToBankReqField));
  memset(t,0,sizeof(CZQThostFtdcTransferFutureToBankReqField));
  //期货资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //密码
  strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));
  //币种：RMB-人民币 USD-美圆 HKD-港元
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //转账金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //密码标志
  //enum类型
  //THOST_FTDC_FPWD_Check -> '1', 核对
  //THOST_FTDC_FPWD_UnCheck -> '0', 不核对
  t->FuturePwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
  //客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//合约状态
PyObject * new_CZQThostFtdcInstrumentStatusField(CZQThostFtdcInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInstrumentStatusField", (char*)"ssssiccs",
p->InstrumentID, p->ExchangeID, p->EnterTime, p->SettlementGroupID, p->TradingSegmentSN, p->EnterReason, p->InstrumentStatus, p->ExchangeInstID);
}
CZQThostFtdcInstrumentStatusField * from_CZQThostFtdcInstrumentStatusField(PyObject * p){
  CZQThostFtdcInstrumentStatusField *t = (CZQThostFtdcInstrumentStatusField *)calloc(1, sizeof(CZQThostFtdcInstrumentStatusField));
  memset(t,0,sizeof(CZQThostFtdcInstrumentStatusField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //进入本状态时间
  strcpy(t->EnterTime, PyString_AsString(PyObject_GetAttrString(p, "EnterTime")));
  //结算组代码
  strcpy(t->SettlementGroupID, PyString_AsString(PyObject_GetAttrString(p, "SettlementGroupID")));
  //交易阶段编号
  t->TradingSegmentSN =   PyInt_AsLong(PyObject_GetAttrString(p, "TradingSegmentSN"));
  //进入本状态原因
  //enum类型
  //THOST_FTDC_IER_Fuse -> '3', 熔断
  //THOST_FTDC_IER_Automatic -> '1', 自动切换
  //THOST_FTDC_IER_Manual -> '2', 手动切换
  t->EnterReason =   PyString_AsString(PyObject_GetAttrString(p, "EnterReason"))[0];
  //合约交易状态
  //enum类型
  //THOST_FTDC_IS_Continous -> '2', 连续交易
  //THOST_FTDC_IS_AuctionMatch -> '5', 集合竞价撮合
  //THOST_FTDC_IS_BeforeTrading -> '0', 开盘前
  //THOST_FTDC_IS_Closed -> '6', 收盘
  //THOST_FTDC_IS_AuctionOrdering -> '3', 集合竞价报单
  //THOST_FTDC_IS_AuctionBalance -> '4', 集合竞价价格平衡
  //THOST_FTDC_IS_NoTrading -> '1', 非交易
  t->InstrumentStatus =   PyString_AsString(PyObject_GetAttrString(p, "InstrumentStatus"))[0];
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));

  return t;
};

//查询管理用户
PyObject * new_CZQThostFtdcQrySuperUserField(CZQThostFtdcQrySuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQrySuperUserField", (char*)"s",
p->UserID);
}
CZQThostFtdcQrySuperUserField * from_CZQThostFtdcQrySuperUserField(PyObject * p){
  CZQThostFtdcQrySuperUserField *t = (CZQThostFtdcQrySuperUserField *)calloc(1, sizeof(CZQThostFtdcQrySuperUserField));
  memset(t,0,sizeof(CZQThostFtdcQrySuperUserField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//行情申买四、五属性
PyObject * new_CZQThostFtdcMarketDataBid45Field(CZQThostFtdcMarketDataBid45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataBid45Field", (char*)"ddii",
p->BidPrice5, p->BidPrice4, p->BidVolume5, p->BidVolume4);
}
CZQThostFtdcMarketDataBid45Field * from_CZQThostFtdcMarketDataBid45Field(PyObject * p){
  CZQThostFtdcMarketDataBid45Field *t = (CZQThostFtdcMarketDataBid45Field *)calloc(1, sizeof(CZQThostFtdcMarketDataBid45Field));
  memset(t,0,sizeof(CZQThostFtdcMarketDataBid45Field));
  //申买价五
  t->BidPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
  //申买价四
  t->BidPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
  //申买量五
  t->BidVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume5"));
  //申买量四
  t->BidVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume4"));

  return t;
};

//经纪公司用户功能权限
PyObject * new_CZQThostFtdcBrokerUserFunctionField(CZQThostFtdcBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerUserFunctionField", (char*)"ssc",
p->UserID, p->BrokerID, p->BrokerFunctionCode);
}
CZQThostFtdcBrokerUserFunctionField * from_CZQThostFtdcBrokerUserFunctionField(PyObject * p){
  CZQThostFtdcBrokerUserFunctionField *t = (CZQThostFtdcBrokerUserFunctionField *)calloc(1, sizeof(CZQThostFtdcBrokerUserFunctionField));
  memset(t,0,sizeof(CZQThostFtdcBrokerUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //经纪公司功能代码
  //enum类型
  //THOST_FTDC_BFC_TradeQry -> 'c', 交易查询：如查成交，委托
  //THOST_FTDC_BFC_QueryFund -> 'k', 资金查询
  //THOST_FTDC_BFC_RiskPredict -> 'y', 风险预算
  //THOST_FTDC_BFC_log -> 'a', 系统功能：登入/登出/修改密码等
  //THOST_FTDC_BFC_BachSyncBrokerData -> '4', 批量同步经纪公司数据
  //THOST_FTDC_BFC_QueryTrade -> 'm', 成交查询
  //THOST_FTDC_BFC_OrderAction -> '6', 报单操作
  //THOST_FTDC_BFC_SyncBrokerData -> '3', 同步经纪公司数据
  //THOST_FTDC_BFC_RemainCalc -> 'w', 权益反算
  //THOST_FTDC_BFC_UserPasswordUpdate -> '2', 变更用户口令
  //THOST_FTDC_BFC_RiskTargetSetup -> 'A', 风控指标设置
  //THOST_FTDC_BFC_QueryRiskNotify -> 'q', 风险通知查询
  //THOST_FTDC_BFC_Trade -> 'd', 交易功能：报单，撤单
  //THOST_FTDC_BFC_QueryMarketData -> 'o', 行情查询
  //THOST_FTDC_BFC_PressTest -> 'v', 压力测试
  //THOST_FTDC_BFC_QueryInvestor -> 's', 投资者信息查询
  //THOST_FTDC_BFC_AllQuery -> '7', 全部查询
  //THOST_FTDC_BFC_QueryOrder -> 'l', 报单查询
  //THOST_FTDC_BFC_QueryUserEvent -> 'p', 用户事件查询
  //THOST_FTDC_BFC_OrderInsert -> '5', 报单插入
  //THOST_FTDC_BFC_BrokerDeposit -> 'j', 察看经纪公司资金权限
  //THOST_FTDC_BFC_Virement -> 'e', 银期转账
  //THOST_FTDC_BFC_BaseQry -> 'b', 基本查询：查询基础数据，如合约，交易所等常量
  //THOST_FTDC_BFC_ForceClose -> 'u', 强平
  //THOST_FTDC_BFC_RiskNotice -> 'i', 风控通知发送
  //THOST_FTDC_BFC_NetPositionInd -> 'x', 净持仓保证金指标
  //THOST_FTDC_BFC_QueryFundChange -> 'r', 出入金查询
  //THOST_FTDC_BFC_QueryPosition -> 'n', 持仓查询
  //THOST_FTDC_BFC_SyncOTP -> 'E', 同步动态令牌
  //THOST_FTDC_BFC_QueryTradingCode -> 't', 交易编码查询
  //THOST_FTDC_BFC_DataExport -> 'z', 数据导出
  //THOST_FTDC_BFC_ForceUserLogout -> '1', 强制用户登出
  //THOST_FTDC_BFC_Risk -> 'f', 风险监控
  //THOST_FTDC_BFC_Session -> 'g', 查询/管理：查询会话，踢人等
  //THOST_FTDC_BFC_RiskNoticeCtl -> 'h', 风控通知控制
  t->BrokerFunctionCode =   PyString_AsString(PyObject_GetAttrString(p, "BrokerFunctionCode"))[0];

  return t;
};

//强制交易员退出
PyObject * new_CZQThostFtdcForceUserLogoutField(CZQThostFtdcForceUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcForceUserLogoutField", (char*)"ss",
p->UserID, p->BrokerID);
}
CZQThostFtdcForceUserLogoutField * from_CZQThostFtdcForceUserLogoutField(PyObject * p){
  CZQThostFtdcForceUserLogoutField *t = (CZQThostFtdcForceUserLogoutField *)calloc(1, sizeof(CZQThostFtdcForceUserLogoutField));
  memset(t,0,sizeof(CZQThostFtdcForceUserLogoutField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询交易员报盘机
PyObject * new_CZQThostFtdcQryTraderOfferField(CZQThostFtdcQryTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTraderOfferField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
CZQThostFtdcQryTraderOfferField * from_CZQThostFtdcQryTraderOfferField(PyObject * p){
  CZQThostFtdcQryTraderOfferField *t = (CZQThostFtdcQryTraderOfferField *)calloc(1, sizeof(CZQThostFtdcQryTraderOfferField));
  memset(t,0,sizeof(CZQThostFtdcQryTraderOfferField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//查询保证金监管系统经纪公司密钥
PyObject * new_CZQThostFtdcQryCFMMCBrokerKeyField(CZQThostFtdcQryCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryCFMMCBrokerKeyField", (char*)"s",
p->BrokerID);
}
CZQThostFtdcQryCFMMCBrokerKeyField * from_CZQThostFtdcQryCFMMCBrokerKeyField(PyObject * p){
  CZQThostFtdcQryCFMMCBrokerKeyField *t = (CZQThostFtdcQryCFMMCBrokerKeyField *)calloc(1, sizeof(CZQThostFtdcQryCFMMCBrokerKeyField));
  memset(t,0,sizeof(CZQThostFtdcQryCFMMCBrokerKeyField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询交易编码
PyObject * new_CZQThostFtdcQryInstrumentMarginRateField(CZQThostFtdcQryInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInstrumentMarginRateField", (char*)"ssssc",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID, p->HedgeFlag);
}
CZQThostFtdcQryInstrumentMarginRateField * from_CZQThostFtdcQryInstrumentMarginRateField(PyObject * p){
  CZQThostFtdcQryInstrumentMarginRateField *t = (CZQThostFtdcQryInstrumentMarginRateField *)calloc(1, sizeof(CZQThostFtdcQryInstrumentMarginRateField));
  memset(t,0,sizeof(CZQThostFtdcQryInstrumentMarginRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

  return t;
};

//交易核心向银期报盘发出密钥同步响应
PyObject * new_CZQThostFtdcRspSyncKeyField(CZQThostFtdcRspSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspSyncKeyField", (char*)"sssiissisiisssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Message);
}
CZQThostFtdcRspSyncKeyField * from_CZQThostFtdcRspSyncKeyField(PyObject * p){
  CZQThostFtdcRspSyncKeyField *t = (CZQThostFtdcRspSyncKeyField *)calloc(1, sizeof(CZQThostFtdcRspSyncKeyField));
  memset(t,0,sizeof(CZQThostFtdcRspSyncKeyField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //交易核心给银期报盘的消息
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));

  return t;
};

//验证期货资金密码
PyObject * new_CZQThostFtdcVerifyFuturePasswordField(CZQThostFtdcVerifyFuturePasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcVerifyFuturePasswordField", (char*)"sssscsssssiissisis",
p->BankAccount, p->Password, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BankSerial, p->BankBranchID, p->BankPassWord, p->TradingDay, p->SessionID, p->InstallID, p->BrokerID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->AccountID);
}
CZQThostFtdcVerifyFuturePasswordField * from_CZQThostFtdcVerifyFuturePasswordField(PyObject * p){
  CZQThostFtdcVerifyFuturePasswordField *t = (CZQThostFtdcVerifyFuturePasswordField *)calloc(1, sizeof(CZQThostFtdcVerifyFuturePasswordField));
  memset(t,0,sizeof(CZQThostFtdcVerifyFuturePasswordField));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//正在同步中的合约保证金率
PyObject * new_CZQThostFtdcSyncingInstrumentMarginRateField(CZQThostFtdcSyncingInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingInstrumentMarginRateField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CZQThostFtdcSyncingInstrumentMarginRateField * from_CZQThostFtdcSyncingInstrumentMarginRateField(PyObject * p){
  CZQThostFtdcSyncingInstrumentMarginRateField *t = (CZQThostFtdcSyncingInstrumentMarginRateField *)calloc(1, sizeof(CZQThostFtdcSyncingInstrumentMarginRateField));
  memset(t,0,sizeof(CZQThostFtdcSyncingInstrumentMarginRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //是否相对交易所收取
  t->IsRelative =   PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//输入预埋单操作
PyObject * new_CZQThostFtdcParkedOrderActionField(CZQThostFtdcParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcParkedOrderActionField", (char*)"scsicssdssiisicsii",
p->InstrumentID, p->Status, p->ExchangeID, p->OrderActionRef, p->UserType, p->ErrorMsg, p->UserID, p->LimitPrice, p->OrderRef, p->InvestorID, p->SessionID, p->VolumeChange, p->BrokerID, p->RequestID, p->ActionFlag, p->ParkedOrderActionID, p->FrontID, p->ErrorID);
}
CZQThostFtdcParkedOrderActionField * from_CZQThostFtdcParkedOrderActionField(PyObject * p){
  CZQThostFtdcParkedOrderActionField *t = (CZQThostFtdcParkedOrderActionField *)calloc(1, sizeof(CZQThostFtdcParkedOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcParkedOrderActionField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //预埋撤单状态
  //enum类型
  //THOST_FTDC_PAOS_Send -> '2', 已发送
  //THOST_FTDC_PAOS_Deleted -> '3', 已删除
  //THOST_FTDC_PAOS_NotSend -> '1', 未发送
  t->Status =   PyString_AsString(PyObject_GetAttrString(p, "Status"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //报单操作引用
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //用户类型
  //enum类型
  //THOST_FTDC_UT_Investor -> '0', 投资者
  //THOST_FTDC_UT_SuperUser -> '2', 管理员
  //THOST_FTDC_UT_Operator -> '1', 操作员
  t->UserType =   PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //数量变化
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //预埋撤单单编号
  strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//用户动态令牌参数
PyObject * new_CZQThostFtdcBrokerUserOTPParamField(CZQThostFtdcBrokerUserOTPParamField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerUserOTPParamField", (char*)"iisssssc",
p->LastDrift, p->LastSuccess, p->SerialNumber, p->UserID, p->AuthKey, p->BrokerID, p->OTPVendorsID, p->OTPType);
}
CZQThostFtdcBrokerUserOTPParamField * from_CZQThostFtdcBrokerUserOTPParamField(PyObject * p){
  CZQThostFtdcBrokerUserOTPParamField *t = (CZQThostFtdcBrokerUserOTPParamField *)calloc(1, sizeof(CZQThostFtdcBrokerUserOTPParamField));
  memset(t,0,sizeof(CZQThostFtdcBrokerUserOTPParamField));
  //漂移值
  t->LastDrift =   PyInt_AsLong(PyObject_GetAttrString(p, "LastDrift"));
  //成功值
  t->LastSuccess =   PyInt_AsLong(PyObject_GetAttrString(p, "LastSuccess"));
  //动态令牌序列号
  strcpy(t->SerialNumber, PyString_AsString(PyObject_GetAttrString(p, "SerialNumber")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //令牌密钥
  strcpy(t->AuthKey, PyString_AsString(PyObject_GetAttrString(p, "AuthKey")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //动态令牌提供商
  strcpy(t->OTPVendorsID, PyString_AsString(PyObject_GetAttrString(p, "OTPVendorsID")));
  //动态令牌类型
  //enum类型
  //THOST_FTDC_OTP_NONE -> '0', 无动态令牌
  //THOST_FTDC_OTP_TOTP -> '1', 时间令牌
  t->OTPType =   PyString_AsString(PyObject_GetAttrString(p, "OTPType"))[0];

  return t;
};

//查询交易编码
PyObject * new_CZQThostFtdcQryInstrumentCommissionRateField(CZQThostFtdcQryInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInstrumentCommissionRateField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
CZQThostFtdcQryInstrumentCommissionRateField * from_CZQThostFtdcQryInstrumentCommissionRateField(PyObject * p){
  CZQThostFtdcQryInstrumentCommissionRateField *t = (CZQThostFtdcQryInstrumentCommissionRateField *)calloc(1, sizeof(CZQThostFtdcQryInstrumentCommissionRateField));
  memset(t,0,sizeof(CZQThostFtdcQryInstrumentCommissionRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//交易所行情报盘机
PyObject * new_CZQThostFtdcMDTraderOfferField(CZQThostFtdcMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMDTraderOfferField", (char*)"sssisssssscsssssss",
p->BranchID, p->StartDate, p->ExchangeID, p->InstallID, p->LastReportDate, p->ParticipantID, p->OrderLocalID, p->LastReportTime, p->TraderID, p->ConnectTime, p->TraderConnectStatus, p->TradingDay, p->ConnectRequestTime, p->StartTime, p->ConnectRequestDate, p->BrokerID, p->Password, p->ConnectDate);
}
CZQThostFtdcMDTraderOfferField * from_CZQThostFtdcMDTraderOfferField(PyObject * p){
  CZQThostFtdcMDTraderOfferField *t = (CZQThostFtdcMDTraderOfferField *)calloc(1, sizeof(CZQThostFtdcMDTraderOfferField));
  memset(t,0,sizeof(CZQThostFtdcMDTraderOfferField));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //启动日期
  strcpy(t->StartDate, PyString_AsString(PyObject_GetAttrString(p, "StartDate")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //上次报告日期
  strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //上次报告时间
  strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //完成连接时间
  strcpy(t->ConnectTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectTime")));
  //交易所交易员连接状态
  //enum类型
  //THOST_FTDC_TCS_NotConnected -> '1', 没有任何连接
  //THOST_FTDC_TCS_SubPrivateFlow -> '4', 订阅私有流
  //THOST_FTDC_TCS_QryInstrumentSent -> '3', 已经发出合约查询请求
  //THOST_FTDC_TCS_Connected -> '2', 已经连接
  t->TraderConnectStatus =   PyString_AsString(PyObject_GetAttrString(p, "TraderConnectStatus"))[0];
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //发出连接请求的时间
  strcpy(t->ConnectRequestTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestTime")));
  //启动时间
  strcpy(t->StartTime, PyString_AsString(PyObject_GetAttrString(p, "StartTime")));
  //发出连接请求的日期
  strcpy(t->ConnectRequestDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestDate")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //完成连接日期
  strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));

  return t;
};

//根据价格查询最大报单数量
PyObject * new_CZQThostFtdcQueryMaxOrderVolumeWithPriceField(CZQThostFtdcQueryMaxOrderVolumeWithPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQueryMaxOrderVolumeWithPriceField", (char*)"sccdcssi",
p->InstrumentID, p->Direction, p->OffsetFlag, p->Price, p->HedgeFlag, p->InvestorID, p->BrokerID, p->MaxVolume);
}
CZQThostFtdcQueryMaxOrderVolumeWithPriceField * from_CZQThostFtdcQueryMaxOrderVolumeWithPriceField(PyObject * p){
  CZQThostFtdcQueryMaxOrderVolumeWithPriceField *t = (CZQThostFtdcQueryMaxOrderVolumeWithPriceField *)calloc(1, sizeof(CZQThostFtdcQueryMaxOrderVolumeWithPriceField));
  memset(t,0,sizeof(CZQThostFtdcQueryMaxOrderVolumeWithPriceField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //开平标志
  //enum类型
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
  //报单价格
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //最大允许报单数量
  t->MaxVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxVolume"));

  return t;
};

//通讯阶段
PyObject * new_CZQThostFtdcCommPhaseField(CZQThostFtdcCommPhaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcCommPhaseField", (char*)"sh",
p->TradingDay, p->CommPhaseNo);
}
CZQThostFtdcCommPhaseField * from_CZQThostFtdcCommPhaseField(PyObject * p){
  CZQThostFtdcCommPhaseField *t = (CZQThostFtdcCommPhaseField *)calloc(1, sizeof(CZQThostFtdcCommPhaseField));
  memset(t,0,sizeof(CZQThostFtdcCommPhaseField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //通讯时段编号
  t->CommPhaseNo =   PyInt_AsLong(PyObject_GetAttrString(p, "CommPhaseNo"));

  return t;
};

//管理用户功能权限
PyObject * new_CZQThostFtdcSuperUserFunctionField(CZQThostFtdcSuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSuperUserFunctionField", (char*)"cs",
p->FunctionCode, p->UserID);
}
CZQThostFtdcSuperUserFunctionField * from_CZQThostFtdcSuperUserFunctionField(PyObject * p){
  CZQThostFtdcSuperUserFunctionField *t = (CZQThostFtdcSuperUserFunctionField *)calloc(1, sizeof(CZQThostFtdcSuperUserFunctionField));
  memset(t,0,sizeof(CZQThostFtdcSuperUserFunctionField));
  //功能代码
  //enum类型
  //THOST_FTDC_FC_OrderAction -> '7', 报单操作
  //THOST_FTDC_FC_OrderInsert -> '6', 报单插入
  //THOST_FTDC_FC_ParkedOrderAction -> 'D', 报单操作
  //THOST_FTDC_FC_BrokerPasswordUpdate -> '4', 变更经纪公司口令
  //THOST_FTDC_FC_SyncBrokerData -> '9', 同步经纪公司数据
  //THOST_FTDC_FC_DataAsync -> '1', 数据异步化
  //THOST_FTDC_FC_ParkedOrderInsert -> 'C', 报单插入
  //THOST_FTDC_FC_BachSyncBrokerData -> 'A', 批量同步经纪公司数据
  //THOST_FTDC_FC_ForceUserLogout -> '2', 强制用户登出
  //THOST_FTDC_FC_InvestorPasswordUpdate -> '5', 变更投资者口令
  //THOST_FTDC_FC_SyncSystemData -> '8', 同步系统数据
  //THOST_FTDC_FC_SuperQuery -> 'B', 超级查询
  //THOST_FTDC_FC_UserPasswordUpdate -> '3', 变更管理用户口令
  //THOST_FTDC_FC_SyncOTP -> 'E', 同步动态令牌
  t->FunctionCode =   PyString_AsString(PyObject_GetAttrString(p, "FunctionCode"))[0];
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//期货资金转银行请求响应
PyObject * new_CZQThostFtdcTransferFutureToBankRspField(CZQThostFtdcTransferFutureToBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferFutureToBankRspField", (char*)"sssdsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->RetInfo, p->CustFee);
}
CZQThostFtdcTransferFutureToBankRspField * from_CZQThostFtdcTransferFutureToBankRspField(PyObject * p){
  CZQThostFtdcTransferFutureToBankRspField *t = (CZQThostFtdcTransferFutureToBankRspField *)calloc(1, sizeof(CZQThostFtdcTransferFutureToBankRspField));
  memset(t,0,sizeof(CZQThostFtdcTransferFutureToBankRspField));
  //资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //响应代码
  strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
  //币种
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //转帐金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //响应信息
  strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
  //应收客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//市场行情
PyObject * new_CZQThostFtdcMarketDataField(CZQThostFtdcMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataField", (char*)"dddddsididsdssddddddsd",
p->HighestPrice, p->LowerLimitPrice, p->OpenPrice, p->PreClosePrice, p->PreSettlementPrice, p->UpdateTime, p->UpdateMillisec, p->PreOpenInterest, p->Volume, p->UpperLimitPrice, p->InstrumentID, p->ClosePrice, p->ExchangeID, p->TradingDay, p->PreDelta, p->OpenInterest, p->CurrDelta, p->Turnover, p->LastPrice, p->SettlementPrice, p->ExchangeInstID, p->LowestPrice);
}
CZQThostFtdcMarketDataField * from_CZQThostFtdcMarketDataField(PyObject * p){
  CZQThostFtdcMarketDataField *t = (CZQThostFtdcMarketDataField *)calloc(1, sizeof(CZQThostFtdcMarketDataField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataField));
  //最高价
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //跌停板价
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //今开盘
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //昨收盘
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //最后修改时间
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //最后修改毫秒
  t->UpdateMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
  //昨持仓量
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //涨停板价
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //今收盘
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //昨虚实度
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //持仓量
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //今虚实度
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
  //成交金额
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
  //最新价
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //最低价
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));

  return t;
};

//正在同步中的交易账号
PyObject * new_CZQThostFtdcSyncingTradingAccountField(CZQThostFtdcSyncingTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingTradingAccountField", (char*)"ddddddddddddsddddddddddddidssdddddddddddddddd",
p->FrozenTransferFee, p->Mortgage, p->ExchangeDeliveryMargin, p->FrozenMargin, p->WithdrawQuota, p->PositionProfit, p->BondRepurchaseValue, p->TransferFee, p->Commission, p->Interest, p->ShortSellingAmount, p->CashIn, p->AccountID, p->Available, p->LowLimitRatio, p->PreCredit, p->PreMortgage, p->CreditRatio, p->MarginTradingAvail, p->CreditAmount, p->InterestBase, p->ExchangeMargin, p->ConversionAmount, p->SSStockValue, p->PreMargin, p->SettlementID, p->DeliveryMargin, p->TradingDay, p->BrokerID, p->FrozenCash, p->Withdraw, p->StampTax, p->Balance, p->FrozenStampTax, p->Reserve, p->PreDeposit, p->ShortSellingAvail, p->Credit, p->PreBalance, p->CurrMargin, p->FrozenCommission, p->CloseProfit, p->StockValue, p->MarginTradingAmount, p->Deposit);
}
CZQThostFtdcSyncingTradingAccountField * from_CZQThostFtdcSyncingTradingAccountField(PyObject * p){
  CZQThostFtdcSyncingTradingAccountField *t = (CZQThostFtdcSyncingTradingAccountField *)calloc(1, sizeof(CZQThostFtdcSyncingTradingAccountField));
  memset(t,0,sizeof(CZQThostFtdcSyncingTradingAccountField));
  //冻结的过户费
  t->FrozenTransferFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenTransferFee"));
  //质押金额
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //交易所交割保证金
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //可取资金
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //融资持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //国债回购占用资金
  t->BondRepurchaseValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BondRepurchaseValue"));
  //过户费
  t->TransferFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFee"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //利息收入
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //融券卖出金额
  t->ShortSellingAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellingAmount"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //现金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //最低维持担保比例
  t->LowLimitRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowLimitRatio"));
  //上次信用额度
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //上次质押金额
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //维持担保比例
  t->CreditRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CreditRatio"));
  //融资买入可用金额
  t->MarginTradingAvail =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradingAvail"));
  //授信额度
  t->CreditAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CreditAmount"));
  //利息基数
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //折算金额
  t->ConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConversionAmount"));
  //融券总市值
  t->SSStockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SSStockValue"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //投资者交割保证金
  t->DeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "DeliveryMargin"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //出金金额
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //印花税
  t->StampTax =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTax"));
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //冻结的印花税
  t->FrozenStampTax =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenStampTax"));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //上次存款额
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //融券卖出可用金额
  t->ShortSellingAvail =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellingAvail"));
  //保证金可用余额
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //融券持仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //证券总价值
  t->StockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StockValue"));
  //融资买入金额
  t->MarginTradingAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradingAmount"));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));

  return t;
};

//前置状态
PyObject * new_CZQThostFtdcFrontStatusField(CZQThostFtdcFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcFrontStatusField", (char*)"isis",
p->FrontID, p->LastReportDate, p->IsActive, p->LastReportTime);
}
CZQThostFtdcFrontStatusField * from_CZQThostFtdcFrontStatusField(PyObject * p){
  CZQThostFtdcFrontStatusField *t = (CZQThostFtdcFrontStatusField *)calloc(1, sizeof(CZQThostFtdcFrontStatusField));
  memset(t,0,sizeof(CZQThostFtdcFrontStatusField));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //上次报告日期
  strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //上次报告时间
  strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));

  return t;
};

//组合交易合约的单腿
PyObject * new_CZQThostFtdcCombinationLegField(CZQThostFtdcCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcCombinationLegField", (char*)"ciiiss",
p->Direction, p->ImplyLevel, p->LegMultiple, p->LegID, p->LegInstrumentID, p->CombInstrumentID);
}
CZQThostFtdcCombinationLegField * from_CZQThostFtdcCombinationLegField(PyObject * p){
  CZQThostFtdcCombinationLegField *t = (CZQThostFtdcCombinationLegField *)calloc(1, sizeof(CZQThostFtdcCombinationLegField));
  memset(t,0,sizeof(CZQThostFtdcCombinationLegField));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //派生层数
  t->ImplyLevel =   PyInt_AsLong(PyObject_GetAttrString(p, "ImplyLevel"));
  //单腿乘数
  t->LegMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
  //单腿编号
  t->LegID =   PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
  //单腿合约代码
  strcpy(t->LegInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "LegInstrumentID")));
  //组合合约代码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//查询错误报单操作
PyObject * new_CZQThostFtdcQryErrOrderActionField(CZQThostFtdcQryErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryErrOrderActionField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryErrOrderActionField * from_CZQThostFtdcQryErrOrderActionField(PyObject * p){
  CZQThostFtdcQryErrOrderActionField *t = (CZQThostFtdcQryErrOrderActionField *)calloc(1, sizeof(CZQThostFtdcQryErrOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcQryErrOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询交易所报单操作
PyObject * new_CZQThostFtdcQryExchangeOrderActionField(CZQThostFtdcQryExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryExchangeOrderActionField", (char*)"ssss",
p->ExchangeID, p->TraderID, p->ParticipantID, p->ClientID);
}
CZQThostFtdcQryExchangeOrderActionField * from_CZQThostFtdcQryExchangeOrderActionField(PyObject * p){
  CZQThostFtdcQryExchangeOrderActionField *t = (CZQThostFtdcQryExchangeOrderActionField *)calloc(1, sizeof(CZQThostFtdcQryExchangeOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcQryExchangeOrderActionField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//正在同步中的交易代码
PyObject * new_CZQThostFtdcSyncingTradingCodeField(CZQThostFtdcSyncingTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingTradingCodeField", (char*)"sssis",
p->InvestorID, p->ExchangeID, p->BrokerID, p->IsActive, p->ClientID);
}
CZQThostFtdcSyncingTradingCodeField * from_CZQThostFtdcSyncingTradingCodeField(PyObject * p){
  CZQThostFtdcSyncingTradingCodeField *t = (CZQThostFtdcSyncingTradingCodeField *)calloc(1, sizeof(CZQThostFtdcSyncingTradingCodeField));
  memset(t,0,sizeof(CZQThostFtdcSyncingTradingCodeField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//投资者合约交易权限
PyObject * new_CZQThostFtdcInstrumentTradingRightField(CZQThostFtdcInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInstrumentTradingRightField", (char*)"scccsssc",
p->InstrumentID, p->Direction, p->InstrumentRange, p->TradingRight, p->ExchangeID, p->InvestorID, p->BrokerID, p->InvestorRange);
}
CZQThostFtdcInstrumentTradingRightField * from_CZQThostFtdcInstrumentTradingRightField(PyObject * p){
  CZQThostFtdcInstrumentTradingRightField *t = (CZQThostFtdcInstrumentTradingRightField *)calloc(1, sizeof(CZQThostFtdcInstrumentTradingRightField));
  memset(t,0,sizeof(CZQThostFtdcInstrumentTradingRightField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //股票权限分类
  //enum类型
  //THOST_FTDC_INR_Product -> '2', 产品
  //THOST_FTDC_INR_Stock -> '4', 股票
  //THOST_FTDC_INR_Model -> '3', 股票权限模版
  //THOST_FTDC_INR_All -> '1', 所有
  t->InstrumentRange =   PyString_AsString(PyObject_GetAttrString(p, "InstrumentRange"))[0];
  //交易权限
  //enum类型
  //THOST_FTDC_TR_Allow -> '0', 可以交易
  //THOST_FTDC_TR_Forbidden -> '2', 不能交易
  t->TradingRight =   PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];

  return t;
};

//投资者持仓明细
PyObject * new_CZQThostFtdcInvestorPositionDetailField(CZQThostFtdcInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInvestorPositionDetailField", (char*)"dccddcddidissisdsddsdss",
p->ExchMargin, p->TradeType, p->HedgeFlag, p->TransferFee, p->Commission, p->Direction, p->CloseAmount, p->OpenPrice, p->Volume, p->LastSettlementPrice, p->CloseVolume, p->InstrumentID, p->ExchangeID, p->SettlementID, p->TradingDay, p->Amount, p->BrokerID, p->StampTax, p->Margin, p->TradeID, p->SettlementPrice, p->InvestorID, p->OpenDate);
}
CZQThostFtdcInvestorPositionDetailField * from_CZQThostFtdcInvestorPositionDetailField(PyObject * p){
  CZQThostFtdcInvestorPositionDetailField *t = (CZQThostFtdcInvestorPositionDetailField *)calloc(1, sizeof(CZQThostFtdcInvestorPositionDetailField));
  memset(t,0,sizeof(CZQThostFtdcInvestorPositionDetailField));
  //交易所保证金
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  //THOST_FTDC_TRDT_EFTPurchase -> '5', ETF申购
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_EFTRedem -> '6', ETF赎回
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //过户费
  t->TransferFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFee"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //买卖
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //开仓价
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //昨结算价
  t->LastSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastSettlementPrice"));
  //平仓量
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //融资融券金额
  t->Amount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Amount"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //印花税
  t->StampTax =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTax"));
  //投资者保证金
  t->Margin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
  //成交编号
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //开仓日期
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));

  return t;
};

//查询签约银行响应
PyObject * new_CZQThostFtdcContractBankField(CZQThostFtdcContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcContractBankField", (char*)"ssss",
p->BankName, p->BrokerID, p->BankBrchID, p->BankID);
}
CZQThostFtdcContractBankField * from_CZQThostFtdcContractBankField(PyObject * p){
  CZQThostFtdcContractBankField *t = (CZQThostFtdcContractBankField *)calloc(1, sizeof(CZQThostFtdcContractBankField));
  memset(t,0,sizeof(CZQThostFtdcContractBankField));
  //银行名称
  strcpy(t->BankName, PyString_AsString(PyObject_GetAttrString(p, "BankName")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//请求查询转帐流水
PyObject * new_CZQThostFtdcQryTransferSerialField(CZQThostFtdcQryTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTransferSerialField", (char*)"sss",
p->BankID, p->BrokerID, p->AccountID);
}
CZQThostFtdcQryTransferSerialField * from_CZQThostFtdcQryTransferSerialField(PyObject * p){
  CZQThostFtdcQryTransferSerialField *t = (CZQThostFtdcQryTransferSerialField *)calloc(1, sizeof(CZQThostFtdcQryTransferSerialField));
  memset(t,0,sizeof(CZQThostFtdcQryTransferSerialField));
  //银行编码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//手工同步用户动态令牌
PyObject * new_CZQThostFtdcManualSyncBrokerUserOTPField(CZQThostFtdcManualSyncBrokerUserOTPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcManualSyncBrokerUserOTPField", (char*)"ssssc",
p->UserID, p->BrokerID, p->FirstOTP, p->SecondOTP, p->OTPType);
}
CZQThostFtdcManualSyncBrokerUserOTPField * from_CZQThostFtdcManualSyncBrokerUserOTPField(PyObject * p){
  CZQThostFtdcManualSyncBrokerUserOTPField *t = (CZQThostFtdcManualSyncBrokerUserOTPField *)calloc(1, sizeof(CZQThostFtdcManualSyncBrokerUserOTPField));
  memset(t,0,sizeof(CZQThostFtdcManualSyncBrokerUserOTPField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //第一个动态密码
  strcpy(t->FirstOTP, PyString_AsString(PyObject_GetAttrString(p, "FirstOTP")));
  //第二个动态密码
  strcpy(t->SecondOTP, PyString_AsString(PyObject_GetAttrString(p, "SecondOTP")));
  //动态令牌类型
  //enum类型
  //THOST_FTDC_OTP_NONE -> '0', 无动态令牌
  //THOST_FTDC_OTP_TOTP -> '1', 时间令牌
  t->OTPType =   PyString_AsString(PyObject_GetAttrString(p, "OTPType"))[0];

  return t;
};

//投资者账户
PyObject * new_CZQThostFtdcInvestorAccountField(CZQThostFtdcInvestorAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInvestorAccountField", (char*)"sss",
p->InvestorID, p->BrokerID, p->AccountID);
}
CZQThostFtdcInvestorAccountField * from_CZQThostFtdcInvestorAccountField(PyObject * p){
  CZQThostFtdcInvestorAccountField *t = (CZQThostFtdcInvestorAccountField *)calloc(1, sizeof(CZQThostFtdcInvestorAccountField));
  memset(t,0,sizeof(CZQThostFtdcInvestorAccountField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//查询报单操作
PyObject * new_CZQThostFtdcQryOrderActionField(CZQThostFtdcQryOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryOrderActionField", (char*)"sss",
p->InvestorID, p->ExchangeID, p->BrokerID);
}
CZQThostFtdcQryOrderActionField * from_CZQThostFtdcQryOrderActionField(PyObject * p){
  CZQThostFtdcQryOrderActionField *t = (CZQThostFtdcQryOrderActionField *)calloc(1, sizeof(CZQThostFtdcQryOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcQryOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//用户会话
PyObject * new_CZQThostFtdcUserSessionField(CZQThostFtdcUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcUserSessionField", (char*)"sssssisisss",
p->MacAddress, p->UserProductInfo, p->InterfaceProductInfo, p->UserID, p->LoginDate, p->SessionID, p->BrokerID, p->FrontID, p->IPAddress, p->LoginTime, p->ProtocolInfo);
}
CZQThostFtdcUserSessionField * from_CZQThostFtdcUserSessionField(PyObject * p){
  CZQThostFtdcUserSessionField *t = (CZQThostFtdcUserSessionField *)calloc(1, sizeof(CZQThostFtdcUserSessionField));
  memset(t,0,sizeof(CZQThostFtdcUserSessionField));
  //Mac地址
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //接口端产品信息
  strcpy(t->InterfaceProductInfo, PyString_AsString(PyObject_GetAttrString(p, "InterfaceProductInfo")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //登录日期
  strcpy(t->LoginDate, PyString_AsString(PyObject_GetAttrString(p, "LoginDate")));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //IP地址
  strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));
  //登录时间
  strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));
  //协议信息
  strcpy(t->ProtocolInfo, PyString_AsString(PyObject_GetAttrString(p, "ProtocolInfo")));

  return t;
};

//查询经纪公司交易算法
PyObject * new_CZQThostFtdcQryBrokerTradingAlgosField(CZQThostFtdcQryBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryBrokerTradingAlgosField", (char*)"sss",
p->InstrumentID, p->ExchangeID, p->BrokerID);
}
CZQThostFtdcQryBrokerTradingAlgosField * from_CZQThostFtdcQryBrokerTradingAlgosField(PyObject * p){
  CZQThostFtdcQryBrokerTradingAlgosField *t = (CZQThostFtdcQryBrokerTradingAlgosField *)calloc(1, sizeof(CZQThostFtdcQryBrokerTradingAlgosField));
  memset(t,0,sizeof(CZQThostFtdcQryBrokerTradingAlgosField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询管理用户功能权限
PyObject * new_CZQThostFtdcQrySuperUserFunctionField(CZQThostFtdcQrySuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQrySuperUserFunctionField", (char*)"s",
p->UserID);
}
CZQThostFtdcQrySuperUserFunctionField * from_CZQThostFtdcQrySuperUserFunctionField(PyObject * p){
  CZQThostFtdcQrySuperUserFunctionField *t = (CZQThostFtdcQrySuperUserFunctionField *)calloc(1, sizeof(CZQThostFtdcQrySuperUserFunctionField));
  memset(t,0,sizeof(CZQThostFtdcQrySuperUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//行情静态属性
PyObject * new_CZQThostFtdcMarketDataStaticField(CZQThostFtdcMarketDataStaticField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataStaticField", (char*)"dddddddd",
p->ClosePrice, p->HighestPrice, p->SettlementPrice, p->OpenPrice, p->LowerLimitPrice, p->UpperLimitPrice, p->LowestPrice, p->CurrDelta);
}
CZQThostFtdcMarketDataStaticField * from_CZQThostFtdcMarketDataStaticField(PyObject * p){
  CZQThostFtdcMarketDataStaticField *t = (CZQThostFtdcMarketDataStaticField *)calloc(1, sizeof(CZQThostFtdcMarketDataStaticField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataStaticField));
  //今收盘
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //最高价
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //今开盘
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //跌停板价
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //涨停板价
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //最低价
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));
  //今虚实度
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));

  return t;
};

//会员资金折扣
PyObject * new_CZQThostFtdcDiscountField(CZQThostFtdcDiscountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcDiscountField", (char*)"sscd",
p->InvestorID, p->BrokerID, p->InvestorRange, p->Discount);
}
CZQThostFtdcDiscountField * from_CZQThostFtdcDiscountField(PyObject * p){
  CZQThostFtdcDiscountField *t = (CZQThostFtdcDiscountField *)calloc(1, sizeof(CZQThostFtdcDiscountField));
  memset(t,0,sizeof(CZQThostFtdcDiscountField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //资金折扣比例
  t->Discount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Discount"));

  return t;
};

//用户IP
PyObject * new_CZQThostFtdcUserIPField(CZQThostFtdcUserIPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcUserIPField", (char*)"sssss",
p->MacAddress, p->UserID, p->IPMask, p->BrokerID, p->IPAddress);
}
CZQThostFtdcUserIPField * from_CZQThostFtdcUserIPField(PyObject * p){
  CZQThostFtdcUserIPField *t = (CZQThostFtdcUserIPField *)calloc(1, sizeof(CZQThostFtdcUserIPField));
  memset(t,0,sizeof(CZQThostFtdcUserIPField));
  //Mac地址
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //IP地址掩码
  strcpy(t->IPMask, PyString_AsString(PyObject_GetAttrString(p, "IPMask")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //IP地址
  strcpy(t->IPAddress, PyString_AsString(PyObject_GetAttrString(p, "IPAddress")));

  return t;
};

//查询经纪公司用户
PyObject * new_CZQThostFtdcQryBrokerUserField(CZQThostFtdcQryBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryBrokerUserField", (char*)"ss",
p->UserID, p->BrokerID);
}
CZQThostFtdcQryBrokerUserField * from_CZQThostFtdcQryBrokerUserField(PyObject * p){
  CZQThostFtdcQryBrokerUserField *t = (CZQThostFtdcQryBrokerUserField *)calloc(1, sizeof(CZQThostFtdcQryBrokerUserField));
  memset(t,0,sizeof(CZQThostFtdcQryBrokerUserField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询账户信息请求
PyObject * new_CZQThostFtdcReqQueryAccountField(CZQThostFtdcReqQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqQueryAccountField", (char*)"sssscississsisscicssssssscissccicscs",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest);
}
CZQThostFtdcReqQueryAccountField * from_CZQThostFtdcReqQueryAccountField(PyObject * p){
  CZQThostFtdcReqQueryAccountField *t = (CZQThostFtdcReqQueryAccountField *)calloc(1, sizeof(CZQThostFtdcReqQueryAccountField));
  memset(t,0,sizeof(CZQThostFtdcReqQueryAccountField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询报单
PyObject * new_CZQThostFtdcQryHisOrderField(CZQThostFtdcQryHisOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryHisOrderField", (char*)"ssissssss",
p->InstrumentID, p->ExchangeID, p->SettlementID, p->InsertTimeStart, p->InvestorID, p->BrokerID, p->OrderSysID, p->TradingDay, p->InsertTimeEnd);
}
CZQThostFtdcQryHisOrderField * from_CZQThostFtdcQryHisOrderField(PyObject * p){
  CZQThostFtdcQryHisOrderField *t = (CZQThostFtdcQryHisOrderField *)calloc(1, sizeof(CZQThostFtdcQryHisOrderField));
  memset(t,0,sizeof(CZQThostFtdcQryHisOrderField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //开始时间
  strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //结束时间
  strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

  return t;
};

//合约手续费率
PyObject * new_CZQThostFtdcInstrumentCommissionRateField(CZQThostFtdcInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInstrumentCommissionRateField", (char*)"scdddsddscddd",
p->InstrumentID, p->Direction, p->TradeFeeByMoney, p->MinTradeFee, p->StampTaxRateByMoney, p->InvestorID, p->MarginByMoney, p->StampTaxRateByVolume, p->BrokerID, p->InvestorRange, p->TransferFeeRateByVolume, p->TransferFeeRateByMoney, p->TradeFeeByVolume);
}
CZQThostFtdcInstrumentCommissionRateField * from_CZQThostFtdcInstrumentCommissionRateField(PyObject * p){
  CZQThostFtdcInstrumentCommissionRateField *t = (CZQThostFtdcInstrumentCommissionRateField *)calloc(1, sizeof(CZQThostFtdcInstrumentCommissionRateField));
  memset(t,0,sizeof(CZQThostFtdcInstrumentCommissionRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //交易费
  t->TradeFeeByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeFeeByMoney"));
  //最小过户费
  t->MinTradeFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MinTradeFee"));
  //印花税率
  t->StampTaxRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTaxRateByMoney"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易附加费率
  t->MarginByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginByMoney"));
  //印花税率(按手数)
  t->StampTaxRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTaxRateByVolume"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //过户费率(按手数)
  t->TransferFeeRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFeeRateByVolume"));
  //过户费率
  t->TransferFeeRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFeeRateByMoney"));
  //交易费(按手数)
  t->TradeFeeByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeFeeByVolume"));

  return t;
};

//经纪公司用户
PyObject * new_CZQThostFtdcBrokerUserField(CZQThostFtdcBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerUserField", (char*)"sscsii",
p->UserName, p->UserID, p->UserType, p->BrokerID, p->IsUsingOTP, p->IsActive);
}
CZQThostFtdcBrokerUserField * from_CZQThostFtdcBrokerUserField(PyObject * p){
  CZQThostFtdcBrokerUserField *t = (CZQThostFtdcBrokerUserField *)calloc(1, sizeof(CZQThostFtdcBrokerUserField));
  memset(t,0,sizeof(CZQThostFtdcBrokerUserField));
  //用户名称
  strcpy(t->UserName, PyString_AsString(PyObject_GetAttrString(p, "UserName")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //用户类型
  //enum类型
  //THOST_FTDC_UT_Investor -> '0', 投资者
  //THOST_FTDC_UT_SuperUser -> '2', 管理员
  //THOST_FTDC_UT_Operator -> '1', 操作员
  t->UserType =   PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //是否使用令牌
  t->IsUsingOTP =   PyInt_AsLong(PyObject_GetAttrString(p, "IsUsingOTP"));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//出入金同步
PyObject * new_CZQThostFtdcSyncDepositField(CZQThostFtdcSyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncDepositField", (char*)"sssdi",
p->InvestorID, p->DepositSeqNo, p->BrokerID, p->Deposit, p->IsForce);
}
CZQThostFtdcSyncDepositField * from_CZQThostFtdcSyncDepositField(PyObject * p){
  CZQThostFtdcSyncDepositField *t = (CZQThostFtdcSyncDepositField *)calloc(1, sizeof(CZQThostFtdcSyncDepositField));
  memset(t,0,sizeof(CZQThostFtdcSyncDepositField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //出入金流水号
  strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //是否强制进行
  t->IsForce =   PyInt_AsLong(PyObject_GetAttrString(p, "IsForce"));

  return t;
};

//查询交易编码
PyObject * new_CZQThostFtdcQryInstrumentTradingRightField(CZQThostFtdcQryInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInstrumentTradingRightField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
CZQThostFtdcQryInstrumentTradingRightField * from_CZQThostFtdcQryInstrumentTradingRightField(PyObject * p){
  CZQThostFtdcQryInstrumentTradingRightField *t = (CZQThostFtdcQryInstrumentTradingRightField *)calloc(1, sizeof(CZQThostFtdcQryInstrumentTradingRightField));
  memset(t,0,sizeof(CZQThostFtdcQryInstrumentTradingRightField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//请求查询保证金监管系统经纪公司资金账户密钥
PyObject * new_CZQThostFtdcQryCFMMCTradingAccountKeyField(CZQThostFtdcQryCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryCFMMCTradingAccountKeyField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryCFMMCTradingAccountKeyField * from_CZQThostFtdcQryCFMMCTradingAccountKeyField(PyObject * p){
  CZQThostFtdcQryCFMMCTradingAccountKeyField *t = (CZQThostFtdcQryCFMMCTradingAccountKeyField *)calloc(1, sizeof(CZQThostFtdcQryCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(CZQThostFtdcQryCFMMCTradingAccountKeyField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//客户通知
PyObject * new_CZQThostFtdcNoticeField(CZQThostFtdcNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcNoticeField", (char*)"sss",
p->Content, p->SequenceLabel, p->BrokerID);
}
CZQThostFtdcNoticeField * from_CZQThostFtdcNoticeField(PyObject * p){
  CZQThostFtdcNoticeField *t = (CZQThostFtdcNoticeField *)calloc(1, sizeof(CZQThostFtdcNoticeField));
  memset(t,0,sizeof(CZQThostFtdcNoticeField));
  //消息正文
  strcpy(t->Content, PyString_AsString(PyObject_GetAttrString(p, "Content")));
  //经纪公司通知内容序列号
  strcpy(t->SequenceLabel, PyString_AsString(PyObject_GetAttrString(p, "SequenceLabel")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//转账请求
PyObject * new_CZQThostFtdcReqTransferField(CZQThostFtdcReqTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqTransferField", (char*)"sssscississsisscicscssssssccidssdccicscsdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->IdCardType, p->PlateSerial, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CZQThostFtdcReqTransferField * from_CZQThostFtdcReqTransferField(PyObject * p){
  CZQThostFtdcReqTransferField *t = (CZQThostFtdcReqTransferField *)calloc(1, sizeof(CZQThostFtdcReqTransferField));
  memset(t,0,sizeof(CZQThostFtdcReqTransferField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //发送方给接收方的消息
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//错误报单操作
PyObject * new_CZQThostFtdcErrOrderActionField(CZQThostFtdcErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcErrOrderActionField", (char*)"ssssdsisiiicisssssssssssiic",
p->ActionTime, p->InvestorID, p->TraderID, p->UserID, p->LimitPrice, p->ClientID, p->InstallID, p->ParticipantID, p->OrderActionRef, p->VolumeChange, p->SessionID, p->ActionFlag, p->ErrorID, p->InstrumentID, p->ExchangeID, p->StatusMsg, p->BrokerID, p->ActionDate, p->OrderLocalID, p->BranchID, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->ActionLocalID, p->RequestID, p->FrontID, p->OrderActionStatus);
}
CZQThostFtdcErrOrderActionField * from_CZQThostFtdcErrOrderActionField(PyObject * p){
  CZQThostFtdcErrOrderActionField *t = (CZQThostFtdcErrOrderActionField *)calloc(1, sizeof(CZQThostFtdcErrOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcErrOrderActionField));
  //操作时间
  strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //报单操作引用
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //数量变化
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //状态信息
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //操作日期
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //操作本地编号
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];

  return t;
};

//期商签到通知
PyObject * new_CZQThostFtdcNotifyFutureSignInField(CZQThostFtdcNotifyFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcNotifyFutureSignInField", (char*)"sssiisssissiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->PinKey, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->MacKey, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CZQThostFtdcNotifyFutureSignInField * from_CZQThostFtdcNotifyFutureSignInField(PyObject * p){
  CZQThostFtdcNotifyFutureSignInField *t = (CZQThostFtdcNotifyFutureSignInField *)calloc(1, sizeof(CZQThostFtdcNotifyFutureSignInField));
  memset(t,0,sizeof(CZQThostFtdcNotifyFutureSignInField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //PIN密钥
  strcpy(t->PinKey, PyString_AsString(PyObject_GetAttrString(p, "PinKey")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //MAC密钥
  strcpy(t->MacKey, PyString_AsString(PyObject_GetAttrString(p, "MacKey")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询投资者
PyObject * new_CZQThostFtdcQryInvestorField(CZQThostFtdcQryInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInvestorField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryInvestorField * from_CZQThostFtdcQryInvestorField(PyObject * p){
  CZQThostFtdcQryInvestorField *t = (CZQThostFtdcQryInvestorField *)calloc(1, sizeof(CZQThostFtdcQryInvestorField));
  memset(t,0,sizeof(CZQThostFtdcQryInvestorField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询客户通知
PyObject * new_CZQThostFtdcQryNoticeField(CZQThostFtdcQryNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryNoticeField", (char*)"s",
p->BrokerID);
}
CZQThostFtdcQryNoticeField * from_CZQThostFtdcQryNoticeField(PyObject * p){
  CZQThostFtdcQryNoticeField *t = (CZQThostFtdcQryNoticeField *)calloc(1, sizeof(CZQThostFtdcQryNoticeField));
  memset(t,0,sizeof(CZQThostFtdcQryNoticeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询出入金流水
PyObject * new_CZQThostFtdcQrySyncDepositField(CZQThostFtdcQrySyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQrySyncDepositField", (char*)"ss",
p->DepositSeqNo, p->BrokerID);
}
CZQThostFtdcQrySyncDepositField * from_CZQThostFtdcQrySyncDepositField(PyObject * p){
  CZQThostFtdcQrySyncDepositField *t = (CZQThostFtdcQrySyncDepositField *)calloc(1, sizeof(CZQThostFtdcQrySyncDepositField));
  memset(t,0,sizeof(CZQThostFtdcQrySyncDepositField));
  //出入金流水号
  strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//用户权限
PyObject * new_CZQThostFtdcUserRightField(CZQThostFtdcUserRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcUserRightField", (char*)"cssi",
p->UserRightType, p->UserID, p->BrokerID, p->IsForbidden);
}
CZQThostFtdcUserRightField * from_CZQThostFtdcUserRightField(PyObject * p){
  CZQThostFtdcUserRightField *t = (CZQThostFtdcUserRightField *)calloc(1, sizeof(CZQThostFtdcUserRightField));
  memset(t,0,sizeof(CZQThostFtdcUserRightField));
  //客户权限类型
  //enum类型
  //THOST_FTDC_URT_EMail -> '3', 邮寄结算单
  //THOST_FTDC_URT_Logon -> '1', 登录
  //THOST_FTDC_URT_Transfer -> '2', 银期转帐
  //THOST_FTDC_URT_Fax -> '4', 传真结算单
  //THOST_FTDC_URT_ConditionOrder -> '5', 条件单
  t->UserRightType =   PyString_AsString(PyObject_GetAttrString(p, "UserRightType"))[0];
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //是否禁止
  t->IsForbidden =   PyInt_AsLong(PyObject_GetAttrString(p, "IsForbidden"));

  return t;
};

//查询最大报单数量
PyObject * new_CZQThostFtdcQueryMaxOrderVolumeField(CZQThostFtdcQueryMaxOrderVolumeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQueryMaxOrderVolumeField", (char*)"scccssi",
p->InstrumentID, p->Direction, p->OffsetFlag, p->HedgeFlag, p->InvestorID, p->BrokerID, p->MaxVolume);
}
CZQThostFtdcQueryMaxOrderVolumeField * from_CZQThostFtdcQueryMaxOrderVolumeField(PyObject * p){
  CZQThostFtdcQueryMaxOrderVolumeField *t = (CZQThostFtdcQueryMaxOrderVolumeField *)calloc(1, sizeof(CZQThostFtdcQueryMaxOrderVolumeField));
  memset(t,0,sizeof(CZQThostFtdcQueryMaxOrderVolumeField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //开平标志
  //enum类型
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //最大允许报单数量
  t->MaxVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxVolume"));

  return t;
};

//交易所成交
PyObject * new_CZQThostFtdcExchangeTradeField(CZQThostFtdcExchangeTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeTradeField", (char*)"scssssissccsisssssccc",
p->ExchangeID, p->TradeType, p->ParticipantID, p->TradeID, p->TradeDate, p->BusinessUnit, p->SequenceNo, p->Price, p->TraderID, p->HedgeFlag, p->Direction, p->ClientID, p->Volume, p->ExchangeInstID, p->TradeTime, p->OrderLocalID, p->OrderSysID, p->ClearingPartID, p->PriceSource, p->TradingRole, p->OffsetFlag);
}
CZQThostFtdcExchangeTradeField * from_CZQThostFtdcExchangeTradeField(PyObject * p){
  CZQThostFtdcExchangeTradeField *t = (CZQThostFtdcExchangeTradeField *)calloc(1, sizeof(CZQThostFtdcExchangeTradeField));
  memset(t,0,sizeof(CZQThostFtdcExchangeTradeField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  //THOST_FTDC_TRDT_EFTPurchase -> '5', ETF申购
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_EFTRedem -> '6', ETF赎回
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //成交编号
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //成交时期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //序号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //价格
  strcpy(t->Price, PyString_AsString(PyObject_GetAttrString(p, "Price")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //成交时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //成交价来源
  //enum类型
  //THOST_FTDC_PSRC_Sell -> '2', 卖委托价
  //THOST_FTDC_PSRC_Buy -> '1', 买委托价
  //THOST_FTDC_PSRC_LastPrice -> '0', 前成交价
  t->PriceSource =   PyString_AsString(PyObject_GetAttrString(p, "PriceSource"))[0];
  //交易角色
  //enum类型
  //THOST_FTDC_ER_Host -> '2', 自营
  //THOST_FTDC_ER_Broker -> '1', 代理
  //THOST_FTDC_ER_Maker -> '3', 做市商
  t->TradingRole =   PyString_AsString(PyObject_GetAttrString(p, "TradingRole"))[0];
  //开平标志
  //enum类型
  //THOST_FTDC_OF_CloseToday -> '3', 平今
  //THOST_FTDC_OF_ForceOff -> '5', 强减
  //THOST_FTDC_OF_LocalForceClose -> '6', 本地强平
  //THOST_FTDC_OF_Close -> '1', 平仓
  //THOST_FTDC_OF_Open -> '0', 开仓
  //THOST_FTDC_OF_CloseYesterday -> '4', 平昨
  //THOST_FTDC_OF_ForceClose -> '2', 强平
  t->OffsetFlag =   PyString_AsString(PyObject_GetAttrString(p, "OffsetFlag"))[0];

  return t;
};

//期商签到签退
PyObject * new_CZQThostFtdcFutureSignIOField(CZQThostFtdcFutureSignIOField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcFutureSignIOField", (char*)"isscssssssissssisissi",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->CurrencyID, p->Digest, p->RequestID);
}
CZQThostFtdcFutureSignIOField * from_CZQThostFtdcFutureSignIOField(PyObject * p){
  CZQThostFtdcFutureSignIOField *t = (CZQThostFtdcFutureSignIOField *)calloc(1, sizeof(CZQThostFtdcFutureSignIOField));
  memset(t,0,sizeof(CZQThostFtdcFutureSignIOField));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//输入报单操作
PyObject * new_CZQThostFtdcInputOrderActionField(CZQThostFtdcInputOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInputOrderActionField", (char*)"sssissdssiisici",
p->InstrumentID, p->ExchangeID, p->OrderLocalID, p->OrderActionRef, p->TraderID, p->UserID, p->LimitPrice, p->OrderRef, p->InvestorID, p->SessionID, p->VolumeChange, p->BrokerID, p->RequestID, p->ActionFlag, p->FrontID);
}
CZQThostFtdcInputOrderActionField * from_CZQThostFtdcInputOrderActionField(PyObject * p){
  CZQThostFtdcInputOrderActionField *t = (CZQThostFtdcInputOrderActionField *)calloc(1, sizeof(CZQThostFtdcInputOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcInputOrderActionField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //报单操作引用
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //数量变化
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//查询银行交易明细请求响应
PyObject * new_CZQThostFtdcTransferQryDetailRspField(CZQThostFtdcTransferQryDetailRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferQryDetailRspField", (char*)"sssssiissdcsss",
p->BankAccount, p->FutureAccount, p->TradeDate, p->TradeCode, p->CurrencyCode, p->BankSerial, p->FutureSerial, p->FutureID, p->CertCode, p->TxAmount, p->Flag, p->TradeTime, p->BankBrchID, p->BankID);
}
CZQThostFtdcTransferQryDetailRspField * from_CZQThostFtdcTransferQryDetailRspField(PyObject * p){
  CZQThostFtdcTransferQryDetailRspField *t = (CZQThostFtdcTransferQryDetailRspField *)calloc(1, sizeof(CZQThostFtdcTransferQryDetailRspField));
  memset(t,0,sizeof(CZQThostFtdcTransferQryDetailRspField));
  //银行账号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //资金帐号
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //交易代码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //货币代码
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //银行流水号
  t->BankSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "BankSerial"));
  //期货流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //期货公司代码
  strcpy(t->FutureID, PyString_AsString(PyObject_GetAttrString(p, "FutureID")));
  //证件号码
  strcpy(t->CertCode, PyString_AsString(PyObject_GetAttrString(p, "CertCode")));
  //发生金额
  t->TxAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TxAmount"));
  //有效标志
  //enum类型
  //THOST_FTDC_TVF_Valid -> '1', 有效
  //THOST_FTDC_TVF_Reverse -> '2', 冲正
  //THOST_FTDC_TVF_Invalid -> '0', 无效或失败
  t->Flag =   PyString_AsString(PyObject_GetAttrString(p, "Flag"))[0];
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//交易所
PyObject * new_CZQThostFtdcExchangeField(CZQThostFtdcExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeField", (char*)"css",
p->ExchangeProperty, p->ExchangeID, p->ExchangeName);
}
CZQThostFtdcExchangeField * from_CZQThostFtdcExchangeField(PyObject * p){
  CZQThostFtdcExchangeField *t = (CZQThostFtdcExchangeField *)calloc(1, sizeof(CZQThostFtdcExchangeField));
  memset(t,0,sizeof(CZQThostFtdcExchangeField));
  //交易所属性
  //enum类型
  //THOST_FTDC_EXP_GenOrderByTrade -> '1', 根据成交生成报单
  //THOST_FTDC_EXP_Normal -> '0', 正常
  t->ExchangeProperty =   PyString_AsString(PyObject_GetAttrString(p, "ExchangeProperty"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所名称
  strcpy(t->ExchangeName, PyString_AsString(PyObject_GetAttrString(p, "ExchangeName")));

  return t;
};

//查询银行资金请求，TradeCode=204002
PyObject * new_CZQThostFtdcTransferQryBankReqField(CZQThostFtdcTransferQryBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferQryBankReqField", (char*)"sscs",
p->CurrencyCode, p->FutureAccount, p->FuturePwdFlag, p->FutureAccPwd);
}
CZQThostFtdcTransferQryBankReqField * from_CZQThostFtdcTransferQryBankReqField(PyObject * p){
  CZQThostFtdcTransferQryBankReqField *t = (CZQThostFtdcTransferQryBankReqField *)calloc(1, sizeof(CZQThostFtdcTransferQryBankReqField));
  memset(t,0,sizeof(CZQThostFtdcTransferQryBankReqField));
  //币种：RMB-人民币 USD-美圆 HKD-港元
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //期货资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //密码标志
  //enum类型
  //THOST_FTDC_FPWD_Check -> '1', 核对
  //THOST_FTDC_FPWD_UnCheck -> '0', 不核对
  t->FuturePwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
  //密码
  strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));

  return t;
};

//银行资金转期货请求，TradeCode=202001
PyObject * new_CZQThostFtdcTransferBankToFutureReqField(CZQThostFtdcTransferBankToFutureReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferBankToFutureReqField", (char*)"sssdcd",
p->FutureAccount, p->FutureAccPwd, p->CurrencyCode, p->TradeAmt, p->FuturePwdFlag, p->CustFee);
}
CZQThostFtdcTransferBankToFutureReqField * from_CZQThostFtdcTransferBankToFutureReqField(PyObject * p){
  CZQThostFtdcTransferBankToFutureReqField *t = (CZQThostFtdcTransferBankToFutureReqField *)calloc(1, sizeof(CZQThostFtdcTransferBankToFutureReqField));
  memset(t,0,sizeof(CZQThostFtdcTransferBankToFutureReqField));
  //期货资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //密码
  strcpy(t->FutureAccPwd, PyString_AsString(PyObject_GetAttrString(p, "FutureAccPwd")));
  //币种：RMB-人民币 USD-美圆 HKD-港元
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //转账金额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //密码标志
  //enum类型
  //THOST_FTDC_FPWD_Check -> '1', 核对
  //THOST_FTDC_FPWD_UnCheck -> '0', 不核对
  t->FuturePwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "FuturePwdFlag"))[0];
  //客户手续费
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));

  return t;
};

//查询用户会话
PyObject * new_CZQThostFtdcQryUserSessionField(CZQThostFtdcQryUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryUserSessionField", (char*)"iiss",
p->FrontID, p->SessionID, p->BrokerID, p->UserID);
}
CZQThostFtdcQryUserSessionField * from_CZQThostFtdcQryUserSessionField(PyObject * p){
  CZQThostFtdcQryUserSessionField *t = (CZQThostFtdcQryUserSessionField *)calloc(1, sizeof(CZQThostFtdcQryUserSessionField));
  memset(t,0,sizeof(CZQThostFtdcQryUserSessionField));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//交易所保证金率调整
PyObject * new_CZQThostFtdcExchangeMarginRateAdjustField(CZQThostFtdcExchangeMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeMarginRateAdjustField", (char*)"sddddddddcddsdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->ExchLongMarginRatioByMoney, p->ExchShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->ExchShortMarginRatioByVolume, p->ExchLongMarginRatioByVolume, p->NoShortMarginRatioByMoney, p->NoLongMarginRatioByMoney, p->HedgeFlag, p->NoLongMarginRatioByVolume, p->NoShortMarginRatioByVolume, p->BrokerID, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CZQThostFtdcExchangeMarginRateAdjustField * from_CZQThostFtdcExchangeMarginRateAdjustField(PyObject * p){
  CZQThostFtdcExchangeMarginRateAdjustField *t = (CZQThostFtdcExchangeMarginRateAdjustField *)calloc(1, sizeof(CZQThostFtdcExchangeMarginRateAdjustField));
  memset(t,0,sizeof(CZQThostFtdcExchangeMarginRateAdjustField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //跟随交易所投资者空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //交易所多头保证金率
  t->ExchLongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByMoney"));
  //交易所空头保证金率
  t->ExchShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByMoney"));
  //跟随交易所投资者多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //交易所空头保证金费
  t->ExchShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchShortMarginRatioByVolume"));
  //交易所多头保证金费
  t->ExchLongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchLongMarginRatioByVolume"));
  //不跟随交易所投资者空头保证金率
  t->NoShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByMoney"));
  //不跟随交易所投资者多头保证金率
  t->NoLongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //不跟随交易所投资者多头保证金费
  t->NoLongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoLongMarginRatioByVolume"));
  //不跟随交易所投资者空头保证金费
  t->NoShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "NoShortMarginRatioByVolume"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //跟随交易所投资者空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //跟随交易所投资者多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//客户端认证响应
PyObject * new_CZQThostFtdcRspAuthenticateField(CZQThostFtdcRspAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspAuthenticateField", (char*)"sss",
p->UserID, p->BrokerID, p->UserProductInfo);
}
CZQThostFtdcRspAuthenticateField * from_CZQThostFtdcRspAuthenticateField(PyObject * p){
  CZQThostFtdcRspAuthenticateField *t = (CZQThostFtdcRspAuthenticateField *)calloc(1, sizeof(CZQThostFtdcRspAuthenticateField));
  memset(t,0,sizeof(CZQThostFtdcRspAuthenticateField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));

  return t;
};

//查询交易编码
PyObject * new_CZQThostFtdcQryTradingCodeField(CZQThostFtdcQryTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTradingCodeField", (char*)"ssss",
p->InvestorID, p->ExchangeID, p->BrokerID, p->ClientID);
}
CZQThostFtdcQryTradingCodeField * from_CZQThostFtdcQryTradingCodeField(PyObject * p){
  CZQThostFtdcQryTradingCodeField *t = (CZQThostFtdcQryTradingCodeField *)calloc(1, sizeof(CZQThostFtdcQryTradingCodeField));
  memset(t,0,sizeof(CZQThostFtdcQryTradingCodeField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//行情最新成交属性
PyObject * new_CZQThostFtdcMarketDataLastMatchField(CZQThostFtdcMarketDataLastMatchField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataLastMatchField", (char*)"iddd",
p->Volume, p->OpenInterest, p->LastPrice, p->Turnover);
}
CZQThostFtdcMarketDataLastMatchField * from_CZQThostFtdcMarketDataLastMatchField(PyObject * p){
  CZQThostFtdcMarketDataLastMatchField *t = (CZQThostFtdcMarketDataLastMatchField *)calloc(1, sizeof(CZQThostFtdcMarketDataLastMatchField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataLastMatchField));
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //持仓量
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //最新价
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //成交金额
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));

  return t;
};

//行情交易所代码属性
PyObject * new_CZQThostFtdcMarketDataExchangeField(CZQThostFtdcMarketDataExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataExchangeField", (char*)"s",
p->ExchangeID);
}
CZQThostFtdcMarketDataExchangeField * from_CZQThostFtdcMarketDataExchangeField(PyObject * p){
  CZQThostFtdcMarketDataExchangeField *t = (CZQThostFtdcMarketDataExchangeField *)calloc(1, sizeof(CZQThostFtdcMarketDataExchangeField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataExchangeField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//信息分发
PyObject * new_CZQThostFtdcDisseminationField(CZQThostFtdcDisseminationField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcDisseminationField", (char*)"ih",
p->SequenceNo, p->SequenceSeries);
}
CZQThostFtdcDisseminationField * from_CZQThostFtdcDisseminationField(PyObject * p){
  CZQThostFtdcDisseminationField *t = (CZQThostFtdcDisseminationField *)calloc(1, sizeof(CZQThostFtdcDisseminationField));
  memset(t,0,sizeof(CZQThostFtdcDisseminationField));
  //序列号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //序列系列号
  t->SequenceSeries =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));

  return t;
};

//删除预埋单
PyObject * new_CZQThostFtdcRemoveParkedOrderField(CZQThostFtdcRemoveParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRemoveParkedOrderField", (char*)"sss",
p->InvestorID, p->BrokerID, p->ParkedOrderID);
}
CZQThostFtdcRemoveParkedOrderField * from_CZQThostFtdcRemoveParkedOrderField(PyObject * p){
  CZQThostFtdcRemoveParkedOrderField *t = (CZQThostFtdcRemoveParkedOrderField *)calloc(1, sizeof(CZQThostFtdcRemoveParkedOrderField));
  memset(t,0,sizeof(CZQThostFtdcRemoveParkedOrderField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //预埋报单编号
  strcpy(t->ParkedOrderID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderID")));

  return t;
};

//查询报单
PyObject * new_CZQThostFtdcQryOrderField(CZQThostFtdcQryOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryOrderField", (char*)"sssssss",
p->InstrumentID, p->ExchangeID, p->InsertTimeStart, p->InvestorID, p->BrokerID, p->OrderSysID, p->InsertTimeEnd);
}
CZQThostFtdcQryOrderField * from_CZQThostFtdcQryOrderField(PyObject * p){
  CZQThostFtdcQryOrderField *t = (CZQThostFtdcQryOrderField *)calloc(1, sizeof(CZQThostFtdcQryOrderField));
  memset(t,0,sizeof(CZQThostFtdcQryOrderField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //开始时间
  strcpy(t->InsertTimeStart, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeStart")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //结束时间
  strcpy(t->InsertTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "InsertTimeEnd")));

  return t;
};

//正在同步中的合约交易权限
PyObject * new_CZQThostFtdcSyncingInstrumentTradingRightField(CZQThostFtdcSyncingInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingInstrumentTradingRightField", (char*)"scccsssc",
p->InstrumentID, p->Direction, p->InstrumentRange, p->TradingRight, p->ExchangeID, p->InvestorID, p->BrokerID, p->InvestorRange);
}
CZQThostFtdcSyncingInstrumentTradingRightField * from_CZQThostFtdcSyncingInstrumentTradingRightField(PyObject * p){
  CZQThostFtdcSyncingInstrumentTradingRightField *t = (CZQThostFtdcSyncingInstrumentTradingRightField *)calloc(1, sizeof(CZQThostFtdcSyncingInstrumentTradingRightField));
  memset(t,0,sizeof(CZQThostFtdcSyncingInstrumentTradingRightField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //股票权限分类
  //enum类型
  //THOST_FTDC_INR_Product -> '2', 产品
  //THOST_FTDC_INR_Stock -> '4', 股票
  //THOST_FTDC_INR_Model -> '3', 股票权限模版
  //THOST_FTDC_INR_All -> '1', 所有
  t->InstrumentRange =   PyString_AsString(PyObject_GetAttrString(p, "InstrumentRange"))[0];
  //交易权限
  //enum类型
  //THOST_FTDC_TR_Allow -> '0', 可以交易
  //THOST_FTDC_TR_Forbidden -> '2', 不能交易
  t->TradingRight =   PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];

  return t;
};

//行情最优价属性
PyObject * new_CZQThostFtdcMarketDataBestPriceField(CZQThostFtdcMarketDataBestPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataBestPriceField", (char*)"iddi",
p->AskVolume1, p->BidPrice1, p->AskPrice1, p->BidVolume1);
}
CZQThostFtdcMarketDataBestPriceField * from_CZQThostFtdcMarketDataBestPriceField(PyObject * p){
  CZQThostFtdcMarketDataBestPriceField *t = (CZQThostFtdcMarketDataBestPriceField *)calloc(1, sizeof(CZQThostFtdcMarketDataBestPriceField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataBestPriceField));
  //申卖量一
  t->AskVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume1"));
  //申买价一
  t->BidPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
  //申卖价一
  t->AskPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));
  //申买量一
  t->BidVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume1"));

  return t;
};

//银期转帐报文头
PyObject * new_CZQThostFtdcTransferHeaderField(CZQThostFtdcTransferHeaderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferHeaderField", (char*)"ssssisssssssi",
p->TradeDate, p->TradeCode, p->FutureID, p->OperNo, p->SessionID, p->Version, p->TradeTime, p->DeviceID, p->BankBrchID, p->BankID, p->RecordNum, p->TradeSerial, p->RequestID);
}
CZQThostFtdcTransferHeaderField * from_CZQThostFtdcTransferHeaderField(PyObject * p){
  CZQThostFtdcTransferHeaderField *t = (CZQThostFtdcTransferHeaderField *)calloc(1, sizeof(CZQThostFtdcTransferHeaderField));
  memset(t,0,sizeof(CZQThostFtdcTransferHeaderField));
  //交易日期，必填，格式：yyyymmdd
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //交易代码，必填
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //期货公司代码，必填
  strcpy(t->FutureID, PyString_AsString(PyObject_GetAttrString(p, "FutureID")));
  //操作员，N/A
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //会话编号，N/A
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //版本号，常量，1.0
  strcpy(t->Version, PyString_AsString(PyObject_GetAttrString(p, "Version")));
  //交易时间，必填，格式：hhmmss
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易设备类型，N/A
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //银行分中心代码，根据查询银行得到，必填
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码，根据查询银行得到，必填
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //记录数，N/A
  strcpy(t->RecordNum, PyString_AsString(PyObject_GetAttrString(p, "RecordNum")));
  //发起方流水号，N/A
  strcpy(t->TradeSerial, PyString_AsString(PyObject_GetAttrString(p, "TradeSerial")));
  //请求编号，N/A
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//查询结算信息确认域
PyObject * new_CZQThostFtdcQrySettlementInfoConfirmField(CZQThostFtdcQrySettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQrySettlementInfoConfirmField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQrySettlementInfoConfirmField * from_CZQThostFtdcQrySettlementInfoConfirmField(PyObject * p){
  CZQThostFtdcQrySettlementInfoConfirmField *t = (CZQThostFtdcQrySettlementInfoConfirmField *)calloc(1, sizeof(CZQThostFtdcQrySettlementInfoConfirmField));
  memset(t,0,sizeof(CZQThostFtdcQrySettlementInfoConfirmField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//转帐销户请求
PyObject * new_CZQThostFtdcReqCancelAccountField(CZQThostFtdcReqCancelAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqCancelAccountField", (char*)"csssscisssisssssisiccssssscsccssssccscscsss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankSecuAcc, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->Gender, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest, p->DeviceID);
}
CZQThostFtdcReqCancelAccountField * from_CZQThostFtdcReqCancelAccountField(PyObject * p){
  CZQThostFtdcReqCancelAccountField *t = (CZQThostFtdcReqCancelAccountField *)calloc(1, sizeof(CZQThostFtdcReqCancelAccountField));
  memset(t,0,sizeof(CZQThostFtdcReqCancelAccountField));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //电话号码
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //传真
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //国家代码
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //地址
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //性别
  //enum类型
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Male -> '1', 男
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //汇钞标志
  //enum类型
  //THOST_FTDC_CEC_Exchange -> '1', 汇
  //THOST_FTDC_CEC_Cash -> '2', 钞
  t->CashExchangeCode =   PyString_AsString(PyObject_GetAttrString(p, "CashExchangeCode"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //手机
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //邮编
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //电子邮件
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));

  return t;
};

//查询合约
PyObject * new_CZQThostFtdcQryInstrumentField(CZQThostFtdcQryInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInstrumentField", (char*)"ssss",
p->InstrumentID, p->ExchangeID, p->ExchangeInstID, p->ProductID);
}
CZQThostFtdcQryInstrumentField * from_CZQThostFtdcQryInstrumentField(PyObject * p){
  CZQThostFtdcQryInstrumentField *t = (CZQThostFtdcQryInstrumentField *)calloc(1, sizeof(CZQThostFtdcQryInstrumentField));
  memset(t,0,sizeof(CZQThostFtdcQryInstrumentField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //产品代码
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//返回结果
PyObject * new_CZQThostFtdcReturnResultField(CZQThostFtdcReturnResultField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReturnResultField", (char*)"ss",
p->ReturnCode, p->DescrInfoForReturnCode);
}
CZQThostFtdcReturnResultField * from_CZQThostFtdcReturnResultField(PyObject * p){
  CZQThostFtdcReturnResultField *t = (CZQThostFtdcReturnResultField *)calloc(1, sizeof(CZQThostFtdcReturnResultField));
  memset(t,0,sizeof(CZQThostFtdcReturnResultField));
  //返回代码
  strcpy(t->ReturnCode, PyString_AsString(PyObject_GetAttrString(p, "ReturnCode")));
  //返回码描述
  strcpy(t->DescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "DescrInfoForReturnCode")));

  return t;
};

//验证期货资金密码和客户信息
PyObject * new_CZQThostFtdcVerifyFuturePasswordAndCustInfoField(CZQThostFtdcVerifyFuturePasswordAndCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcVerifyFuturePasswordAndCustInfoField", (char*)"cscsss",
p->CustType, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Password, p->AccountID);
}
CZQThostFtdcVerifyFuturePasswordAndCustInfoField * from_CZQThostFtdcVerifyFuturePasswordAndCustInfoField(PyObject * p){
  CZQThostFtdcVerifyFuturePasswordAndCustInfoField *t = (CZQThostFtdcVerifyFuturePasswordAndCustInfoField *)calloc(1, sizeof(CZQThostFtdcVerifyFuturePasswordAndCustInfoField));
  memset(t,0,sizeof(CZQThostFtdcVerifyFuturePasswordAndCustInfoField));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//期商签退请求
PyObject * new_CZQThostFtdcReqFutureSignOutField(CZQThostFtdcReqFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqFutureSignOutField", (char*)"isscssssssissssisissi",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->CurrencyID, p->Digest, p->RequestID);
}
CZQThostFtdcReqFutureSignOutField * from_CZQThostFtdcReqFutureSignOutField(PyObject * p){
  CZQThostFtdcReqFutureSignOutField *t = (CZQThostFtdcReqFutureSignOutField *)calloc(1, sizeof(CZQThostFtdcReqFutureSignOutField));
  memset(t,0,sizeof(CZQThostFtdcReqFutureSignOutField));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//用户口令变更
PyObject * new_CZQThostFtdcUserPasswordUpdateField(CZQThostFtdcUserPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcUserPasswordUpdateField", (char*)"ssss",
p->UserID, p->NewPassword, p->OldPassword, p->BrokerID);
}
CZQThostFtdcUserPasswordUpdateField * from_CZQThostFtdcUserPasswordUpdateField(PyObject * p){
  CZQThostFtdcUserPasswordUpdateField *t = (CZQThostFtdcUserPasswordUpdateField *)calloc(1, sizeof(CZQThostFtdcUserPasswordUpdateField));
  memset(t,0,sizeof(CZQThostFtdcUserPasswordUpdateField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //新的口令
  strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));
  //原来的口令
  strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//交易编码
PyObject * new_CZQThostFtdcTradingCodeField(CZQThostFtdcTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradingCodeField", (char*)"sssis",
p->InvestorID, p->ExchangeID, p->BrokerID, p->IsActive, p->ClientID);
}
CZQThostFtdcTradingCodeField * from_CZQThostFtdcTradingCodeField(PyObject * p){
  CZQThostFtdcTradingCodeField *t = (CZQThostFtdcTradingCodeField *)calloc(1, sizeof(CZQThostFtdcTradingCodeField));
  memset(t,0,sizeof(CZQThostFtdcTradingCodeField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//用户登录请求
PyObject * new_CZQThostFtdcReqUserLoginField(CZQThostFtdcReqUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqUserLoginField", (char*)"ssssssssss",
p->MacAddress, p->UserProductInfo, p->UserID, p->TradingDay, p->InterfaceProductInfo, p->BrokerID, p->ClientIPAddress, p->OneTimePassword, p->ProtocolInfo, p->Password);
}
CZQThostFtdcReqUserLoginField * from_CZQThostFtdcReqUserLoginField(PyObject * p){
  CZQThostFtdcReqUserLoginField *t = (CZQThostFtdcReqUserLoginField *)calloc(1, sizeof(CZQThostFtdcReqUserLoginField));
  memset(t,0,sizeof(CZQThostFtdcReqUserLoginField));
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

//正在同步中的合约手续费率
PyObject * new_CZQThostFtdcSyncingInstrumentCommissionRateField(CZQThostFtdcSyncingInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingInstrumentCommissionRateField", (char*)"scdddsddscddd",
p->InstrumentID, p->Direction, p->TradeFeeByMoney, p->MinTradeFee, p->StampTaxRateByMoney, p->InvestorID, p->MarginByMoney, p->StampTaxRateByVolume, p->BrokerID, p->InvestorRange, p->TransferFeeRateByVolume, p->TransferFeeRateByMoney, p->TradeFeeByVolume);
}
CZQThostFtdcSyncingInstrumentCommissionRateField * from_CZQThostFtdcSyncingInstrumentCommissionRateField(PyObject * p){
  CZQThostFtdcSyncingInstrumentCommissionRateField *t = (CZQThostFtdcSyncingInstrumentCommissionRateField *)calloc(1, sizeof(CZQThostFtdcSyncingInstrumentCommissionRateField));
  memset(t,0,sizeof(CZQThostFtdcSyncingInstrumentCommissionRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //交易费
  t->TradeFeeByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeFeeByMoney"));
  //最小过户费
  t->MinTradeFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MinTradeFee"));
  //印花税率
  t->StampTaxRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTaxRateByMoney"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易附加费率
  t->MarginByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginByMoney"));
  //印花税率(按手数)
  t->StampTaxRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTaxRateByVolume"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //过户费率(按手数)
  t->TransferFeeRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFeeRateByVolume"));
  //过户费率
  t->TransferFeeRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFeeRateByMoney"));
  //交易费(按手数)
  t->TradeFeeByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeFeeByVolume"));

  return t;
};

//指定的合约
PyObject * new_CZQThostFtdcSpecificInstrumentField(CZQThostFtdcSpecificInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSpecificInstrumentField", (char*)"ss",
p->InstrumentID, p->ExchangeID);
}
CZQThostFtdcSpecificInstrumentField * from_CZQThostFtdcSpecificInstrumentField(PyObject * p){
  CZQThostFtdcSpecificInstrumentField *t = (CZQThostFtdcSpecificInstrumentField *)calloc(1, sizeof(CZQThostFtdcSpecificInstrumentField));
  memset(t,0,sizeof(CZQThostFtdcSpecificInstrumentField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//查询错误报单
PyObject * new_CZQThostFtdcQryErrOrderField(CZQThostFtdcQryErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryErrOrderField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryErrOrderField * from_CZQThostFtdcQryErrOrderField(PyObject * p){
  CZQThostFtdcQryErrOrderField *t = (CZQThostFtdcQryErrOrderField *)calloc(1, sizeof(CZQThostFtdcQryErrOrderField));
  memset(t,0,sizeof(CZQThostFtdcQryErrOrderField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//管理用户
PyObject * new_CZQThostFtdcSuperUserField(CZQThostFtdcSuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSuperUserField", (char*)"sssi",
p->UserName, p->Password, p->UserID, p->IsActive);
}
CZQThostFtdcSuperUserField * from_CZQThostFtdcSuperUserField(PyObject * p){
  CZQThostFtdcSuperUserField *t = (CZQThostFtdcSuperUserField *)calloc(1, sizeof(CZQThostFtdcSuperUserField));
  memset(t,0,sizeof(CZQThostFtdcSuperUserField));
  //用户名称
  strcpy(t->UserName, PyString_AsString(PyObject_GetAttrString(p, "UserName")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//资金账户口令域
PyObject * new_CZQThostFtdcTradingAccountPasswordField(CZQThostFtdcTradingAccountPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradingAccountPasswordField", (char*)"sss",
p->Password, p->BrokerID, p->AccountID);
}
CZQThostFtdcTradingAccountPasswordField * from_CZQThostFtdcTradingAccountPasswordField(PyObject * p){
  CZQThostFtdcTradingAccountPasswordField *t = (CZQThostFtdcTradingAccountPasswordField *)calloc(1, sizeof(CZQThostFtdcTradingAccountPasswordField));
  memset(t,0,sizeof(CZQThostFtdcTradingAccountPasswordField));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//登录信息
PyObject * new_CZQThostFtdcLogoutAllField(CZQThostFtdcLogoutAllField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcLogoutAllField", (char*)"iis",
p->FrontID, p->SessionID, p->SystemName);
}
CZQThostFtdcLogoutAllField * from_CZQThostFtdcLogoutAllField(PyObject * p){
  CZQThostFtdcLogoutAllField *t = (CZQThostFtdcLogoutAllField *)calloc(1, sizeof(CZQThostFtdcLogoutAllField));
  memset(t,0,sizeof(CZQThostFtdcLogoutAllField));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //系统名称
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));

  return t;
};

//报单
PyObject * new_CZQThostFtdcOrderField(CZQThostFtdcOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcOrderField", (char*)"cisisssssisscisissiciccsciidssisiccsssssisssssssssisiscicds",
p->ContingentCondition, p->NotifySequence, p->ActiveUserID, p->VolumeTraded, p->UserProductInfo, p->CombOffsetFlag, p->TraderID, p->UserID, p->LimitPrice, p->UserForceClose, p->RelativeOrderSysID, p->AccountID, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->SessionID, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->IsETF, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->StatusMsg, p->SettlementID, p->ForceCloseReason, p->OrderType, p->UpdateTime, p->TradingDay, p->ActiveTime, p->BrokerID, p->InsertTime, p->FrontID, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BranchID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->VolumeCondition, p->RequestID, p->OrderSource, p->TradeAmount, p->ActiveTraderID);
}
CZQThostFtdcOrderField * from_CZQThostFtdcOrderField(PyObject * p){
  CZQThostFtdcOrderField *t = (CZQThostFtdcOrderField *)calloc(1, sizeof(CZQThostFtdcOrderField));
  memset(t,0,sizeof(CZQThostFtdcOrderField));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_Touch -> '2', 止损
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //报单提示序号
  t->NotifySequence =   PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //操作用户代码
  strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
  //今成交数量
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  strcpy(t->LimitPrice, PyString_AsString(PyObject_GetAttrString(p, "LimitPrice")));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //相关报单
  strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
  //资金帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //剩余数量
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_InactiveBNetPassSvrCode -> 'J', 注销B股网络密码服务代码
  //THOST_FTDC_OPT_Exercise -> 'U', 权证行权
  //THOST_FTDC_OPT_InactiveANetPassSvrCode -> 'H', 注销A股网络密码服务代码
  //THOST_FTDC_OPT_Designated -> 'M', 指定登记
  //THOST_FTDC_OPT_ShortAccToHostAcc -> 'i', 证券公司融券专用账户过户到证券公司自营账户
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_TenderOffer -> 'P', 要约收购登记
  //THOST_FTDC_OPT_SubscribingShares -> 'N', 证券参与申购
  //THOST_FTDC_OPT_RedemingFunds -> 'W', 开放式基金赎回
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_RedeemETF -> 'e', ETF赎回
  //THOST_FTDC_OPT_Ballot -> 'R', 证券投票
  //THOST_FTDC_OPT_ShortAccToCreditAcc -> 'f', 证券公司融券专用账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_PurchasesETF -> 'd', ETF申购
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_SubscribingFunds -> 'X', 开放式基金认购
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_ActiveBNetPassSvrCode -> 'I', 激活B股网络密码服务代码
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_CreditAccToShortAcc -> 'g', 证券公司信用交易担保证券账户过户到证券公司融券专用账户
  //THOST_FTDC_OPT_DesignatedCancel -> 'L', 指定撤销
  //THOST_FTDC_OPT_ConvertibleBondsRepurchase -> 'T', 可转债回售登记
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_ActiveANetPassSvrCode -> 'G', 激活A股网络密码服务代码
  //THOST_FTDC_OPT_LOFConvert -> 'a', 开放式基金转换为其他基金
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_Split -> 'O', 证券参与配股
  //THOST_FTDC_OPT_LOFSetBonusType -> 'Z', 开放式基金设置分红方式
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_InvAccToCreditAcc -> 'h', 投资者普通证券账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_TenderOfferCancel -> 'Q', 要约收购撤销
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_PurchasingFunds -> 'V', 开放式基金申购
  //THOST_FTDC_OPT_ConvertibleBondsConvet -> 'S', 可转债转换登记
  //THOST_FTDC_OPT_LOFIssue -> 'Y', 开放式基金转托管转出
  //THOST_FTDC_OPT_DebentureStockOut -> 'c', 债券出库
  //THOST_FTDC_OPT_DebentureStockIn -> 'b', 债券入库
  //THOST_FTDC_OPT_Repurchase -> 'K', 回购注销
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //报单状态
  //enum类型
  //THOST_FTDC_OST_NotTouched -> 'b', 尚未触发
  //THOST_FTDC_OST_NoTradeQueueing -> '3', 未成交还在队列中
  //THOST_FTDC_OST_AllTraded -> '0', 全部成交
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', 未成交不在队列中
  //THOST_FTDC_OST_Unknown -> 'a', 未知
  //THOST_FTDC_OST_PartTradedQueueing -> '1', 部分成交还在队列中
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', 部分成交不在队列中
  //THOST_FTDC_OST_Touched -> 'c', 已触发
  //THOST_FTDC_OST_Canceled -> '5', 撤单
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //报单提交状态
  //enum类型
  //THOST_FTDC_OSS_InsertSubmitted -> '0', 已经提交
  //THOST_FTDC_OSS_InsertRejected -> '4', 报单已经被拒绝
  //THOST_FTDC_OSS_CancelSubmitted -> '1', 撤单已经提交
  //THOST_FTDC_OSS_CancelRejected -> '5', 撤单已经被拒绝
  //THOST_FTDC_OSS_Accepted -> '3', 已经接受
  //THOST_FTDC_OSS_ModifySubmitted -> '2', 修改已经提交
  //THOST_FTDC_OSS_ModifyRejected -> '6', 改单已经被拒绝
  t->OrderSubmitStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
  //是否ETF
  t->IsETF =   PyInt_AsLong(PyObject_GetAttrString(p, "IsETF"));
  //自动挂起标志
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //状态信息
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //报单类型
  //enum类型
  //THOST_FTDC_ORDT_Combination -> '3', 组合报单
  //THOST_FTDC_ORDT_Normal -> '0', 正常
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', 组合衍生
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', 报价衍生
  //THOST_FTDC_ORDT_Swap -> '5', 互换单
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', 条件单
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //最后修改时间
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //激活时间
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //委托时间
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //挂起时间
  strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //撤销时间
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //GTD日期
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //报单日期
  strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
  //序号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //经纪公司报单编号
  t->BrokerOrderSeq =   PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //报单来源
  //enum类型
  //THOST_FTDC_OSRC_Participant -> '0', 来自参与者
  //THOST_FTDC_OSRC_Administrator -> '1', 来自管理员
  t->OrderSource =   PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
  //成交数量
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//变更银行账户请求
PyObject * new_CZQThostFtdcReqChangeAccountField(CZQThostFtdcReqChangeAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqChangeAccountField", (char*)"cssssscisssissssissiccsssscscssssccsscss",
p->MoneyAccountStatus, p->NewBankPassWord, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->NewBankAccount, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->TradingDay, p->Gender, p->BrokerID, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest);
}
CZQThostFtdcReqChangeAccountField * from_CZQThostFtdcReqChangeAccountField(PyObject * p){
  CZQThostFtdcReqChangeAccountField *t = (CZQThostFtdcReqChangeAccountField *)calloc(1, sizeof(CZQThostFtdcReqChangeAccountField));
  memset(t,0,sizeof(CZQThostFtdcReqChangeAccountField));
  //资金账户状态
  //enum类型
  //THOST_FTDC_MAS_Cancel -> '1', 销户
  //THOST_FTDC_MAS_Normal -> '0', 正常
  t->MoneyAccountStatus =   PyString_AsString(PyObject_GetAttrString(p, "MoneyAccountStatus"))[0];
  //新银行密码
  strcpy(t->NewBankPassWord, PyString_AsString(PyObject_GetAttrString(p, "NewBankPassWord")));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //电话号码
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //传真
  strcpy(t->Fax, PyString_AsString(PyObject_GetAttrString(p, "Fax")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //国家代码
  strcpy(t->CountryCode, PyString_AsString(PyObject_GetAttrString(p, "CountryCode")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //新银行帐号
  strcpy(t->NewBankAccount, PyString_AsString(PyObject_GetAttrString(p, "NewBankAccount")));
  //地址
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //性别
  //enum类型
  //THOST_FTDC_GD_Unknown -> '0', 未知状态
  //THOST_FTDC_GD_Female -> '2', 女
  //THOST_FTDC_GD_Male -> '1', 男
  t->Gender =   PyString_AsString(PyObject_GetAttrString(p, "Gender"))[0];
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //手机
  strcpy(t->MobilePhone, PyString_AsString(PyObject_GetAttrString(p, "MobilePhone")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //邮编
  strcpy(t->ZipCode, PyString_AsString(PyObject_GetAttrString(p, "ZipCode")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //电子邮件
  strcpy(t->EMail, PyString_AsString(PyObject_GetAttrString(p, "EMail")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询前置状态
PyObject * new_CZQThostFtdcQryFrontStatusField(CZQThostFtdcQryFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryFrontStatusField", (char*)"i",
p->FrontID);
}
CZQThostFtdcQryFrontStatusField * from_CZQThostFtdcQryFrontStatusField(PyObject * p){
  CZQThostFtdcQryFrontStatusField *t = (CZQThostFtdcQryFrontStatusField *)calloc(1, sizeof(CZQThostFtdcQryFrontStatusField));
  memset(t,0,sizeof(CZQThostFtdcQryFrontStatusField));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//客户最大持仓数量
PyObject * new_CZQThostFtdcMaxStockPositionAmountField(CZQThostFtdcMaxStockPositionAmountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMaxStockPositionAmountField", (char*)"sssi",
p->InstrumentID, p->InvestorID, p->BrokerID, p->MaxAmount);
}
CZQThostFtdcMaxStockPositionAmountField * from_CZQThostFtdcMaxStockPositionAmountField(PyObject * p){
  CZQThostFtdcMaxStockPositionAmountField *t = (CZQThostFtdcMaxStockPositionAmountField *)calloc(1, sizeof(CZQThostFtdcMaxStockPositionAmountField));
  memset(t,0,sizeof(CZQThostFtdcMaxStockPositionAmountField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //最大持仓数量
  t->MaxAmount =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxAmount"));

  return t;
};

//期商签退通知
PyObject * new_CZQThostFtdcNotifyFutureSignOutField(CZQThostFtdcNotifyFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcNotifyFutureSignOutField", (char*)"sssiissisiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CZQThostFtdcNotifyFutureSignOutField * from_CZQThostFtdcNotifyFutureSignOutField(PyObject * p){
  CZQThostFtdcNotifyFutureSignOutField *t = (CZQThostFtdcNotifyFutureSignOutField *)calloc(1, sizeof(CZQThostFtdcNotifyFutureSignOutField));
  memset(t,0,sizeof(CZQThostFtdcNotifyFutureSignOutField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询组合持仓明细
PyObject * new_CZQThostFtdcQryInvestorPositionCombineDetailField(CZQThostFtdcQryInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInvestorPositionCombineDetailField", (char*)"sss",
p->InvestorID, p->BrokerID, p->CombInstrumentID);
}
CZQThostFtdcQryInvestorPositionCombineDetailField * from_CZQThostFtdcQryInvestorPositionCombineDetailField(PyObject * p){
  CZQThostFtdcQryInvestorPositionCombineDetailField *t = (CZQThostFtdcQryInvestorPositionCombineDetailField *)calloc(1, sizeof(CZQThostFtdcQryInvestorPositionCombineDetailField));
  memset(t,0,sizeof(CZQThostFtdcQryInvestorPositionCombineDetailField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //组合持仓合约编码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//经纪公司可提资金算法表
PyObject * new_CZQThostFtdcBrokerWithdrawAlgorithmField(CZQThostFtdcBrokerWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerWithdrawAlgorithmField", (char*)"cicdscc",
p->IncludeCloseProfit, p->IsBrokerUserEvent, p->AvailIncludeCloseProfit, p->UsingRatio, p->BrokerID, p->AllWithoutTrade, p->WithdrawAlgorithm);
}
CZQThostFtdcBrokerWithdrawAlgorithmField * from_CZQThostFtdcBrokerWithdrawAlgorithmField(PyObject * p){
  CZQThostFtdcBrokerWithdrawAlgorithmField *t = (CZQThostFtdcBrokerWithdrawAlgorithmField *)calloc(1, sizeof(CZQThostFtdcBrokerWithdrawAlgorithmField));
  memset(t,0,sizeof(CZQThostFtdcBrokerWithdrawAlgorithmField));
  //可提是否包含平仓盈利
  //enum类型
  //THOST_FTDC_ICP_NotInclude -> '2', 不包含平仓盈利
  //THOST_FTDC_ICP_Include -> '0', 包含平仓盈利
  t->IncludeCloseProfit =   PyString_AsString(PyObject_GetAttrString(p, "IncludeCloseProfit"))[0];
  //是否启用用户事件
  t->IsBrokerUserEvent =   PyInt_AsLong(PyObject_GetAttrString(p, "IsBrokerUserEvent"));
  //可用是否包含平仓盈利
  //enum类型
  //THOST_FTDC_ICP_NotInclude -> '2', 不包含平仓盈利
  //THOST_FTDC_ICP_Include -> '0', 包含平仓盈利
  t->AvailIncludeCloseProfit =   PyString_AsString(PyObject_GetAttrString(p, "AvailIncludeCloseProfit"))[0];
  //资金使用率
  t->UsingRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UsingRatio"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //本日无仓且无成交客户是否受可提比例限制
  //enum类型
  //THOST_FTDC_AWT_Enable -> '0', 不受可提比例限制
  //THOST_FTDC_AWT_Disable -> '2', 受可提比例限制
  t->AllWithoutTrade =   PyString_AsString(PyObject_GetAttrString(p, "AllWithoutTrade"))[0];
  //可提资金算法
  //enum类型
  //THOST_FTDC_AG_OnlyLost -> '2', 浮盈不计，浮亏计
  //THOST_FTDC_AG_None -> '4', 浮盈浮亏都不计算
  //THOST_FTDC_AG_All -> '1', 浮盈浮亏都计算
  //THOST_FTDC_AG_OnlyGain -> '3', 浮盈计，浮亏不计
  t->WithdrawAlgorithm =   PyString_AsString(PyObject_GetAttrString(p, "WithdrawAlgorithm"))[0];

  return t;
};

//产品
PyObject * new_CZQThostFtdcProductField(CZQThostFtdcProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcProductField", (char*)"isciidsicicis",
p->MaxLimitOrderVolume, p->ExchangeID, p->PositionDateType, p->MinLimitOrderVolume, p->MaxMarketOrderVolume, p->PriceTick, p->ProductName, p->VolumeMultiple, p->PositionType, p->MinMarketOrderVolume, p->ProductClass, p->EFTMinTradeVolume, p->ProductID);
}
CZQThostFtdcProductField * from_CZQThostFtdcProductField(PyObject * p){
  CZQThostFtdcProductField *t = (CZQThostFtdcProductField *)calloc(1, sizeof(CZQThostFtdcProductField));
  memset(t,0,sizeof(CZQThostFtdcProductField));
  //限价单最大下单量
  t->MaxLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //持仓日期类型
  //enum类型
  //THOST_FTDC_PDT_UseHistory -> '1', 使用历史持仓
  //THOST_FTDC_PDT_NoUseHistory -> '2', 不使用历史持仓
  t->PositionDateType =   PyString_AsString(PyObject_GetAttrString(p, "PositionDateType"))[0];
  //限价单最小下单量
  t->MinLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
  //市价单最大下单量
  t->MaxMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
  //最小变动价位
  t->PriceTick =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
  //产品名称
  strcpy(t->ProductName, PyString_AsString(PyObject_GetAttrString(p, "ProductName")));
  //合约数量乘数
  t->VolumeMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
  //持仓类型
  //enum类型
  //THOST_FTDC_PT_Net -> '1', 净持仓
  //THOST_FTDC_PT_Gross -> '2', 综合持仓
  t->PositionType =   PyString_AsString(PyObject_GetAttrString(p, "PositionType"))[0];
  //市价单最小下单量
  t->MinMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
  //产品类型
  //enum类型
  //THOST_FTDC_PC_Combination -> '3', 组合
  //THOST_FTDC_PC_StockB -> '7', 证券B股
  //THOST_FTDC_PC_Futures -> '1', 期货
  //THOST_FTDC_PC_Options -> '2', 期权
  //THOST_FTDC_PC_ETF -> '8', ETF
  //THOST_FTDC_PC_Spot -> '4', 即期
  //THOST_FTDC_PC_StockA -> '6', 证券A股
  //THOST_FTDC_PC_EFP -> '5', 期转现
  //THOST_FTDC_PC_ETFPurRed -> '9', ETF申赎
  t->ProductClass =   PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
  //ETF最小交易单位
  t->EFTMinTradeVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "EFTMinTradeVolume"));
  //产品代码
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//交易所报单
PyObject * new_CZQThostFtdcExchangeOrderField(CZQThostFtdcExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeOrderField", (char*)"ciissscisissicccscidsiiccssscssssssssssicis",
p->ContingentCondition, p->NotifySequence, p->VolumeTraded, p->CombOffsetFlag, p->TraderID, p->LimitPrice, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->IsAutoSuspend, p->StopPrice, p->ExchangeID, p->MinVolume, p->SettlementID, p->ForceCloseReason, p->OrderType, p->UpdateTime, p->TradingDay, p->ActiveTime, p->OrderSource, p->InsertTime, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BranchID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->VolumeCondition, p->RequestID, p->ActiveTraderID);
}
CZQThostFtdcExchangeOrderField * from_CZQThostFtdcExchangeOrderField(PyObject * p){
  CZQThostFtdcExchangeOrderField *t = (CZQThostFtdcExchangeOrderField *)calloc(1, sizeof(CZQThostFtdcExchangeOrderField));
  memset(t,0,sizeof(CZQThostFtdcExchangeOrderField));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_Touch -> '2', 止损
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //报单提示序号
  t->NotifySequence =   PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //今成交数量
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //价格
  strcpy(t->LimitPrice, PyString_AsString(PyObject_GetAttrString(p, "LimitPrice")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //剩余数量
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_InactiveBNetPassSvrCode -> 'J', 注销B股网络密码服务代码
  //THOST_FTDC_OPT_Exercise -> 'U', 权证行权
  //THOST_FTDC_OPT_InactiveANetPassSvrCode -> 'H', 注销A股网络密码服务代码
  //THOST_FTDC_OPT_Designated -> 'M', 指定登记
  //THOST_FTDC_OPT_ShortAccToHostAcc -> 'i', 证券公司融券专用账户过户到证券公司自营账户
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_TenderOffer -> 'P', 要约收购登记
  //THOST_FTDC_OPT_SubscribingShares -> 'N', 证券参与申购
  //THOST_FTDC_OPT_RedemingFunds -> 'W', 开放式基金赎回
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_RedeemETF -> 'e', ETF赎回
  //THOST_FTDC_OPT_Ballot -> 'R', 证券投票
  //THOST_FTDC_OPT_ShortAccToCreditAcc -> 'f', 证券公司融券专用账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_PurchasesETF -> 'd', ETF申购
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_SubscribingFunds -> 'X', 开放式基金认购
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_ActiveBNetPassSvrCode -> 'I', 激活B股网络密码服务代码
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_CreditAccToShortAcc -> 'g', 证券公司信用交易担保证券账户过户到证券公司融券专用账户
  //THOST_FTDC_OPT_DesignatedCancel -> 'L', 指定撤销
  //THOST_FTDC_OPT_ConvertibleBondsRepurchase -> 'T', 可转债回售登记
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_ActiveANetPassSvrCode -> 'G', 激活A股网络密码服务代码
  //THOST_FTDC_OPT_LOFConvert -> 'a', 开放式基金转换为其他基金
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_Split -> 'O', 证券参与配股
  //THOST_FTDC_OPT_LOFSetBonusType -> 'Z', 开放式基金设置分红方式
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_InvAccToCreditAcc -> 'h', 投资者普通证券账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_TenderOfferCancel -> 'Q', 要约收购撤销
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_PurchasingFunds -> 'V', 开放式基金申购
  //THOST_FTDC_OPT_ConvertibleBondsConvet -> 'S', 可转债转换登记
  //THOST_FTDC_OPT_LOFIssue -> 'Y', 开放式基金转托管转出
  //THOST_FTDC_OPT_DebentureStockOut -> 'c', 债券出库
  //THOST_FTDC_OPT_DebentureStockIn -> 'b', 债券入库
  //THOST_FTDC_OPT_Repurchase -> 'K', 回购注销
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //报单状态
  //enum类型
  //THOST_FTDC_OST_NotTouched -> 'b', 尚未触发
  //THOST_FTDC_OST_NoTradeQueueing -> '3', 未成交还在队列中
  //THOST_FTDC_OST_AllTraded -> '0', 全部成交
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', 未成交不在队列中
  //THOST_FTDC_OST_Unknown -> 'a', 未知
  //THOST_FTDC_OST_PartTradedQueueing -> '1', 部分成交还在队列中
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', 部分成交不在队列中
  //THOST_FTDC_OST_Touched -> 'c', 已触发
  //THOST_FTDC_OST_Canceled -> '5', 撤单
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //报单提交状态
  //enum类型
  //THOST_FTDC_OSS_InsertSubmitted -> '0', 已经提交
  //THOST_FTDC_OSS_InsertRejected -> '4', 报单已经被拒绝
  //THOST_FTDC_OSS_CancelSubmitted -> '1', 撤单已经提交
  //THOST_FTDC_OSS_CancelRejected -> '5', 撤单已经被拒绝
  //THOST_FTDC_OSS_Accepted -> '3', 已经接受
  //THOST_FTDC_OSS_ModifySubmitted -> '2', 修改已经提交
  //THOST_FTDC_OSS_ModifyRejected -> '6', 改单已经被拒绝
  t->OrderSubmitStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
  //自动挂起标志
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //报单类型
  //enum类型
  //THOST_FTDC_ORDT_Combination -> '3', 组合报单
  //THOST_FTDC_ORDT_Normal -> '0', 正常
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', 组合衍生
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', 报价衍生
  //THOST_FTDC_ORDT_Swap -> '5', 互换单
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', 条件单
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //最后修改时间
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //激活时间
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //报单来源
  //enum类型
  //THOST_FTDC_OSRC_Participant -> '0', 来自参与者
  //THOST_FTDC_OSRC_Administrator -> '1', 来自管理员
  t->OrderSource =   PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
  //委托时间
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //挂起时间
  strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //撤销时间
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //GTD日期
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //报单日期
  strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
  //序号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//删除预埋撤单
PyObject * new_CZQThostFtdcRemoveParkedOrderActionField(CZQThostFtdcRemoveParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRemoveParkedOrderActionField", (char*)"sss",
p->InvestorID, p->BrokerID, p->ParkedOrderActionID);
}
CZQThostFtdcRemoveParkedOrderActionField * from_CZQThostFtdcRemoveParkedOrderActionField(PyObject * p){
  CZQThostFtdcRemoveParkedOrderActionField *t = (CZQThostFtdcRemoveParkedOrderActionField *)calloc(1, sizeof(CZQThostFtdcRemoveParkedOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcRemoveParkedOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //预埋撤单编号
  strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));

  return t;
};

//当前时间
PyObject * new_CZQThostFtdcCurrentTimeField(CZQThostFtdcCurrentTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcCurrentTimeField", (char*)"ssi",
p->CurrTime, p->CurrDate, p->CurrMillisec);
}
CZQThostFtdcCurrentTimeField * from_CZQThostFtdcCurrentTimeField(PyObject * p){
  CZQThostFtdcCurrentTimeField *t = (CZQThostFtdcCurrentTimeField *)calloc(1, sizeof(CZQThostFtdcCurrentTimeField));
  memset(t,0,sizeof(CZQThostFtdcCurrentTimeField));
  //当前时间
  strcpy(t->CurrTime, PyString_AsString(PyObject_GetAttrString(p, "CurrTime")));
  //当前日期
  strcpy(t->CurrDate, PyString_AsString(PyObject_GetAttrString(p, "CurrDate")));
  //当前时间（毫秒）
  t->CurrMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "CurrMillisec"));

  return t;
};

//查询成交
PyObject * new_CZQThostFtdcQryTradeField(CZQThostFtdcQryTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTradeField", (char*)"sssssss",
p->InstrumentID, p->TradeTimeStart, p->ExchangeID, p->TradeID, p->InvestorID, p->BrokerID, p->TradeTimeEnd);
}
CZQThostFtdcQryTradeField * from_CZQThostFtdcQryTradeField(PyObject * p){
  CZQThostFtdcQryTradeField *t = (CZQThostFtdcQryTradeField *)calloc(1, sizeof(CZQThostFtdcQryTradeField));
  memset(t,0,sizeof(CZQThostFtdcQryTradeField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //开始时间
  strcpy(t->TradeTimeStart, PyString_AsString(PyObject_GetAttrString(p, "TradeTimeStart")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //成交编号
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //结束时间
  strcpy(t->TradeTimeEnd, PyString_AsString(PyObject_GetAttrString(p, "TradeTimeEnd")));

  return t;
};

//投资者结算结果
PyObject * new_CZQThostFtdcSettlementInfoField(CZQThostFtdcSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSettlementInfoField", (char*)"isisss",
p->SettlementID, p->InvestorID, p->SequenceNo, p->Content, p->TradingDay, p->BrokerID);
}
CZQThostFtdcSettlementInfoField * from_CZQThostFtdcSettlementInfoField(PyObject * p){
  CZQThostFtdcSettlementInfoField *t = (CZQThostFtdcSettlementInfoField *)calloc(1, sizeof(CZQThostFtdcSettlementInfoField));
  memset(t,0,sizeof(CZQThostFtdcSettlementInfoField));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //序号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //消息正文
  strcpy(t->Content, PyString_AsString(PyObject_GetAttrString(p, "Content")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//深度行情
PyObject * new_CZQThostFtdcDepthMarketDataField(CZQThostFtdcDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcDepthMarketDataField", (char*)"ddddddddddddddisidiiiiddiiiiidisdssddddddsd",
p->HighestPrice, p->BidPrice5, p->BidPrice4, p->BidPrice1, p->BidPrice3, p->BidPrice2, p->LowerLimitPrice, p->OpenPrice, p->AskPrice5, p->AskPrice4, p->AskPrice3, p->PreClosePrice, p->AskPrice1, p->PreSettlementPrice, p->AskVolume1, p->UpdateTime, p->UpdateMillisec, p->AveragePrice, p->BidVolume5, p->BidVolume4, p->BidVolume3, p->BidVolume2, p->PreOpenInterest, p->AskPrice2, p->Volume, p->AskVolume3, p->AskVolume2, p->AskVolume5, p->AskVolume4, p->UpperLimitPrice, p->BidVolume1, p->InstrumentID, p->ClosePrice, p->ExchangeID, p->TradingDay, p->PreDelta, p->OpenInterest, p->CurrDelta, p->Turnover, p->LastPrice, p->SettlementPrice, p->ExchangeInstID, p->LowestPrice);
}
CZQThostFtdcDepthMarketDataField * from_CZQThostFtdcDepthMarketDataField(PyObject * p){
  CZQThostFtdcDepthMarketDataField *t = (CZQThostFtdcDepthMarketDataField *)calloc(1, sizeof(CZQThostFtdcDepthMarketDataField));
  memset(t,0,sizeof(CZQThostFtdcDepthMarketDataField));
  //最高价
  t->HighestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "HighestPrice"));
  //申买价五
  t->BidPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice5"));
  //申买价四
  t->BidPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice4"));
  //申买价一
  t->BidPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice1"));
  //申买价三
  t->BidPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));
  //申买价二
  t->BidPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));
  //跌停板价
  t->LowerLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowerLimitPrice"));
  //今开盘
  t->OpenPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenPrice"));
  //申卖价五
  t->AskPrice5 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice5"));
  //申卖价四
  t->AskPrice4 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice4"));
  //申卖价三
  t->AskPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));
  //昨收盘
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //申卖价一
  t->AskPrice1 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice1"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //申卖量一
  t->AskVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume1"));
  //最后修改时间
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //最后修改毫秒
  t->UpdateMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));
  //当日均价
  t->AveragePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));
  //申买量五
  t->BidVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume5"));
  //申买量四
  t->BidVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume4"));
  //申买量三
  t->BidVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume3"));
  //申买量二
  t->BidVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
  //昨持仓量
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //申卖价二
  t->AskPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //申卖量三
  t->AskVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume3"));
  //申卖量二
  t->AskVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
  //申卖量五
  t->AskVolume5 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume5"));
  //申卖量四
  t->AskVolume4 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume4"));
  //涨停板价
  t->UpperLimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UpperLimitPrice"));
  //申买量一
  t->BidVolume1 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume1"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //今收盘
  t->ClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ClosePrice"));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //昨虚实度
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //持仓量
  t->OpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenInterest"));
  //今虚实度
  t->CurrDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrDelta"));
  //成交金额
  t->Turnover =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Turnover"));
  //最新价
  t->LastPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LastPrice"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //最低价
  t->LowestPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LowestPrice"));

  return t;
};

//交易核心向银期报盘发出密钥同步请求
PyObject * new_CZQThostFtdcReqSyncKeyField(CZQThostFtdcReqSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqSyncKeyField", (char*)"isscssssssissssissii",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->Message, p->PlateSerial, p->RequestID);
}
CZQThostFtdcReqSyncKeyField * from_CZQThostFtdcReqSyncKeyField(PyObject * p){
  CZQThostFtdcReqSyncKeyField *t = (CZQThostFtdcReqSyncKeyField *)calloc(1, sizeof(CZQThostFtdcReqSyncKeyField));
  memset(t,0,sizeof(CZQThostFtdcReqSyncKeyField));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易核心给银期报盘的消息
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//银行发起银行资金转期货响应
PyObject * new_CZQThostFtdcRspTransferField(CZQThostFtdcRspTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspTransferField", (char*)"sssscississsissciicscssssssccidssdcciscscsdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->IdCardType, p->PlateSerial, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->ErrorMsg, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CZQThostFtdcRspTransferField * from_CZQThostFtdcRspTransferField(PyObject * p){
  CZQThostFtdcRspTransferField *t = (CZQThostFtdcRspTransferField *)calloc(1, sizeof(CZQThostFtdcRspTransferField));
  memset(t,0,sizeof(CZQThostFtdcRspTransferField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //发送方给接收方的消息
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//会员编码和经纪公司编码对照表
PyObject * new_CZQThostFtdcPartBrokerField(CZQThostFtdcPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcPartBrokerField", (char*)"sssi",
p->ExchangeID, p->BrokerID, p->ParticipantID, p->IsActive);
}
CZQThostFtdcPartBrokerField * from_CZQThostFtdcPartBrokerField(PyObject * p){
  CZQThostFtdcPartBrokerField *t = (CZQThostFtdcPartBrokerField *)calloc(1, sizeof(CZQThostFtdcPartBrokerField));
  memset(t,0,sizeof(CZQThostFtdcPartBrokerField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//查询交易员
PyObject * new_CZQThostFtdcQryTraderField(CZQThostFtdcQryTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTraderField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
CZQThostFtdcQryTraderField * from_CZQThostFtdcQryTraderField(PyObject * p){
  CZQThostFtdcQryTraderField *t = (CZQThostFtdcQryTraderField *)calloc(1, sizeof(CZQThostFtdcQryTraderField));
  memset(t,0,sizeof(CZQThostFtdcQryTraderField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//查询银行资金请求响应
PyObject * new_CZQThostFtdcTransferQryBankRspField(CZQThostFtdcTransferQryBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferQryBankRspField", (char*)"sssddsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->UseAmt, p->RetInfo, p->FetchAmt);
}
CZQThostFtdcTransferQryBankRspField * from_CZQThostFtdcTransferQryBankRspField(PyObject * p){
  CZQThostFtdcTransferQryBankRspField *t = (CZQThostFtdcTransferQryBankRspField *)calloc(1, sizeof(CZQThostFtdcTransferQryBankRspField));
  memset(t,0,sizeof(CZQThostFtdcTransferQryBankRspField));
  //资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));
  //响应代码
  strcpy(t->RetCode, PyString_AsString(PyObject_GetAttrString(p, "RetCode")));
  //币种
  strcpy(t->CurrencyCode, PyString_AsString(PyObject_GetAttrString(p, "CurrencyCode")));
  //银行余额
  t->TradeAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmt"));
  //银行可用余额
  t->UseAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseAmt"));
  //响应信息
  strcpy(t->RetInfo, PyString_AsString(PyObject_GetAttrString(p, "RetInfo")));
  //银行可取余额
  t->FetchAmt =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FetchAmt"));

  return t;
};

//交易所报单操作
PyObject * new_CZQThostFtdcExchangeOrderActionField(CZQThostFtdcExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeOrderActionField", (char*)"sssssssssisidcsc",
p->ActionDate, p->ExchangeID, p->ActionTime, p->ParticipantID, p->OrderLocalID, p->BranchID, p->BusinessUnit, p->TraderID, p->UserID, p->VolumeChange, p->ActionLocalID, p->InstallID, p->LimitPrice, p->ActionFlag, p->ClientID, p->OrderActionStatus);
}
CZQThostFtdcExchangeOrderActionField * from_CZQThostFtdcExchangeOrderActionField(PyObject * p){
  CZQThostFtdcExchangeOrderActionField *t = (CZQThostFtdcExchangeOrderActionField *)calloc(1, sizeof(CZQThostFtdcExchangeOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcExchangeOrderActionField));
  //操作日期
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //操作时间
  strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //数量变化
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //操作本地编号
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];

  return t;
};

//查询账户信息通知
PyObject * new_CZQThostFtdcNotifyQueryAccountField(CZQThostFtdcNotifyQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcNotifyQueryAccountField", (char*)"sssscississsissciicsssssssdcisssccicscsd",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->BankUseAmount, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest, p->BankFetchAmount);
}
CZQThostFtdcNotifyQueryAccountField * from_CZQThostFtdcNotifyQueryAccountField(PyObject * p){
  CZQThostFtdcNotifyQueryAccountField *t = (CZQThostFtdcNotifyQueryAccountField *)calloc(1, sizeof(CZQThostFtdcNotifyQueryAccountField));
  memset(t,0,sizeof(CZQThostFtdcNotifyQueryAccountField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //银行可用金额
  t->BankUseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //银行可取金额
  t->BankFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));

  return t;
};

//查询账户信息响应
PyObject * new_CZQThostFtdcRspQueryAccountField(CZQThostFtdcRspQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspQueryAccountField", (char*)"sssscississsisscicsssssssdcissccicscsd",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->BankUseAmount, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest, p->BankFetchAmount);
}
CZQThostFtdcRspQueryAccountField * from_CZQThostFtdcRspQueryAccountField(PyObject * p){
  CZQThostFtdcRspQueryAccountField *t = (CZQThostFtdcRspQueryAccountField *)calloc(1, sizeof(CZQThostFtdcRspQueryAccountField));
  memset(t,0,sizeof(CZQThostFtdcRspQueryAccountField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //银行可用金额
  t->BankUseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankUseAmount"));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));
  //银行可取金额
  t->BankFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BankFetchAmount"));

  return t;
};

//装载结算信息
PyObject * new_CZQThostFtdcLoadSettlementInfoField(CZQThostFtdcLoadSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcLoadSettlementInfoField", (char*)"s",
p->BrokerID);
}
CZQThostFtdcLoadSettlementInfoField * from_CZQThostFtdcLoadSettlementInfoField(PyObject * p){
  CZQThostFtdcLoadSettlementInfoField *t = (CZQThostFtdcLoadSettlementInfoField *)calloc(1, sizeof(CZQThostFtdcLoadSettlementInfoField));
  memset(t,0,sizeof(CZQThostFtdcLoadSettlementInfoField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//资金账户口令变更域
PyObject * new_CZQThostFtdcTradingAccountPasswordUpdateV1Field(CZQThostFtdcTradingAccountPasswordUpdateV1Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradingAccountPasswordUpdateV1Field", (char*)"ssss",
p->InvestorID, p->NewPassword, p->OldPassword, p->BrokerID);
}
CZQThostFtdcTradingAccountPasswordUpdateV1Field * from_CZQThostFtdcTradingAccountPasswordUpdateV1Field(PyObject * p){
  CZQThostFtdcTradingAccountPasswordUpdateV1Field *t = (CZQThostFtdcTradingAccountPasswordUpdateV1Field *)calloc(1, sizeof(CZQThostFtdcTradingAccountPasswordUpdateV1Field));
  memset(t,0,sizeof(CZQThostFtdcTradingAccountPasswordUpdateV1Field));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //新的口令
  strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));
  //原来的口令
  strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//冲正响应
PyObject * new_CZQThostFtdcRspRepealField(CZQThostFtdcRspRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspRepealField", (char*)"ssscisciissicsssisiciicscsssssscccsdssdccissicsisdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->BankRepealFlag, p->RepealedTimes, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->FutureRepealSerial, p->AccountID, p->BankAccount, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->BrokerRepealFlag, p->IdCardType, p->Password, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankRepealSerial, p->ErrorMsg, p->RepealTimeInterval, p->BankSecuAccType, p->BrokerIDByBank, p->PlateRepealSerial, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CZQThostFtdcRspRepealField * from_CZQThostFtdcRspRepealField(PyObject * p){
  CZQThostFtdcRspRepealField *t = (CZQThostFtdcRspRepealField *)calloc(1, sizeof(CZQThostFtdcRspRepealField));
  memset(t,0,sizeof(CZQThostFtdcRspRepealField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //银行冲正标志
  //enum类型
  //THOST_FTDC_BRF_BankWaitingRepeal -> '1', 银行待自动冲正
  //THOST_FTDC_BRF_BankNotNeedRepeal -> '0', 银行无需自动冲正
  //THOST_FTDC_BRF_BankBeenRepealed -> '2', 银行已自动冲正
  t->BankRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankRepealFlag"))[0];
  //已经冲正次数
  t->RepealedTimes =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealedTimes"));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //验证客户证件号码标志
  //enum类型
  //THOST_FTDC_YNI_No -> '1', 否
  //THOST_FTDC_YNI_Yes -> '0', 是
  t->VerifyCertNoFlag =   PyString_AsString(PyObject_GetAttrString(p, "VerifyCertNoFlag"))[0];
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //被冲正期货流水号
  t->FutureRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureRepealSerial"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //期货资金密码核对标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->SecuPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "SecuPwdFlag"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //银行密码标志
  //enum类型
  //THOST_FTDC_BPWDF_BlankCheck -> '1', 明文核对
  //THOST_FTDC_BPWDF_NoCheck -> '0', 不核对
  //THOST_FTDC_BPWDF_EncryptCheck -> '2', 密文核对
  t->BankPwdFlag =   PyString_AsString(PyObject_GetAttrString(p, "BankPwdFlag"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //费用支付标志
  //enum类型
  //THOST_FTDC_FPF_BEN -> '0', 由受益方支付费用
  //THOST_FTDC_FPF_SHA -> '2', 由发送方支付发起的费用，受益方支付接受的费用
  //THOST_FTDC_FPF_OUR -> '1', 由发送方支付费用
  t->FeePayFlag =   PyString_AsString(PyObject_GetAttrString(p, "FeePayFlag"))[0];
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期货单位帐号
  strcpy(t->BankSecuAcc, PyString_AsString(PyObject_GetAttrString(p, "BankSecuAcc")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //转账交易状态
  //enum类型
  //THOST_FTDC_TRFS_Normal -> '0', 正常
  //THOST_FTDC_TRFS_Repealed -> '1', 被冲正
  t->TransferStatus =   PyString_AsString(PyObject_GetAttrString(p, "TransferStatus"))[0];
  //期商冲正标志
  //enum类型
  //THOST_FTDC_BRORF_BrokerNotNeedRepeal -> '0', 期商无需自动冲正
  //THOST_FTDC_BRORF_BrokerBeenRepealed -> '2', 期商已自动冲正
  //THOST_FTDC_BRORF_BrokerWaitingRepeal -> '1', 期商待自动冲正
  t->BrokerRepealFlag =   PyString_AsString(PyObject_GetAttrString(p, "BrokerRepealFlag"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //期货可取金额
  t->FutureFetchAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FutureFetchAmount"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //应收期货公司费用
  t->BrokerFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BrokerFee"));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //期货公司流水号
  t->FutureSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "FutureSerial"));
  //被冲正银行流水号
  strcpy(t->BankRepealSerial, PyString_AsString(PyObject_GetAttrString(p, "BankRepealSerial")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //冲正时间间隔
  t->RepealTimeInterval =   PyInt_AsLong(PyObject_GetAttrString(p, "RepealTimeInterval"));
  //期货单位帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankSecuAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankSecuAccType"))[0];
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //被冲正平台流水号
  t->PlateRepealSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateRepealSerial"));
  //发送方给接收方的消息
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));
  //应收客户费用
  t->CustFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CustFee"));
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询预埋撤单
PyObject * new_CZQThostFtdcQryParkedOrderActionField(CZQThostFtdcQryParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryParkedOrderActionField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
CZQThostFtdcQryParkedOrderActionField * from_CZQThostFtdcQryParkedOrderActionField(PyObject * p){
  CZQThostFtdcQryParkedOrderActionField *t = (CZQThostFtdcQryParkedOrderActionField *)calloc(1, sizeof(CZQThostFtdcQryParkedOrderActionField));
  memset(t,0,sizeof(CZQThostFtdcQryParkedOrderActionField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//验证期货资金密码和客户信息
PyObject * new_CZQThostFtdcDepositResultInformField(CZQThostFtdcDepositResultInformField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcDepositResultInformField", (char*)"ssssdsi",
p->ReturnCode, p->DepositSeqNo, p->InvestorID, p->BrokerID, p->Deposit, p->DescrInfoForReturnCode, p->RequestID);
}
CZQThostFtdcDepositResultInformField * from_CZQThostFtdcDepositResultInformField(PyObject * p){
  CZQThostFtdcDepositResultInformField *t = (CZQThostFtdcDepositResultInformField *)calloc(1, sizeof(CZQThostFtdcDepositResultInformField));
  memset(t,0,sizeof(CZQThostFtdcDepositResultInformField));
  //返回代码
  strcpy(t->ReturnCode, PyString_AsString(PyObject_GetAttrString(p, "ReturnCode")));
  //出入金流水号，该流水号为银期报盘返回的流水号
  strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //返回码描述
  strcpy(t->DescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "DescrInfoForReturnCode")));
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//查询产品
PyObject * new_CZQThostFtdcQryProductField(CZQThostFtdcQryProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryProductField", (char*)"s",
p->ProductID);
}
CZQThostFtdcQryProductField * from_CZQThostFtdcQryProductField(PyObject * p){
  CZQThostFtdcQryProductField *t = (CZQThostFtdcQryProductField *)calloc(1, sizeof(CZQThostFtdcQryProductField));
  memset(t,0,sizeof(CZQThostFtdcQryProductField));
  //产品代码
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//查询交易所报单
PyObject * new_CZQThostFtdcQryExchangeOrderField(CZQThostFtdcQryExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryExchangeOrderField", (char*)"sssss",
p->ExchangeInstID, p->TraderID, p->ExchangeID, p->ParticipantID, p->ClientID);
}
CZQThostFtdcQryExchangeOrderField * from_CZQThostFtdcQryExchangeOrderField(PyObject * p){
  CZQThostFtdcQryExchangeOrderField *t = (CZQThostFtdcQryExchangeOrderField *)calloc(1, sizeof(CZQThostFtdcQryExchangeOrderField));
  memset(t,0,sizeof(CZQThostFtdcQryExchangeOrderField));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//客户端认证请求
PyObject * new_CZQThostFtdcReqAuthenticateField(CZQThostFtdcReqAuthenticateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqAuthenticateField", (char*)"ssss",
p->UserID, p->AuthCode, p->BrokerID, p->UserProductInfo);
}
CZQThostFtdcReqAuthenticateField * from_CZQThostFtdcReqAuthenticateField(PyObject * p){
  CZQThostFtdcReqAuthenticateField *t = (CZQThostFtdcReqAuthenticateField *)calloc(1, sizeof(CZQThostFtdcReqAuthenticateField));
  memset(t,0,sizeof(CZQThostFtdcReqAuthenticateField));
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

//查询交易所状态
PyObject * new_CZQThostFtdcQryExchangeSequenceField(CZQThostFtdcQryExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryExchangeSequenceField", (char*)"s",
p->ExchangeID);
}
CZQThostFtdcQryExchangeSequenceField * from_CZQThostFtdcQryExchangeSequenceField(PyObject * p){
  CZQThostFtdcQryExchangeSequenceField *t = (CZQThostFtdcQryExchangeSequenceField *)calloc(1, sizeof(CZQThostFtdcQryExchangeSequenceField));
  memset(t,0,sizeof(CZQThostFtdcQryExchangeSequenceField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//预埋单
PyObject * new_CZQThostFtdcParkedOrderField(CZQThostFtdcParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcParkedOrderField", (char*)"csssiccciccidssicissssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Status, p->Direction, p->UserType, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->ForceCloseReason, p->ErrorID, p->ParkedOrderID, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
CZQThostFtdcParkedOrderField * from_CZQThostFtdcParkedOrderField(PyObject * p){
  CZQThostFtdcParkedOrderField *t = (CZQThostFtdcParkedOrderField *)calloc(1, sizeof(CZQThostFtdcParkedOrderField));
  memset(t,0,sizeof(CZQThostFtdcParkedOrderField));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_Touch -> '2', 止损
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  strcpy(t->LimitPrice, PyString_AsString(PyObject_GetAttrString(p, "LimitPrice")));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //预埋单状态
  //enum类型
  //THOST_FTDC_PAOS_Send -> '2', 已发送
  //THOST_FTDC_PAOS_Deleted -> '3', 已删除
  //THOST_FTDC_PAOS_NotSend -> '1', 未发送
  t->Status =   PyString_AsString(PyObject_GetAttrString(p, "Status"))[0];
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //用户类型
  //enum类型
  //THOST_FTDC_UT_Investor -> '0', 投资者
  //THOST_FTDC_UT_SuperUser -> '2', 管理员
  //THOST_FTDC_UT_Operator -> '1', 操作员
  t->UserType =   PyString_AsString(PyObject_GetAttrString(p, "UserType"))[0];
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_InactiveBNetPassSvrCode -> 'J', 注销B股网络密码服务代码
  //THOST_FTDC_OPT_Exercise -> 'U', 权证行权
  //THOST_FTDC_OPT_InactiveANetPassSvrCode -> 'H', 注销A股网络密码服务代码
  //THOST_FTDC_OPT_Designated -> 'M', 指定登记
  //THOST_FTDC_OPT_ShortAccToHostAcc -> 'i', 证券公司融券专用账户过户到证券公司自营账户
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_TenderOffer -> 'P', 要约收购登记
  //THOST_FTDC_OPT_SubscribingShares -> 'N', 证券参与申购
  //THOST_FTDC_OPT_RedemingFunds -> 'W', 开放式基金赎回
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_RedeemETF -> 'e', ETF赎回
  //THOST_FTDC_OPT_Ballot -> 'R', 证券投票
  //THOST_FTDC_OPT_ShortAccToCreditAcc -> 'f', 证券公司融券专用账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_PurchasesETF -> 'd', ETF申购
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_SubscribingFunds -> 'X', 开放式基金认购
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_ActiveBNetPassSvrCode -> 'I', 激活B股网络密码服务代码
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_CreditAccToShortAcc -> 'g', 证券公司信用交易担保证券账户过户到证券公司融券专用账户
  //THOST_FTDC_OPT_DesignatedCancel -> 'L', 指定撤销
  //THOST_FTDC_OPT_ConvertibleBondsRepurchase -> 'T', 可转债回售登记
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_ActiveANetPassSvrCode -> 'G', 激活A股网络密码服务代码
  //THOST_FTDC_OPT_LOFConvert -> 'a', 开放式基金转换为其他基金
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_Split -> 'O', 证券参与配股
  //THOST_FTDC_OPT_LOFSetBonusType -> 'Z', 开放式基金设置分红方式
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_InvAccToCreditAcc -> 'h', 投资者普通证券账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_TenderOfferCancel -> 'Q', 要约收购撤销
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_PurchasingFunds -> 'V', 开放式基金申购
  //THOST_FTDC_OPT_ConvertibleBondsConvet -> 'S', 可转债转换登记
  //THOST_FTDC_OPT_LOFIssue -> 'Y', 开放式基金转托管转出
  //THOST_FTDC_OPT_DebentureStockOut -> 'c', 债券出库
  //THOST_FTDC_OPT_DebentureStockIn -> 'b', 债券入库
  //THOST_FTDC_OPT_Repurchase -> 'K', 回购注销
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //自动挂起标志
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //预埋报单编号
  strcpy(t->ParkedOrderID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //GTD日期
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//成交均价
PyObject * new_CZQThostFtdcMarketDataAveragePriceField(CZQThostFtdcMarketDataAveragePriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataAveragePriceField", (char*)"d",
p->AveragePrice);
}
CZQThostFtdcMarketDataAveragePriceField * from_CZQThostFtdcMarketDataAveragePriceField(PyObject * p){
  CZQThostFtdcMarketDataAveragePriceField *t = (CZQThostFtdcMarketDataAveragePriceField *)calloc(1, sizeof(CZQThostFtdcMarketDataAveragePriceField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataAveragePriceField));
  //当日均价
  t->AveragePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));

  return t;
};

//行情申买二、三属性
PyObject * new_CZQThostFtdcMarketDataBid23Field(CZQThostFtdcMarketDataBid23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataBid23Field", (char*)"iidd",
p->BidVolume3, p->BidVolume2, p->BidPrice3, p->BidPrice2);
}
CZQThostFtdcMarketDataBid23Field * from_CZQThostFtdcMarketDataBid23Field(PyObject * p){
  CZQThostFtdcMarketDataBid23Field *t = (CZQThostFtdcMarketDataBid23Field *)calloc(1, sizeof(CZQThostFtdcMarketDataBid23Field));
  memset(t,0,sizeof(CZQThostFtdcMarketDataBid23Field));
  //申买量三
  t->BidVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume3"));
  //申买量二
  t->BidVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "BidVolume2"));
  //申买价三
  t->BidPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice3"));
  //申买价二
  t->BidPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "BidPrice2"));

  return t;
};

//用户事件通知信息
PyObject * new_CZQThostFtdcTradingNoticeInfoField(CZQThostFtdcTradingNoticeInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradingNoticeInfoField", (char*)"hissss",
p->SequenceSeries, p->SequenceNo, p->FieldContent, p->InvestorID, p->BrokerID, p->SendTime);
}
CZQThostFtdcTradingNoticeInfoField * from_CZQThostFtdcTradingNoticeInfoField(PyObject * p){
  CZQThostFtdcTradingNoticeInfoField *t = (CZQThostFtdcTradingNoticeInfoField *)calloc(1, sizeof(CZQThostFtdcTradingNoticeInfoField));
  memset(t,0,sizeof(CZQThostFtdcTradingNoticeInfoField));
  //序列系列号
  t->SequenceSeries =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceSeries"));
  //序列号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //消息正文
  strcpy(t->FieldContent, PyString_AsString(PyObject_GetAttrString(p, "FieldContent")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //发送时间
  strcpy(t->SendTime, PyString_AsString(PyObject_GetAttrString(p, "SendTime")));

  return t;
};

//交易所报单操作失败
PyObject * new_CZQThostFtdcExchangeOrderActionErrorField(CZQThostFtdcExchangeOrderActionErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeOrderActionErrorField", (char*)"sisssssi",
p->ExchangeID, p->InstallID, p->OrderLocalID, p->ErrorMsg, p->TraderID, p->ActionLocalID, p->OrderSysID, p->ErrorID);
}
CZQThostFtdcExchangeOrderActionErrorField * from_CZQThostFtdcExchangeOrderActionErrorField(PyObject * p){
  CZQThostFtdcExchangeOrderActionErrorField *t = (CZQThostFtdcExchangeOrderActionErrorField *)calloc(1, sizeof(CZQThostFtdcExchangeOrderActionErrorField));
  memset(t,0,sizeof(CZQThostFtdcExchangeOrderActionErrorField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //操作本地编号
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//资金账户口令变更域
PyObject * new_CZQThostFtdcTradingAccountPasswordUpdateField(CZQThostFtdcTradingAccountPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTradingAccountPasswordUpdateField", (char*)"ssss",
p->NewPassword, p->OldPassword, p->BrokerID, p->AccountID);
}
CZQThostFtdcTradingAccountPasswordUpdateField * from_CZQThostFtdcTradingAccountPasswordUpdateField(PyObject * p){
  CZQThostFtdcTradingAccountPasswordUpdateField *t = (CZQThostFtdcTradingAccountPasswordUpdateField *)calloc(1, sizeof(CZQThostFtdcTradingAccountPasswordUpdateField));
  memset(t,0,sizeof(CZQThostFtdcTradingAccountPasswordUpdateField));
  //新的口令
  strcpy(t->NewPassword, PyString_AsString(PyObject_GetAttrString(p, "NewPassword")));
  //原来的口令
  strcpy(t->OldPassword, PyString_AsString(PyObject_GetAttrString(p, "OldPassword")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//结算引用
PyObject * new_CZQThostFtdcSettlementRefField(CZQThostFtdcSettlementRefField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSettlementRefField", (char*)"si",
p->TradingDay, p->SettlementID);
}
CZQThostFtdcSettlementRefField * from_CZQThostFtdcSettlementRefField(PyObject * p){
  CZQThostFtdcSettlementRefField *t = (CZQThostFtdcSettlementRefField *)calloc(1, sizeof(CZQThostFtdcSettlementRefField));
  memset(t,0,sizeof(CZQThostFtdcSettlementRefField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));

  return t;
};

//行情更新时间属性
PyObject * new_CZQThostFtdcMarketDataUpdateTimeField(CZQThostFtdcMarketDataUpdateTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataUpdateTimeField", (char*)"ssi",
p->InstrumentID, p->UpdateTime, p->UpdateMillisec);
}
CZQThostFtdcMarketDataUpdateTimeField * from_CZQThostFtdcMarketDataUpdateTimeField(PyObject * p){
  CZQThostFtdcMarketDataUpdateTimeField *t = (CZQThostFtdcMarketDataUpdateTimeField *)calloc(1, sizeof(CZQThostFtdcMarketDataUpdateTimeField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataUpdateTimeField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //最后修改时间
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //最后修改毫秒
  t->UpdateMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));

  return t;
};

//交易所交易员报盘机
PyObject * new_CZQThostFtdcTraderOfferField(CZQThostFtdcTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTraderOfferField", (char*)"sssisssssscsssssss",
p->BranchID, p->StartDate, p->ExchangeID, p->InstallID, p->LastReportDate, p->ParticipantID, p->OrderLocalID, p->LastReportTime, p->TraderID, p->ConnectTime, p->TraderConnectStatus, p->TradingDay, p->ConnectRequestTime, p->StartTime, p->ConnectRequestDate, p->BrokerID, p->Password, p->ConnectDate);
}
CZQThostFtdcTraderOfferField * from_CZQThostFtdcTraderOfferField(PyObject * p){
  CZQThostFtdcTraderOfferField *t = (CZQThostFtdcTraderOfferField *)calloc(1, sizeof(CZQThostFtdcTraderOfferField));
  memset(t,0,sizeof(CZQThostFtdcTraderOfferField));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //启动日期
  strcpy(t->StartDate, PyString_AsString(PyObject_GetAttrString(p, "StartDate")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //上次报告日期
  strcpy(t->LastReportDate, PyString_AsString(PyObject_GetAttrString(p, "LastReportDate")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //上次报告时间
  strcpy(t->LastReportTime, PyString_AsString(PyObject_GetAttrString(p, "LastReportTime")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //完成连接时间
  strcpy(t->ConnectTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectTime")));
  //交易所交易员连接状态
  //enum类型
  //THOST_FTDC_TCS_NotConnected -> '1', 没有任何连接
  //THOST_FTDC_TCS_SubPrivateFlow -> '4', 订阅私有流
  //THOST_FTDC_TCS_QryInstrumentSent -> '3', 已经发出合约查询请求
  //THOST_FTDC_TCS_Connected -> '2', 已经连接
  t->TraderConnectStatus =   PyString_AsString(PyObject_GetAttrString(p, "TraderConnectStatus"))[0];
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //发出连接请求的时间
  strcpy(t->ConnectRequestTime, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestTime")));
  //启动时间
  strcpy(t->StartTime, PyString_AsString(PyObject_GetAttrString(p, "StartTime")));
  //发出连接请求的日期
  strcpy(t->ConnectRequestDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectRequestDate")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //完成连接日期
  strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));

  return t;
};

//响应信息
PyObject * new_CZQThostFtdcRspInfoField(CZQThostFtdcRspInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspInfoField", (char*)"si",
p->ErrorMsg, p->ErrorID);
}
CZQThostFtdcRspInfoField * from_CZQThostFtdcRspInfoField(PyObject * p){
  CZQThostFtdcRspInfoField *t = (CZQThostFtdcRspInfoField *)calloc(1, sizeof(CZQThostFtdcRspInfoField));
  memset(t,0,sizeof(CZQThostFtdcRspInfoField));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//交易所状态
PyObject * new_CZQThostFtdcExchangeSequenceField(CZQThostFtdcExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeSequenceField", (char*)"sic",
p->ExchangeID, p->SequenceNo, p->MarketStatus);
}
CZQThostFtdcExchangeSequenceField * from_CZQThostFtdcExchangeSequenceField(PyObject * p){
  CZQThostFtdcExchangeSequenceField *t = (CZQThostFtdcExchangeSequenceField *)calloc(1, sizeof(CZQThostFtdcExchangeSequenceField));
  memset(t,0,sizeof(CZQThostFtdcExchangeSequenceField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //序号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //合约交易状态
  //enum类型
  //THOST_FTDC_IS_Continous -> '2', 连续交易
  //THOST_FTDC_IS_AuctionMatch -> '5', 集合竞价撮合
  //THOST_FTDC_IS_BeforeTrading -> '0', 开盘前
  //THOST_FTDC_IS_Closed -> '6', 收盘
  //THOST_FTDC_IS_AuctionOrdering -> '3', 集合竞价报单
  //THOST_FTDC_IS_AuctionBalance -> '4', 集合竞价价格平衡
  //THOST_FTDC_IS_NoTrading -> '1', 非交易
  t->MarketStatus =   PyString_AsString(PyObject_GetAttrString(p, "MarketStatus"))[0];

  return t;
};

//用户登录应答
PyObject * new_CZQThostFtdcRspUserLoginField(CZQThostFtdcRspUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcRspUserLoginField", (char*)"sssssisissss",
p->CZCETime, p->SHFETime, p->MaxOrderRef, p->UserID, p->TradingDay, p->SessionID, p->SystemName, p->FrontID, p->FFEXTime, p->BrokerID, p->DCETime, p->LoginTime);
}
CZQThostFtdcRspUserLoginField * from_CZQThostFtdcRspUserLoginField(PyObject * p){
  CZQThostFtdcRspUserLoginField *t = (CZQThostFtdcRspUserLoginField *)calloc(1, sizeof(CZQThostFtdcRspUserLoginField));
  memset(t,0,sizeof(CZQThostFtdcRspUserLoginField));
  //郑商所时间
  strcpy(t->CZCETime, PyString_AsString(PyObject_GetAttrString(p, "CZCETime")));
  //上期所时间
  strcpy(t->SHFETime, PyString_AsString(PyObject_GetAttrString(p, "SHFETime")));
  //最大报单引用
  strcpy(t->MaxOrderRef, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderRef")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //交易系统名称
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //中金所时间
  strcpy(t->FFEXTime, PyString_AsString(PyObject_GetAttrString(p, "FFEXTime")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //大商所时间
  strcpy(t->DCETime, PyString_AsString(PyObject_GetAttrString(p, "DCETime")));
  //登录成功时间
  strcpy(t->LoginTime, PyString_AsString(PyObject_GetAttrString(p, "LoginTime")));

  return t;
};

//经纪公司资金
PyObject * new_CZQThostFtdcBrokerDepositField(CZQThostFtdcBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerDepositField", (char*)"dssdddssddddd",
p->Available, p->ExchangeID, p->ParticipantID, p->FrozenMargin, p->PreBalance, p->CurrMargin, p->TradingDay, p->BrokerID, p->Deposit, p->Withdraw, p->CloseProfit, p->Balance, p->Reserve);
}
CZQThostFtdcBrokerDepositField * from_CZQThostFtdcBrokerDepositField(PyObject * p){
  CZQThostFtdcBrokerDepositField *t = (CZQThostFtdcBrokerDepositField *)calloc(1, sizeof(CZQThostFtdcBrokerDepositField));
  memset(t,0,sizeof(CZQThostFtdcBrokerDepositField));
  //可提资金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //交易日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));
  //出金金额
  t->Withdraw =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Withdraw"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));

  return t;
};

//查询组合合约分腿
PyObject * new_CZQThostFtdcQryCombinationLegField(CZQThostFtdcQryCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryCombinationLegField", (char*)"sis",
p->LegInstrumentID, p->LegID, p->CombInstrumentID);
}
CZQThostFtdcQryCombinationLegField * from_CZQThostFtdcQryCombinationLegField(PyObject * p){
  CZQThostFtdcQryCombinationLegField *t = (CZQThostFtdcQryCombinationLegField *)calloc(1, sizeof(CZQThostFtdcQryCombinationLegField));
  memset(t,0,sizeof(CZQThostFtdcQryCombinationLegField));
  //单腿合约代码
  strcpy(t->LegInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "LegInstrumentID")));
  //单腿编号
  t->LegID =   PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
  //组合合约代码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//查询指定流水号的交易结果请求
PyObject * new_CZQThostFtdcReqQueryTradeResultBySerialField(CZQThostFtdcReqQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcReqQueryTradeResultBySerialField", (char*)"sssssssssisicssssccsisscds",
p->BrokerBranchID, p->BankPassWord, p->TradeTime, p->AccountID, p->BankAccount, p->CustomerName, p->TradeCode, p->BankBranchID, p->RefrenceIssure, p->SessionID, p->BankID, p->PlateSerial, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->TradingDay, p->BrokerID, p->RefrenceIssureType, p->IdCardType, p->Password, p->Reference, p->TradeDate, p->CurrencyID, p->LastFragment, p->TradeAmount, p->Digest);
}
CZQThostFtdcReqQueryTradeResultBySerialField * from_CZQThostFtdcReqQueryTradeResultBySerialField(PyObject * p){
  CZQThostFtdcReqQueryTradeResultBySerialField *t = (CZQThostFtdcReqQueryTradeResultBySerialField *)calloc(1, sizeof(CZQThostFtdcReqQueryTradeResultBySerialField));
  memset(t,0,sizeof(CZQThostFtdcReqQueryTradeResultBySerialField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //银行密码
  strcpy(t->BankPassWord, PyString_AsString(PyObject_GetAttrString(p, "BankPassWord")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //本流水号发布者机构编码
  strcpy(t->RefrenceIssure, PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssure")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //本流水号发布者的机构类型
  //enum类型
  //THOST_FTDC_TS_Future -> '1', 期商
  //THOST_FTDC_TS_Bank -> '0', 银行
  //THOST_FTDC_TS_Store -> '2', 券商
  t->RefrenceIssureType =   PyString_AsString(PyObject_GetAttrString(p, "RefrenceIssureType"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];
  //期货密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //流水号
  t->Reference =   PyInt_AsLong(PyObject_GetAttrString(p, "Reference"));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //转帐金额
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //摘要
  strcpy(t->Digest, PyString_AsString(PyObject_GetAttrString(p, "Digest")));

  return t;
};

//查询经纪公司交易参数
PyObject * new_CZQThostFtdcQryBrokerTradingParamsField(CZQThostFtdcQryBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryBrokerTradingParamsField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CZQThostFtdcQryBrokerTradingParamsField * from_CZQThostFtdcQryBrokerTradingParamsField(PyObject * p){
  CZQThostFtdcQryBrokerTradingParamsField *t = (CZQThostFtdcQryBrokerTradingParamsField *)calloc(1, sizeof(CZQThostFtdcQryBrokerTradingParamsField));
  memset(t,0,sizeof(CZQThostFtdcQryBrokerTradingParamsField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//合约
PyObject * new_CZQThostFtdcInstrumentField(CZQThostFtdcInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInstrumentField", (char*)"isciccissiissisiisiidcsisss",
p->IsTrading, p->ExpireDate, p->PositionDateType, p->OrderCanBeWithdraw, p->PositionType, p->ProductClass, p->MinSellVolume, p->InstrumentName, p->RightModelID, p->VolumeMultiple, p->DeliveryYear, p->CreateDate, p->InstrumentID, p->MaxLimitOrderVolume, p->ExchangeID, p->MinLimitOrderVolume, p->MaxMarketOrderVolume, p->StartDelivDate, p->DeliveryMonth, p->MinBuyVolume, p->PriceTick, p->InstLifePhase, p->ExchangeInstID, p->MinMarketOrderVolume, p->EndDelivDate, p->OpenDate, p->ProductID);
}
CZQThostFtdcInstrumentField * from_CZQThostFtdcInstrumentField(PyObject * p){
  CZQThostFtdcInstrumentField *t = (CZQThostFtdcInstrumentField *)calloc(1, sizeof(CZQThostFtdcInstrumentField));
  memset(t,0,sizeof(CZQThostFtdcInstrumentField));
  //当前是否交易
  t->IsTrading =   PyInt_AsLong(PyObject_GetAttrString(p, "IsTrading"));
  //到期日
  strcpy(t->ExpireDate, PyString_AsString(PyObject_GetAttrString(p, "ExpireDate")));
  //持仓日期类型
  //enum类型
  //THOST_FTDC_PDT_UseHistory -> '1', 使用历史持仓
  //THOST_FTDC_PDT_NoUseHistory -> '2', 不使用历史持仓
  t->PositionDateType =   PyString_AsString(PyObject_GetAttrString(p, "PositionDateType"))[0];
  //报单能否撤单
  t->OrderCanBeWithdraw =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderCanBeWithdraw"));
  //持仓类型
  //enum类型
  //THOST_FTDC_PT_Net -> '1', 净持仓
  //THOST_FTDC_PT_Gross -> '2', 综合持仓
  t->PositionType =   PyString_AsString(PyObject_GetAttrString(p, "PositionType"))[0];
  //产品类型
  //enum类型
  //THOST_FTDC_PC_Combination -> '3', 组合
  //THOST_FTDC_PC_StockB -> '7', 证券B股
  //THOST_FTDC_PC_Futures -> '1', 期货
  //THOST_FTDC_PC_Options -> '2', 期权
  //THOST_FTDC_PC_ETF -> '8', ETF
  //THOST_FTDC_PC_Spot -> '4', 即期
  //THOST_FTDC_PC_StockA -> '6', 证券A股
  //THOST_FTDC_PC_EFP -> '5', 期转现
  //THOST_FTDC_PC_ETFPurRed -> '9', ETF申赎
  t->ProductClass =   PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
  //最小卖下单单位
  t->MinSellVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinSellVolume"));
  //合约名称
  strcpy(t->InstrumentName, PyString_AsString(PyObject_GetAttrString(p, "InstrumentName")));
  //股票权限模版代码
  strcpy(t->RightModelID, PyString_AsString(PyObject_GetAttrString(p, "RightModelID")));
  //合约数量乘数
  t->VolumeMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeMultiple"));
  //交割年份
  t->DeliveryYear =   PyInt_AsLong(PyObject_GetAttrString(p, "DeliveryYear"));
  //创建日
  strcpy(t->CreateDate, PyString_AsString(PyObject_GetAttrString(p, "CreateDate")));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //限价单最大下单量
  t->MaxLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxLimitOrderVolume"));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //限价单最小下单量
  t->MinLimitOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinLimitOrderVolume"));
  //市价单最大下单量
  t->MaxMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MaxMarketOrderVolume"));
  //开始交割日
  strcpy(t->StartDelivDate, PyString_AsString(PyObject_GetAttrString(p, "StartDelivDate")));
  //交割月
  t->DeliveryMonth =   PyInt_AsLong(PyObject_GetAttrString(p, "DeliveryMonth"));
  //最小买下单单位
  t->MinBuyVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinBuyVolume"));
  //最小变动价位
  t->PriceTick =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PriceTick"));
  //合约生命周期状态
  //enum类型
  //THOST_FTDC_IP_NotStart -> '0', 未上市
  //THOST_FTDC_IP_Expired -> '3', 到期
  //THOST_FTDC_IP_Pause -> '2', 停牌
  //THOST_FTDC_IP_Started -> '1', 上市
  t->InstLifePhase =   PyString_AsString(PyObject_GetAttrString(p, "InstLifePhase"))[0];
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //市价单最小下单量
  t->MinMarketOrderVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinMarketOrderVolume"));
  //结束交割日
  strcpy(t->EndDelivDate, PyString_AsString(PyObject_GetAttrString(p, "EndDelivDate")));
  //上市日
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
  //产品代码
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//正在同步中的投资者持仓
PyObject * new_CZQThostFtdcSyncingInvestorPositionField(CZQThostFtdcSyncingInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingInvestorPositionField", (char*)"ddicdddiidddciiidiiiiddscsidiiisddsddddiddddsdddd",
p->MarginTradeAmount, p->ShortFrozenAmount, p->TodaySSPosition, p->HedgeFlag, p->PositionProfit, p->TransferFee, p->Commission, p->ShortSellVolume, p->TodayPurRedVolume, p->CashIn, p->PreSettlementPrice, p->CloseAmount, p->PosiDirection, p->MarginTradeVolume, p->YdPosition, p->MarginTradeFrozenVolume, p->ConversionRate, p->ShortSellFrozenVolume, p->OpenVolume, p->TodayMTPosition, p->CloseVolume, p->ConversionAmount, p->SSStockValue, p->InstrumentID, p->PositionDate, p->ExchangeID, p->SettlementID, p->MarginTradeFrozenAmount, p->ShortFrozen, p->LongFrozen, p->TodayPosition, p->TradingDay, p->PositionCost, p->MarginTradeConversionAmount, p->BrokerID, p->FrozenCash, p->OpenAmount, p->OpenCost, p->StampTax, p->Position, p->ExchangeMargin, p->ShortSellFrozenAmount, p->SettlementPrice, p->LongFrozenAmount, p->InvestorID, p->ShortSellConversionAmount, p->CloseProfit, p->StockValue, p->ShortSellAmount);
}
CZQThostFtdcSyncingInvestorPositionField * from_CZQThostFtdcSyncingInvestorPositionField(PyObject * p){
  CZQThostFtdcSyncingInvestorPositionField *t = (CZQThostFtdcSyncingInvestorPositionField *)calloc(1, sizeof(CZQThostFtdcSyncingInvestorPositionField));
  memset(t,0,sizeof(CZQThostFtdcSyncingInvestorPositionField));
  //融资买入金额
  t->MarginTradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradeAmount"));
  //开仓冻结金额
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //今日融券持仓
  t->TodaySSPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodaySSPosition"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //过户费
  t->TransferFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFee"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //融券卖出数量
  t->ShortSellVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortSellVolume"));
  //今日申购赎回数量
  t->TodayPurRedVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayPurRedVolume"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //持仓多空方向
  //enum类型
  //THOST_FTDC_PD_MarginTrade -> '4', 融资
  //THOST_FTDC_PD_Net -> '1', 净
  //THOST_FTDC_PD_Short -> '3', 空头
  //THOST_FTDC_PD_ShortSell -> '5', 融券
  //THOST_FTDC_PD_Long -> '2', 多头
  t->PosiDirection =   PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
  //融资买入出数量
  t->MarginTradeVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MarginTradeVolume"));
  //上日持仓
  t->YdPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //融资买入冻结数量
  t->MarginTradeFrozenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MarginTradeFrozenVolume"));
  //折算率
  t->ConversionRate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConversionRate"));
  //融券卖出冻结数量
  t->ShortSellFrozenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortSellFrozenVolume"));
  //开仓量
  t->OpenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //今日融资持仓
  t->TodayMTPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayMTPosition"));
  //平仓量
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //折算金额
  t->ConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConversionAmount"));
  //融券总市值
  t->SSStockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SSStockValue"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //持仓日期
  //enum类型
  //THOST_FTDC_PSD_Today -> '1', 今日持仓
  //THOST_FTDC_PSD_History -> '2', 历史持仓
  t->PositionDate =   PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //融资买入冻结金额
  t->MarginTradeFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradeFrozenAmount"));
  //空头冻结
  t->ShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
  //多头冻结
  t->LongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
  //今日持仓
  t->TodayPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //持仓成本
  t->PositionCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
  //融资买入盈亏
  t->MarginTradeConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradeConversionAmount"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //开仓金额
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //开仓成本
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //印花税
  t->StampTax =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTax"));
  //今日持仓
  t->Position =   PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //融券卖出冻结金额
  t->ShortSellFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellFrozenAmount"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //开仓冻结金额
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //融券卖出盈亏
  t->ShortSellConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellConversionAmount"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //证券价值
  t->StockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StockValue"));
  //融券卖出金额
  t->ShortSellAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellAmount"));

  return t;
};

//查询银行交易明细请求，TradeCode=204999
PyObject * new_CZQThostFtdcTransferQryDetailReqField(CZQThostFtdcTransferQryDetailReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcTransferQryDetailReqField", (char*)"s",
p->FutureAccount);
}
CZQThostFtdcTransferQryDetailReqField * from_CZQThostFtdcTransferQryDetailReqField(PyObject * p){
  CZQThostFtdcTransferQryDetailReqField *t = (CZQThostFtdcTransferQryDetailReqField *)calloc(1, sizeof(CZQThostFtdcTransferQryDetailReqField));
  memset(t,0,sizeof(CZQThostFtdcTransferQryDetailReqField));
  //期货资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));

  return t;
};

//合约保证金率调整
PyObject * new_CZQThostFtdcInstrumentMarginRateAdjustField(CZQThostFtdcInstrumentMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInstrumentMarginRateAdjustField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CZQThostFtdcInstrumentMarginRateAdjustField * from_CZQThostFtdcInstrumentMarginRateAdjustField(PyObject * p){
  CZQThostFtdcInstrumentMarginRateAdjustField *t = (CZQThostFtdcInstrumentMarginRateAdjustField *)calloc(1, sizeof(CZQThostFtdcInstrumentMarginRateAdjustField));
  memset(t,0,sizeof(CZQThostFtdcInstrumentMarginRateAdjustField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //是否相对交易所收取
  t->IsRelative =   PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//查询签约银行请求
PyObject * new_CZQThostFtdcQryContractBankField(CZQThostFtdcQryContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryContractBankField", (char*)"sss",
p->BrokerID, p->BankBrchID, p->BankID);
}
CZQThostFtdcQryContractBankField * from_CZQThostFtdcQryContractBankField(PyObject * p){
  CZQThostFtdcQryContractBankField *t = (CZQThostFtdcQryContractBankField *)calloc(1, sizeof(CZQThostFtdcQryContractBankField));
  memset(t,0,sizeof(CZQThostFtdcQryContractBankField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//投资者持仓
PyObject * new_CZQThostFtdcInvestorPositionField(CZQThostFtdcInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInvestorPositionField", (char*)"ddicdddiidddciiidiiiiddscsidiiisddsddddiddddsdddd",
p->MarginTradeAmount, p->ShortFrozenAmount, p->TodaySSPosition, p->HedgeFlag, p->PositionProfit, p->TransferFee, p->Commission, p->ShortSellVolume, p->TodayPurRedVolume, p->CashIn, p->PreSettlementPrice, p->CloseAmount, p->PosiDirection, p->MarginTradeVolume, p->YdPosition, p->MarginTradeFrozenVolume, p->ConversionRate, p->ShortSellFrozenVolume, p->OpenVolume, p->TodayMTPosition, p->CloseVolume, p->ConversionAmount, p->SSStockValue, p->InstrumentID, p->PositionDate, p->ExchangeID, p->SettlementID, p->MarginTradeFrozenAmount, p->ShortFrozen, p->LongFrozen, p->TodayPosition, p->TradingDay, p->PositionCost, p->MarginTradeConversionAmount, p->BrokerID, p->FrozenCash, p->OpenAmount, p->OpenCost, p->StampTax, p->Position, p->ExchangeMargin, p->ShortSellFrozenAmount, p->SettlementPrice, p->LongFrozenAmount, p->InvestorID, p->ShortSellConversionAmount, p->CloseProfit, p->StockValue, p->ShortSellAmount);
}
CZQThostFtdcInvestorPositionField * from_CZQThostFtdcInvestorPositionField(PyObject * p){
  CZQThostFtdcInvestorPositionField *t = (CZQThostFtdcInvestorPositionField *)calloc(1, sizeof(CZQThostFtdcInvestorPositionField));
  memset(t,0,sizeof(CZQThostFtdcInvestorPositionField));
  //融资买入金额
  t->MarginTradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradeAmount"));
  //开仓冻结金额
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //今日融券持仓
  t->TodaySSPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodaySSPosition"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //过户费
  t->TransferFee =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TransferFee"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //融券卖出数量
  t->ShortSellVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortSellVolume"));
  //今日申购赎回数量
  t->TodayPurRedVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayPurRedVolume"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //持仓多空方向
  //enum类型
  //THOST_FTDC_PD_MarginTrade -> '4', 融资
  //THOST_FTDC_PD_Net -> '1', 净
  //THOST_FTDC_PD_Short -> '3', 空头
  //THOST_FTDC_PD_ShortSell -> '5', 融券
  //THOST_FTDC_PD_Long -> '2', 多头
  t->PosiDirection =   PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
  //融资买入出数量
  t->MarginTradeVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MarginTradeVolume"));
  //上日持仓
  t->YdPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //融资买入冻结数量
  t->MarginTradeFrozenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MarginTradeFrozenVolume"));
  //折算率
  t->ConversionRate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConversionRate"));
  //融券卖出冻结数量
  t->ShortSellFrozenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortSellFrozenVolume"));
  //开仓量
  t->OpenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //今日融资持仓
  t->TodayMTPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayMTPosition"));
  //平仓量
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //折算金额
  t->ConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ConversionAmount"));
  //融券总市值
  t->SSStockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SSStockValue"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //持仓日期
  //enum类型
  //THOST_FTDC_PSD_Today -> '1', 今日持仓
  //THOST_FTDC_PSD_History -> '2', 历史持仓
  t->PositionDate =   PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //融资买入冻结金额
  t->MarginTradeFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradeFrozenAmount"));
  //空头冻结
  t->ShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "ShortFrozen"));
  //多头冻结
  t->LongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "LongFrozen"));
  //今日持仓
  t->TodayPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "TodayPosition"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //持仓成本
  t->PositionCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionCost"));
  //融资买入盈亏
  t->MarginTradeConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginTradeConversionAmount"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //开仓金额
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //开仓成本
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //印花税
  t->StampTax =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StampTax"));
  //今日持仓
  t->Position =   PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //融券卖出冻结金额
  t->ShortSellFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellFrozenAmount"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //开仓冻结金额
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //融券卖出盈亏
  t->ShortSellConversionAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellConversionAmount"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //证券价值
  t->StockValue =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StockValue"));
  //融券卖出金额
  t->ShortSellAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortSellAmount"));

  return t;
};

//经纪公司用户口令
PyObject * new_CZQThostFtdcBrokerUserPasswordField(CZQThostFtdcBrokerUserPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerUserPasswordField", (char*)"sss",
p->UserID, p->Password, p->BrokerID);
}
CZQThostFtdcBrokerUserPasswordField * from_CZQThostFtdcBrokerUserPasswordField(PyObject * p){
  CZQThostFtdcBrokerUserPasswordField *t = (CZQThostFtdcBrokerUserPasswordField *)calloc(1, sizeof(CZQThostFtdcBrokerUserPasswordField));
  memset(t,0,sizeof(CZQThostFtdcBrokerUserPasswordField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//经纪公司交易算法
PyObject * new_CZQThostFtdcBrokerTradingAlgosField(CZQThostFtdcBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerTradingAlgosField", (char*)"scscsc",
p->InstrumentID, p->HandlePositionAlgoID, p->ExchangeID, p->FindMarginRateAlgoID, p->BrokerID, p->HandleTradingAccountAlgoID);
}
CZQThostFtdcBrokerTradingAlgosField * from_CZQThostFtdcBrokerTradingAlgosField(PyObject * p){
  CZQThostFtdcBrokerTradingAlgosField *t = (CZQThostFtdcBrokerTradingAlgosField *)calloc(1, sizeof(CZQThostFtdcBrokerTradingAlgosField));
  memset(t,0,sizeof(CZQThostFtdcBrokerTradingAlgosField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //持仓处理算法编号
  //enum类型
  //THOST_FTDC_HPA_Stock -> '5', 证券
  //THOST_FTDC_HPA_Base -> '1', 基本
  //THOST_FTDC_HPA_NoneTrade -> '4', 非交易
  //THOST_FTDC_HPA_CZCE -> '3', 郑州商品交易所
  //THOST_FTDC_HPA_DCE -> '2', 大连商品交易所
  t->HandlePositionAlgoID =   PyString_AsString(PyObject_GetAttrString(p, "HandlePositionAlgoID"))[0];
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //寻找保证金率算法编号
  //enum类型
  //THOST_FTDC_FMRA_DCE -> '2', 大连商品交易所
  //THOST_FTDC_FMRA_Base -> '1', 基本
  //THOST_FTDC_FMRA_CZCE -> '3', 郑州商品交易所
  t->FindMarginRateAlgoID =   PyString_AsString(PyObject_GetAttrString(p, "FindMarginRateAlgoID"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //资金处理算法编号
  //enum类型
  //THOST_FTDC_HTAA_DCE -> '2', 大连商品交易所
  //THOST_FTDC_HTAA_Base -> '1', 基本
  //THOST_FTDC_HTAA_CZCE -> '3', 郑州商品交易所
  t->HandleTradingAccountAlgoID =   PyString_AsString(PyObject_GetAttrString(p, "HandleTradingAccountAlgoID"))[0];

  return t;
};

//合约保证金率
PyObject * new_CZQThostFtdcInstrumentMarginRateField(CZQThostFtdcInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInstrumentMarginRateField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CZQThostFtdcInstrumentMarginRateField * from_CZQThostFtdcInstrumentMarginRateField(PyObject * p){
  CZQThostFtdcInstrumentMarginRateField *t = (CZQThostFtdcInstrumentMarginRateField *)calloc(1, sizeof(CZQThostFtdcInstrumentMarginRateField));
  memset(t,0,sizeof(CZQThostFtdcInstrumentMarginRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //是否相对交易所收取
  t->IsRelative =   PyInt_AsLong(PyObject_GetAttrString(p, "IsRelative"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者范围
  //enum类型
  //THOST_FTDC_IR_All -> '1', 所有
  //THOST_FTDC_IR_Group -> '2', 投资者组
  //THOST_FTDC_IR_Single -> '3', 单一投资者
  t->InvestorRange =   PyString_AsString(PyObject_GetAttrString(p, "InvestorRange"))[0];
  //空头保证金费
  t->ShortMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByVolume"));
  //多头保证金费
  t->LongMarginRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByVolume"));

  return t;
};

//验证客户信息
PyObject * new_CZQThostFtdcVerifyCustInfoField(CZQThostFtdcVerifyCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcVerifyCustInfoField", (char*)"cssc",
p->CustType, p->IdentifiedCardNo, p->CustomerName, p->IdCardType);
}
CZQThostFtdcVerifyCustInfoField * from_CZQThostFtdcVerifyCustInfoField(PyObject * p){
  CZQThostFtdcVerifyCustInfoField *t = (CZQThostFtdcVerifyCustInfoField *)calloc(1, sizeof(CZQThostFtdcVerifyCustInfoField));
  memset(t,0,sizeof(CZQThostFtdcVerifyCustInfoField));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdCardType"))[0];

  return t;
};

//输入报单
PyObject * new_CZQThostFtdcInputOrderField(CZQThostFtdcInputOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInputOrderField", (char*)"csssiciccidssicssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Direction, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->ForceCloseReason, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
CZQThostFtdcInputOrderField * from_CZQThostFtdcInputOrderField(PyObject * p){
  CZQThostFtdcInputOrderField *t = (CZQThostFtdcInputOrderField *)calloc(1, sizeof(CZQThostFtdcInputOrderField));
  memset(t,0,sizeof(CZQThostFtdcInputOrderField));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_Touch -> '2', 止损
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  strcpy(t->LimitPrice, PyString_AsString(PyObject_GetAttrString(p, "LimitPrice")));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_InactiveBNetPassSvrCode -> 'J', 注销B股网络密码服务代码
  //THOST_FTDC_OPT_Exercise -> 'U', 权证行权
  //THOST_FTDC_OPT_InactiveANetPassSvrCode -> 'H', 注销A股网络密码服务代码
  //THOST_FTDC_OPT_Designated -> 'M', 指定登记
  //THOST_FTDC_OPT_ShortAccToHostAcc -> 'i', 证券公司融券专用账户过户到证券公司自营账户
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_TenderOffer -> 'P', 要约收购登记
  //THOST_FTDC_OPT_SubscribingShares -> 'N', 证券参与申购
  //THOST_FTDC_OPT_RedemingFunds -> 'W', 开放式基金赎回
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_RedeemETF -> 'e', ETF赎回
  //THOST_FTDC_OPT_Ballot -> 'R', 证券投票
  //THOST_FTDC_OPT_ShortAccToCreditAcc -> 'f', 证券公司融券专用账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_PurchasesETF -> 'd', ETF申购
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_SubscribingFunds -> 'X', 开放式基金认购
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_ActiveBNetPassSvrCode -> 'I', 激活B股网络密码服务代码
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_CreditAccToShortAcc -> 'g', 证券公司信用交易担保证券账户过户到证券公司融券专用账户
  //THOST_FTDC_OPT_DesignatedCancel -> 'L', 指定撤销
  //THOST_FTDC_OPT_ConvertibleBondsRepurchase -> 'T', 可转债回售登记
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_ActiveANetPassSvrCode -> 'G', 激活A股网络密码服务代码
  //THOST_FTDC_OPT_LOFConvert -> 'a', 开放式基金转换为其他基金
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_Split -> 'O', 证券参与配股
  //THOST_FTDC_OPT_LOFSetBonusType -> 'Z', 开放式基金设置分红方式
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_InvAccToCreditAcc -> 'h', 投资者普通证券账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_TenderOfferCancel -> 'Q', 要约收购撤销
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_PurchasingFunds -> 'V', 开放式基金申购
  //THOST_FTDC_OPT_ConvertibleBondsConvet -> 'S', 可转债转换登记
  //THOST_FTDC_OPT_LOFIssue -> 'Y', 开放式基金转托管转出
  //THOST_FTDC_OPT_DebentureStockOut -> 'c', 债券出库
  //THOST_FTDC_OPT_DebentureStockIn -> 'b', 债券入库
  //THOST_FTDC_OPT_Repurchase -> 'K', 回购注销
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //自动挂起标志
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //GTD日期
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));

  return t;
};

//查询错误报单操作
PyObject * new_CZQThostFtdcErrorConditionalOrderField(CZQThostFtdcErrorConditionalOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcErrorConditionalOrderField", (char*)"cisisssssisscisissiciccsciidssisiccisssssisssssssssisisciscds",
p->ContingentCondition, p->NotifySequence, p->ActiveUserID, p->VolumeTraded, p->UserProductInfo, p->CombOffsetFlag, p->TraderID, p->UserID, p->LimitPrice, p->UserForceClose, p->RelativeOrderSysID, p->AccountID, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->SessionID, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->IsETF, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->StatusMsg, p->SettlementID, p->ForceCloseReason, p->OrderType, p->ErrorID, p->UpdateTime, p->TradingDay, p->ActiveTime, p->BrokerID, p->InsertTime, p->FrontID, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BranchID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->VolumeCondition, p->RequestID, p->ErrorMsg, p->OrderSource, p->TradeAmount, p->ActiveTraderID);
}
CZQThostFtdcErrorConditionalOrderField * from_CZQThostFtdcErrorConditionalOrderField(PyObject * p){
  CZQThostFtdcErrorConditionalOrderField *t = (CZQThostFtdcErrorConditionalOrderField *)calloc(1, sizeof(CZQThostFtdcErrorConditionalOrderField));
  memset(t,0,sizeof(CZQThostFtdcErrorConditionalOrderField));
  //触发条件
  //enum类型
  //THOST_FTDC_CC_BidPriceGreaterThanStopPrice -> 'D', 买一价大于条件价
  //THOST_FTDC_CC_AskPriceLesserEqualStopPrice -> 'C', 卖一价小于等于条件价
  //THOST_FTDC_CC_AskPriceGreaterThanStopPrice -> '9', 卖一价大于条件价
  //THOST_FTDC_CC_LastPriceLesserThanStopPrice -> '7', 最新价小于条件价
  //THOST_FTDC_CC_LastPriceGreaterEqualStopPrice -> '6', 最新价大于等于条件价
  //THOST_FTDC_CC_BidPriceGreaterEqualStopPrice -> 'E', 买一价大于等于条件价
  //THOST_FTDC_CC_LastPriceLesserEqualStopPrice -> '8', 最新价小于等于条件价
  //THOST_FTDC_CC_TouchProfit -> '3', 止赢
  //THOST_FTDC_CC_ParkedOrder -> '4', 预埋单
  //THOST_FTDC_CC_AskPriceGreaterEqualStopPrice -> 'A', 卖一价大于等于条件价
  //THOST_FTDC_CC_BidPriceLesserEqualStopPrice -> 'H', 买一价小于等于条件价
  //THOST_FTDC_CC_LastPriceGreaterThanStopPrice -> '5', 最新价大于条件价
  //THOST_FTDC_CC_BidPriceLesserThanStopPrice -> 'F', 买一价小于条件价
  //THOST_FTDC_CC_AskPriceLesserThanStopPrice -> 'B', 卖一价小于条件价
  //THOST_FTDC_CC_Immediately -> '1', 立即
  //THOST_FTDC_CC_Touch -> '2', 止损
  t->ContingentCondition =   PyString_AsString(PyObject_GetAttrString(p, "ContingentCondition"))[0];
  //报单提示序号
  t->NotifySequence =   PyInt_AsLong(PyObject_GetAttrString(p, "NotifySequence"));
  //操作用户代码
  strcpy(t->ActiveUserID, PyString_AsString(PyObject_GetAttrString(p, "ActiveUserID")));
  //今成交数量
  t->VolumeTraded =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTraded"));
  //用户端产品信息
  strcpy(t->UserProductInfo, PyString_AsString(PyObject_GetAttrString(p, "UserProductInfo")));
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  strcpy(t->LimitPrice, PyString_AsString(PyObject_GetAttrString(p, "LimitPrice")));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //相关报单
  strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
  //资金帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //剩余数量
  t->VolumeTotal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_InactiveBNetPassSvrCode -> 'J', 注销B股网络密码服务代码
  //THOST_FTDC_OPT_Exercise -> 'U', 权证行权
  //THOST_FTDC_OPT_InactiveANetPassSvrCode -> 'H', 注销A股网络密码服务代码
  //THOST_FTDC_OPT_Designated -> 'M', 指定登记
  //THOST_FTDC_OPT_ShortAccToHostAcc -> 'i', 证券公司融券专用账户过户到证券公司自营账户
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_TenderOffer -> 'P', 要约收购登记
  //THOST_FTDC_OPT_SubscribingShares -> 'N', 证券参与申购
  //THOST_FTDC_OPT_RedemingFunds -> 'W', 开放式基金赎回
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_RedeemETF -> 'e', ETF赎回
  //THOST_FTDC_OPT_Ballot -> 'R', 证券投票
  //THOST_FTDC_OPT_ShortAccToCreditAcc -> 'f', 证券公司融券专用账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_PurchasesETF -> 'd', ETF申购
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_SubscribingFunds -> 'X', 开放式基金认购
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_ActiveBNetPassSvrCode -> 'I', 激活B股网络密码服务代码
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_CreditAccToShortAcc -> 'g', 证券公司信用交易担保证券账户过户到证券公司融券专用账户
  //THOST_FTDC_OPT_DesignatedCancel -> 'L', 指定撤销
  //THOST_FTDC_OPT_ConvertibleBondsRepurchase -> 'T', 可转债回售登记
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_ActiveANetPassSvrCode -> 'G', 激活A股网络密码服务代码
  //THOST_FTDC_OPT_LOFConvert -> 'a', 开放式基金转换为其他基金
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_Split -> 'O', 证券参与配股
  //THOST_FTDC_OPT_LOFSetBonusType -> 'Z', 开放式基金设置分红方式
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_InvAccToCreditAcc -> 'h', 投资者普通证券账户过户到证券公司信用交易担保证券账户
  //THOST_FTDC_OPT_TenderOfferCancel -> 'Q', 要约收购撤销
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_PurchasingFunds -> 'V', 开放式基金申购
  //THOST_FTDC_OPT_ConvertibleBondsConvet -> 'S', 可转债转换登记
  //THOST_FTDC_OPT_LOFIssue -> 'Y', 开放式基金转托管转出
  //THOST_FTDC_OPT_DebentureStockOut -> 'c', 债券出库
  //THOST_FTDC_OPT_DebentureStockIn -> 'b', 债券入库
  //THOST_FTDC_OPT_Repurchase -> 'K', 回购注销
  //THOST_FTDC_OPT_BidPrice1PlusThreeTicks -> 'F', 买一价浮动上浮3个ticks
  t->OrderPriceType =   PyString_AsString(PyObject_GetAttrString(p, "OrderPriceType"))[0];
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //有效期类型
  //enum类型
  //THOST_FTDC_TC_GTC -> '5', 撤销前有效
  //THOST_FTDC_TC_GTD -> '4', 指定日期前有效
  //THOST_FTDC_TC_GFD -> '3', 当日有效
  //THOST_FTDC_TC_GFA -> '6', 集合竞价有效
  //THOST_FTDC_TC_IOC -> '1', 立即完成，否则撤销
  //THOST_FTDC_TC_GFS -> '2', 本节有效
  t->TimeCondition =   PyString_AsString(PyObject_GetAttrString(p, "TimeCondition"))[0];
  //报单状态
  //enum类型
  //THOST_FTDC_OST_NotTouched -> 'b', 尚未触发
  //THOST_FTDC_OST_NoTradeQueueing -> '3', 未成交还在队列中
  //THOST_FTDC_OST_AllTraded -> '0', 全部成交
  //THOST_FTDC_OST_NoTradeNotQueueing -> '4', 未成交不在队列中
  //THOST_FTDC_OST_Unknown -> 'a', 未知
  //THOST_FTDC_OST_PartTradedQueueing -> '1', 部分成交还在队列中
  //THOST_FTDC_OST_PartTradedNotQueueing -> '2', 部分成交不在队列中
  //THOST_FTDC_OST_Touched -> 'c', 已触发
  //THOST_FTDC_OST_Canceled -> '5', 撤单
  t->OrderStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderStatus"))[0];
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //报单提交状态
  //enum类型
  //THOST_FTDC_OSS_InsertSubmitted -> '0', 已经提交
  //THOST_FTDC_OSS_InsertRejected -> '4', 报单已经被拒绝
  //THOST_FTDC_OSS_CancelSubmitted -> '1', 撤单已经提交
  //THOST_FTDC_OSS_CancelRejected -> '5', 撤单已经被拒绝
  //THOST_FTDC_OSS_Accepted -> '3', 已经接受
  //THOST_FTDC_OSS_ModifySubmitted -> '2', 修改已经提交
  //THOST_FTDC_OSS_ModifyRejected -> '6', 改单已经被拒绝
  t->OrderSubmitStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderSubmitStatus"))[0];
  //是否ETF
  t->IsETF =   PyInt_AsLong(PyObject_GetAttrString(p, "IsETF"));
  //自动挂起标志
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //止损价
  t->StopPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "StopPrice"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //状态信息
  strcpy(t->StatusMsg, PyString_AsString(PyObject_GetAttrString(p, "StatusMsg")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_ClientOverPositionLimit -> '2', 客户超仓
  //THOST_FTDC_FCC_NotForceClose -> '0', 非强平
  //THOST_FTDC_FCC_NotMultiple -> '4', 持仓非整数倍
  //THOST_FTDC_FCC_MemberOverPositionLimit -> '3', 会员超仓
  //THOST_FTDC_FCC_LackDeposit -> '1', 资金不足
  //THOST_FTDC_FCC_Other -> '6', 其它
  //THOST_FTDC_FCC_Violation -> '5', 违规
  t->ForceCloseReason =   PyString_AsString(PyObject_GetAttrString(p, "ForceCloseReason"))[0];
  //报单类型
  //enum类型
  //THOST_FTDC_ORDT_Combination -> '3', 组合报单
  //THOST_FTDC_ORDT_Normal -> '0', 正常
  //THOST_FTDC_ORDT_DeriveFromCombination -> '2', 组合衍生
  //THOST_FTDC_ORDT_DeriveFromQuote -> '1', 报价衍生
  //THOST_FTDC_ORDT_Swap -> '5', 互换单
  //THOST_FTDC_ORDT_ConditionalOrder -> '4', 条件单
  t->OrderType =   PyString_AsString(PyObject_GetAttrString(p, "OrderType"))[0];
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //最后修改时间
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //激活时间
  strcpy(t->ActiveTime, PyString_AsString(PyObject_GetAttrString(p, "ActiveTime")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //委托时间
  strcpy(t->InsertTime, PyString_AsString(PyObject_GetAttrString(p, "InsertTime")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //挂起时间
  strcpy(t->SuspendTime, PyString_AsString(PyObject_GetAttrString(p, "SuspendTime")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
  //组合投机套保标志
  strcpy(t->CombHedgeFlag, PyString_AsString(PyObject_GetAttrString(p, "CombHedgeFlag")));
  //撤销时间
  strcpy(t->CancelTime, PyString_AsString(PyObject_GetAttrString(p, "CancelTime")));
  //GTD日期
  strcpy(t->GTDDate, PyString_AsString(PyObject_GetAttrString(p, "GTDDate")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //营业部编号
  strcpy(t->BranchID, PyString_AsString(PyObject_GetAttrString(p, "BranchID")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //报单日期
  strcpy(t->InsertDate, PyString_AsString(PyObject_GetAttrString(p, "InsertDate")));
  //序号
  t->SequenceNo =   PyInt_AsLong(PyObject_GetAttrString(p, "SequenceNo"));
  //报单引用
  strcpy(t->OrderRef, PyString_AsString(PyObject_GetAttrString(p, "OrderRef")));
  //经纪公司报单编号
  t->BrokerOrderSeq =   PyInt_AsLong(PyObject_GetAttrString(p, "BrokerOrderSeq"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //成交量类型
  //enum类型
  //THOST_FTDC_VC_MV -> '2', 最小数量
  //THOST_FTDC_VC_CV -> '3', 全部数量
  //THOST_FTDC_VC_AV -> '1', 任何数量
  t->VolumeCondition =   PyString_AsString(PyObject_GetAttrString(p, "VolumeCondition"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //报单来源
  //enum类型
  //THOST_FTDC_OSRC_Participant -> '0', 来自参与者
  //THOST_FTDC_OSRC_Administrator -> '1', 来自管理员
  t->OrderSource =   PyString_AsString(PyObject_GetAttrString(p, "OrderSource"))[0];
  //成交数量
  t->TradeAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "TradeAmount"));
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//交易核心向银期报盘发出密钥同步处理结果的通知
PyObject * new_CZQThostFtdcNotifySyncKeyField(CZQThostFtdcNotifySyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcNotifySyncKeyField", (char*)"sssiissisiisssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Message);
}
CZQThostFtdcNotifySyncKeyField * from_CZQThostFtdcNotifySyncKeyField(PyObject * p){
  CZQThostFtdcNotifySyncKeyField *t = (CZQThostFtdcNotifySyncKeyField *)calloc(1, sizeof(CZQThostFtdcNotifySyncKeyField));
  memset(t,0,sizeof(CZQThostFtdcNotifySyncKeyField));
  //期商分支机构代码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //用户标识
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //业务功能码
  strcpy(t->TradeCode, PyString_AsString(PyObject_GetAttrString(p, "TradeCode")));
  //银行分支机构代码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //会话号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //银期平台消息流水号
  t->PlateSerial =   PyInt_AsLong(PyObject_GetAttrString(p, "PlateSerial"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
  //银行流水号
  strcpy(t->BankSerial, PyString_AsString(PyObject_GetAttrString(p, "BankSerial")));
  //交易柜员
  strcpy(t->OperNo, PyString_AsString(PyObject_GetAttrString(p, "OperNo")));
  //交易系统日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //期商代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //渠道标志
  strcpy(t->DeviceID, PyString_AsString(PyObject_GetAttrString(p, "DeviceID")));
  //交易日期
  strcpy(t->TradeDate, PyString_AsString(PyObject_GetAttrString(p, "TradeDate")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //最后分片标志
  //enum类型
  //THOST_FTDC_LF_No -> '1', 不是最后分片
  //THOST_FTDC_LF_Yes -> '0', 是最后分片
  t->LastFragment =   PyString_AsString(PyObject_GetAttrString(p, "LastFragment"))[0];
  //请求编号
  t->RequestID =   PyInt_AsLong(PyObject_GetAttrString(p, "RequestID"));
  //期货公司银行编码
  strcpy(t->BrokerIDByBank, PyString_AsString(PyObject_GetAttrString(p, "BrokerIDByBank")));
  //交易核心给银期报盘的消息
  strcpy(t->Message, PyString_AsString(PyObject_GetAttrString(p, "Message")));

  return t;
};

//数据同步状态
PyObject * new_CZQThostFtdcSyncStatusField(CZQThostFtdcSyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncStatusField", (char*)"sc",
p->TradingDay, p->DataSyncStatus);
}
CZQThostFtdcSyncStatusField * from_CZQThostFtdcSyncStatusField(PyObject * p){
  CZQThostFtdcSyncStatusField *t = (CZQThostFtdcSyncStatusField *)calloc(1, sizeof(CZQThostFtdcSyncStatusField));
  memset(t,0,sizeof(CZQThostFtdcSyncStatusField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //数据同步状态
  //enum类型
  //THOST_FTDC_DS_Synchronized -> '3', 已同步
  //THOST_FTDC_DS_Asynchronous -> '1', 未同步
  //THOST_FTDC_DS_Synchronizing -> '2', 同步中
  t->DataSyncStatus =   PyString_AsString(PyObject_GetAttrString(p, "DataSyncStatus"))[0];

  return t;
};

//正在同步中的投资者分组
PyObject * new_CZQThostFtdcSyncingInvestorGroupField(CZQThostFtdcSyncingInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcSyncingInvestorGroupField", (char*)"sss",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
CZQThostFtdcSyncingInvestorGroupField * from_CZQThostFtdcSyncingInvestorGroupField(PyObject * p){
  CZQThostFtdcSyncingInvestorGroupField *t = (CZQThostFtdcSyncingInvestorGroupField *)calloc(1, sizeof(CZQThostFtdcSyncingInvestorGroupField));
  memset(t,0,sizeof(CZQThostFtdcSyncingInvestorGroupField));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者分组名称
  strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

  return t;
};

//行情基础属性
PyObject * new_CZQThostFtdcMarketDataBaseField(CZQThostFtdcMarketDataBaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataBaseField", (char*)"sdddd",
p->TradingDay, p->PreDelta, p->PreClosePrice, p->PreOpenInterest, p->PreSettlementPrice);
}
CZQThostFtdcMarketDataBaseField * from_CZQThostFtdcMarketDataBaseField(PyObject * p){
  CZQThostFtdcMarketDataBaseField *t = (CZQThostFtdcMarketDataBaseField *)calloc(1, sizeof(CZQThostFtdcMarketDataBaseField));
  memset(t,0,sizeof(CZQThostFtdcMarketDataBaseField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //昨虚实度
  t->PreDelta =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDelta"));
  //昨收盘
  t->PreClosePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreClosePrice"));
  //昨持仓量
  t->PreOpenInterest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreOpenInterest"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));

  return t;
};

//投资者组合持仓明细
PyObject * new_CZQThostFtdcInvestorPositionCombineDetailField(CZQThostFtdcInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInvestorPositionCombineDetailField", (char*)"ssdsisiddicsisdcsss",
p->InstrumentID, p->ExchangeID, p->MarginRateByVolume, p->ComTradeID, p->SettlementID, p->InvestorID, p->TotalAmt, p->Margin, p->ExchMargin, p->LegMultiple, p->HedgeFlag, p->TradeID, p->LegID, p->TradingDay, p->MarginRateByMoney, p->Direction, p->BrokerID, p->CombInstrumentID, p->OpenDate);
}
CZQThostFtdcInvestorPositionCombineDetailField * from_CZQThostFtdcInvestorPositionCombineDetailField(PyObject * p){
  CZQThostFtdcInvestorPositionCombineDetailField *t = (CZQThostFtdcInvestorPositionCombineDetailField *)calloc(1, sizeof(CZQThostFtdcInvestorPositionCombineDetailField));
  memset(t,0,sizeof(CZQThostFtdcInvestorPositionCombineDetailField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //组合编号
  strcpy(t->ComTradeID, PyString_AsString(PyObject_GetAttrString(p, "ComTradeID")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //持仓量
  t->TotalAmt =   PyInt_AsLong(PyObject_GetAttrString(p, "TotalAmt"));
  //投资者保证金
  t->Margin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
  //交易所保证金
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //单腿乘数
  t->LegMultiple =   PyInt_AsLong(PyObject_GetAttrString(p, "LegMultiple"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //撮合编号
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //单腿编号
  t->LegID =   PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //买卖
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_RepayMargin -> '6', 卖券还款
  //THOST_FTDC_D_Sell -> '1', 卖
  //THOST_FTDC_D_ETFRed -> '3', ETF赎回
  //THOST_FTDC_D_RepayStock -> '7', 买券还券
  //THOST_FTDC_D_ETFPur -> '2', ETF申购
  //THOST_FTDC_D_ShortSell -> '5', 融券卖出
  //THOST_FTDC_D_TransferSecuritiesOut -> 'b', 担保品划转出信用账户
  //THOST_FTDC_D_DirectRepayStock -> '9', 直接还券
  //THOST_FTDC_D_DirectRepayMargin -> '8', 直接还款
  //THOST_FTDC_D_CashIn -> 'c', 现金替代，只用作回报
  //THOST_FTDC_D_MarginTrade -> '4', 融资买入
  //THOST_FTDC_D_TransferSecuritiesIn -> 'a', 担保品划转入信用账户
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //组合持仓合约编码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
  //开仓日期
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));

  return t;
};

//查询交易编码
PyObject * new_CZQThostFtdcQryInvestorGroupField(CZQThostFtdcQryInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryInvestorGroupField", (char*)"s",
p->BrokerID);
}
CZQThostFtdcQryInvestorGroupField * from_CZQThostFtdcQryInvestorGroupField(PyObject * p){
  CZQThostFtdcQryInvestorGroupField *t = (CZQThostFtdcQryInvestorGroupField *)calloc(1, sizeof(CZQThostFtdcQryInvestorGroupField));
  memset(t,0,sizeof(CZQThostFtdcQryInvestorGroupField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询转帐银行
PyObject * new_CZQThostFtdcQryTransferBankField(CZQThostFtdcQryTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryTransferBankField", (char*)"ss",
p->BankBrchID, p->BankID);
}
CZQThostFtdcQryTransferBankField * from_CZQThostFtdcQryTransferBankField(PyObject * p){
  CZQThostFtdcQryTransferBankField *t = (CZQThostFtdcQryTransferBankField *)calloc(1, sizeof(CZQThostFtdcQryTransferBankField));
  memset(t,0,sizeof(CZQThostFtdcQryTransferBankField));
  //银行分中心代码
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//查询行情报盘机
PyObject * new_CZQThostFtdcQryMDTraderOfferField(CZQThostFtdcQryMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryMDTraderOfferField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
CZQThostFtdcQryMDTraderOfferField * from_CZQThostFtdcQryMDTraderOfferField(PyObject * p){
  CZQThostFtdcQryMDTraderOfferField *t = (CZQThostFtdcQryMDTraderOfferField *)calloc(1, sizeof(CZQThostFtdcQryMDTraderOfferField));
  memset(t,0,sizeof(CZQThostFtdcQryMDTraderOfferField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//行情申卖二、三属性
PyObject * new_CZQThostFtdcMarketDataAsk23Field(CZQThostFtdcMarketDataAsk23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcMarketDataAsk23Field", (char*)"iidd",
p->AskVolume3, p->AskVolume2, p->AskPrice3, p->AskPrice2);
}
CZQThostFtdcMarketDataAsk23Field * from_CZQThostFtdcMarketDataAsk23Field(PyObject * p){
  CZQThostFtdcMarketDataAsk23Field *t = (CZQThostFtdcMarketDataAsk23Field *)calloc(1, sizeof(CZQThostFtdcMarketDataAsk23Field));
  memset(t,0,sizeof(CZQThostFtdcMarketDataAsk23Field));
  //申卖量三
  t->AskVolume3 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume3"));
  //申卖量二
  t->AskVolume2 =   PyInt_AsLong(PyObject_GetAttrString(p, "AskVolume2"));
  //申卖价三
  t->AskPrice3 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice3"));
  //申卖价二
  t->AskPrice2 =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AskPrice2"));

  return t;
};

//经纪公司
PyObject * new_CZQThostFtdcBrokerField(CZQThostFtdcBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcBrokerField", (char*)"sssi",
p->BrokerAbbr, p->BrokerID, p->BrokerName, p->IsActive);
}
CZQThostFtdcBrokerField * from_CZQThostFtdcBrokerField(PyObject * p){
  CZQThostFtdcBrokerField *t = (CZQThostFtdcBrokerField *)calloc(1, sizeof(CZQThostFtdcBrokerField));
  memset(t,0,sizeof(CZQThostFtdcBrokerField));
  //经纪公司简称
  strcpy(t->BrokerAbbr, PyString_AsString(PyObject_GetAttrString(p, "BrokerAbbr")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //经纪公司名称
  strcpy(t->BrokerName, PyString_AsString(PyObject_GetAttrString(p, "BrokerName")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//交易所报单插入失败
PyObject * new_CZQThostFtdcExchangeOrderInsertErrorField(CZQThostFtdcExchangeOrderInsertErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcExchangeOrderInsertErrorField", (char*)"sissssi",
p->ExchangeID, p->InstallID, p->ParticipantID, p->OrderLocalID, p->ErrorMsg, p->TraderID, p->ErrorID);
}
CZQThostFtdcExchangeOrderInsertErrorField * from_CZQThostFtdcExchangeOrderInsertErrorField(PyObject * p){
  CZQThostFtdcExchangeOrderInsertErrorField *t = (CZQThostFtdcExchangeOrderInsertErrorField *)calloc(1, sizeof(CZQThostFtdcExchangeOrderInsertErrorField));
  memset(t,0,sizeof(CZQThostFtdcExchangeOrderInsertErrorField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //错误信息
  strcpy(t->ErrorMsg, PyString_AsString(PyObject_GetAttrString(p, "ErrorMsg")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//投资者
PyObject * new_CZQThostFtdcInvestorField(CZQThostFtdcInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInvestorField", (char*)"ssssssisssssic",
p->SZBranchID, p->InvestorName, p->Mobile, p->IdentifiedCardNo, p->Telephone, p->InvestorID, p->IsCreditAccount, p->BrokerID, p->SHBranchID, p->Address, p->InvestorGroupID, p->OpenDate, p->IsActive, p->IdentifiedCardType);
}
CZQThostFtdcInvestorField * from_CZQThostFtdcInvestorField(PyObject * p){
  CZQThostFtdcInvestorField *t = (CZQThostFtdcInvestorField *)calloc(1, sizeof(CZQThostFtdcInvestorField));
  memset(t,0,sizeof(CZQThostFtdcInvestorField));
  //深圳营业部编号
  strcpy(t->SZBranchID, PyString_AsString(PyObject_GetAttrString(p, "SZBranchID")));
  //投资者名称
  strcpy(t->InvestorName, PyString_AsString(PyObject_GetAttrString(p, "InvestorName")));
  //手机
  strcpy(t->Mobile, PyString_AsString(PyObject_GetAttrString(p, "Mobile")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //联系电话
  strcpy(t->Telephone, PyString_AsString(PyObject_GetAttrString(p, "Telephone")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //是否信用账户
  t->IsCreditAccount =   PyInt_AsLong(PyObject_GetAttrString(p, "IsCreditAccount"));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //上海营业部编号
  strcpy(t->SHBranchID, PyString_AsString(PyObject_GetAttrString(p, "SHBranchID")));
  //通讯地址
  strcpy(t->Address, PyString_AsString(PyObject_GetAttrString(p, "Address")));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //开户日期
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_OfficerIDCard -> '2', 军官证
  //THOST_FTDC_ICT_IDCard -> '1', 身份证
  //THOST_FTDC_ICT_TaiwanCompatriotIDCard -> '7', 台胞证
  //THOST_FTDC_ICT_OtherCard -> 'x', 其他证件
  //THOST_FTDC_ICT_PoliceIDCard -> '3', 警官证
  //THOST_FTDC_ICT_Passport -> '6', 护照
  //THOST_FTDC_ICT_EID -> '0', 组织机构代码
  //THOST_FTDC_ICT_HomeComingCard -> '8', 回乡证
  //THOST_FTDC_ICT_HouseholdRegister -> '5', 户口簿
  //THOST_FTDC_ICT_SoldierIDCard -> '4', 士兵证
  t->IdentifiedCardType =   PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardType"))[0];

  return t;
};

//查询行情
PyObject * new_CZQThostFtdcQryDepthMarketDataField(CZQThostFtdcQryDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryDepthMarketDataField", (char*)"s",
p->InstrumentID);
}
CZQThostFtdcQryDepthMarketDataField * from_CZQThostFtdcQryDepthMarketDataField(PyObject * p){
  CZQThostFtdcQryDepthMarketDataField *t = (CZQThostFtdcQryDepthMarketDataField *)calloc(1, sizeof(CZQThostFtdcQryDepthMarketDataField));
  memset(t,0,sizeof(CZQThostFtdcQryDepthMarketDataField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

  return t;
};

//投资者组
PyObject * new_CZQThostFtdcInvestorGroupField(CZQThostFtdcInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcInvestorGroupField", (char*)"sss",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
CZQThostFtdcInvestorGroupField * from_CZQThostFtdcInvestorGroupField(PyObject * p){
  CZQThostFtdcInvestorGroupField *t = (CZQThostFtdcInvestorGroupField *)calloc(1, sizeof(CZQThostFtdcInvestorGroupField));
  memset(t,0,sizeof(CZQThostFtdcInvestorGroupField));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者分组名称
  strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

  return t;
};

//查询经纪公司会员代码
PyObject * new_CZQThostFtdcQryPartBrokerField(CZQThostFtdcQryPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CZQThostFtdcQryPartBrokerField", (char*)"sss",
p->ExchangeID, p->BrokerID, p->ParticipantID);
}
CZQThostFtdcQryPartBrokerField * from_CZQThostFtdcQryPartBrokerField(PyObject * p){
  CZQThostFtdcQryPartBrokerField *t = (CZQThostFtdcQryPartBrokerField *)calloc(1, sizeof(CZQThostFtdcQryPartBrokerField));
  memset(t,0,sizeof(CZQThostFtdcQryPartBrokerField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};
