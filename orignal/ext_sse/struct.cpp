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

//查询银行交易明细请求响应
PyObject * new_CThostFtdcTransferQryDetailRspField(CThostFtdcTransferQryDetailRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryDetailRspField", (char*)"sssssiissdcsss",
p->BankAccount, p->FutureAccount, p->TradeDate, p->TradeCode, p->CurrencyCode, p->BankSerial, p->FutureSerial, p->FutureID, p->CertCode, p->TxAmount, p->Flag, p->TradeTime, p->BankBrchID, p->BankID);
}
CThostFtdcTransferQryDetailRspField * from_CThostFtdcTransferQryDetailRspField(PyObject * p){
  CThostFtdcTransferQryDetailRspField *t = (CThostFtdcTransferQryDetailRspField *)calloc(1, sizeof(CThostFtdcTransferQryDetailRspField));
  memset(t,0,sizeof(CThostFtdcTransferQryDetailRspField));
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

//投资者账户
PyObject * new_CThostFtdcInvestorAccountField(CThostFtdcInvestorAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorAccountField", (char*)"sss",
p->InvestorID, p->BrokerID, p->AccountID);
}
CThostFtdcInvestorAccountField * from_CThostFtdcInvestorAccountField(PyObject * p){
  CThostFtdcInvestorAccountField *t = (CThostFtdcInvestorAccountField *)calloc(1, sizeof(CThostFtdcInvestorAccountField));
  memset(t,0,sizeof(CThostFtdcInvestorAccountField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//客户通知
PyObject * new_CThostFtdcNoticeField(CThostFtdcNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNoticeField", (char*)"sss",
p->Content, p->SequenceLabel, p->BrokerID);
}
CThostFtdcNoticeField * from_CThostFtdcNoticeField(PyObject * p){
  CThostFtdcNoticeField *t = (CThostFtdcNoticeField *)calloc(1, sizeof(CThostFtdcNoticeField));
  memset(t,0,sizeof(CThostFtdcNoticeField));
  //消息正文
  strcpy(t->Content, PyString_AsString(PyObject_GetAttrString(p, "Content")));
  //经纪公司通知内容序列号
  strcpy(t->SequenceLabel, PyString_AsString(PyObject_GetAttrString(p, "SequenceLabel")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//请求查询投资者手续费率模板
PyObject * new_CThostFtdcQryCommRateModelField(CThostFtdcQryCommRateModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCommRateModelField", (char*)"ss",
p->CommModelID, p->BrokerID);
}
CThostFtdcQryCommRateModelField * from_CThostFtdcQryCommRateModelField(PyObject * p){
  CThostFtdcQryCommRateModelField *t = (CThostFtdcQryCommRateModelField *)calloc(1, sizeof(CThostFtdcQryCommRateModelField));
  memset(t,0,sizeof(CThostFtdcQryCommRateModelField));
  //手续费率模板代码
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//经纪公司同步
PyObject * new_CThostFtdcBrokerSyncField(CThostFtdcBrokerSyncField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerSyncField", (char*)"s",
p->BrokerID);
}
CThostFtdcBrokerSyncField * from_CThostFtdcBrokerSyncField(PyObject * p){
  CThostFtdcBrokerSyncField *t = (CThostFtdcBrokerSyncField *)calloc(1, sizeof(CThostFtdcBrokerSyncField));
  memset(t,0,sizeof(CThostFtdcBrokerSyncField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询投资者持仓
PyObject * new_CThostFtdcQryInvestorPositionField(CThostFtdcQryInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
CThostFtdcQryInvestorPositionField * from_CThostFtdcQryInvestorPositionField(PyObject * p){
  CThostFtdcQryInvestorPositionField *t = (CThostFtdcQryInvestorPositionField *)calloc(1, sizeof(CThostFtdcQryInvestorPositionField));
  memset(t,0,sizeof(CThostFtdcQryInvestorPositionField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

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

//验证期货资金密码和客户信息
PyObject * new_CThostFtdcDepositResultInformField(CThostFtdcDepositResultInformField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDepositResultInformField", (char*)"ssssdsi",
p->ReturnCode, p->DepositSeqNo, p->InvestorID, p->BrokerID, p->Deposit, p->DescrInfoForReturnCode, p->RequestID);
}
CThostFtdcDepositResultInformField * from_CThostFtdcDepositResultInformField(PyObject * p){
  CThostFtdcDepositResultInformField *t = (CThostFtdcDepositResultInformField *)calloc(1, sizeof(CThostFtdcDepositResultInformField));
  memset(t,0,sizeof(CThostFtdcDepositResultInformField));
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

//投资者组
PyObject * new_CThostFtdcInvestorGroupField(CThostFtdcInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorGroupField", (char*)"sss",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
CThostFtdcInvestorGroupField * from_CThostFtdcInvestorGroupField(PyObject * p){
  CThostFtdcInvestorGroupField *t = (CThostFtdcInvestorGroupField *)calloc(1, sizeof(CThostFtdcInvestorGroupField));
  memset(t,0,sizeof(CThostFtdcInvestorGroupField));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者分组名称
  strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

  return t;
};

//会员资金折扣
PyObject * new_CThostFtdcDiscountField(CThostFtdcDiscountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDiscountField", (char*)"sscd",
p->InvestorID, p->BrokerID, p->InvestorRange, p->Discount);
}
CThostFtdcDiscountField * from_CThostFtdcDiscountField(PyObject * p){
  CThostFtdcDiscountField *t = (CThostFtdcDiscountField *)calloc(1, sizeof(CThostFtdcDiscountField));
  memset(t,0,sizeof(CThostFtdcDiscountField));
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

//经纪公司用户
PyObject * new_CThostFtdcBrokerUserField(CThostFtdcBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserField", (char*)"sscsii",
p->UserName, p->UserID, p->UserType, p->BrokerID, p->IsUsingOTP, p->IsActive);
}
CThostFtdcBrokerUserField * from_CThostFtdcBrokerUserField(PyObject * p){
  CThostFtdcBrokerUserField *t = (CThostFtdcBrokerUserField *)calloc(1, sizeof(CThostFtdcBrokerUserField));
  memset(t,0,sizeof(CThostFtdcBrokerUserField));
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

//查询报单
PyObject * new_CThostFtdcQryOrderField(CThostFtdcQryOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryOrderField", (char*)"sssssss",
p->InstrumentID, p->ExchangeID, p->InsertTimeStart, p->InvestorID, p->BrokerID, p->OrderSysID, p->InsertTimeEnd);
}
CThostFtdcQryOrderField * from_CThostFtdcQryOrderField(PyObject * p){
  CThostFtdcQryOrderField *t = (CThostFtdcQryOrderField *)calloc(1, sizeof(CThostFtdcQryOrderField));
  memset(t,0,sizeof(CThostFtdcQryOrderField));
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

//交易所
PyObject * new_CThostFtdcExchangeField(CThostFtdcExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeField", (char*)"css",
p->ExchangeProperty, p->ExchangeID, p->ExchangeName);
}
CThostFtdcExchangeField * from_CThostFtdcExchangeField(PyObject * p){
  CThostFtdcExchangeField *t = (CThostFtdcExchangeField *)calloc(1, sizeof(CThostFtdcExchangeField));
  memset(t,0,sizeof(CThostFtdcExchangeField));
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

//查询账户信息请求
PyObject * new_CThostFtdcReqQueryAccountField(CThostFtdcReqQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqQueryAccountField", (char*)"sssscississsisscicssssssscissccicscs",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest);
}
CThostFtdcReqQueryAccountField * from_CThostFtdcReqQueryAccountField(PyObject * p){
  CThostFtdcReqQueryAccountField *t = (CThostFtdcReqQueryAccountField *)calloc(1, sizeof(CThostFtdcReqQueryAccountField));
  memset(t,0,sizeof(CThostFtdcReqQueryAccountField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//银期销户信息
PyObject * new_CThostFtdcCancelAccountField(CThostFtdcCancelAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCancelAccountField", (char*)"csssscisssisssssisicicssssscsccsssssccscscsss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankSecuAcc, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->Gender, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest, p->DeviceID);
}
CThostFtdcCancelAccountField * from_CThostFtdcCancelAccountField(PyObject * p){
  CThostFtdcCancelAccountField *t = (CThostFtdcCancelAccountField *)calloc(1, sizeof(CThostFtdcCancelAccountField));
  memset(t,0,sizeof(CThostFtdcCancelAccountField));
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
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//银期转帐报文头
PyObject * new_CThostFtdcTransferHeaderField(CThostFtdcTransferHeaderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferHeaderField", (char*)"ssssisssssssi",
p->TradeDate, p->TradeCode, p->FutureID, p->OperNo, p->SessionID, p->Version, p->TradeTime, p->DeviceID, p->BankBrchID, p->BankID, p->RecordNum, p->TradeSerial, p->RequestID);
}
CThostFtdcTransferHeaderField * from_CThostFtdcTransferHeaderField(PyObject * p){
  CThostFtdcTransferHeaderField *t = (CThostFtdcTransferHeaderField *)calloc(1, sizeof(CThostFtdcTransferHeaderField));
  memset(t,0,sizeof(CThostFtdcTransferHeaderField));
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

//前置状态
PyObject * new_CThostFtdcFrontStatusField(CThostFtdcFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcFrontStatusField", (char*)"isis",
p->FrontID, p->LastReportDate, p->IsActive, p->LastReportTime);
}
CThostFtdcFrontStatusField * from_CThostFtdcFrontStatusField(PyObject * p){
  CThostFtdcFrontStatusField *t = (CThostFtdcFrontStatusField *)calloc(1, sizeof(CThostFtdcFrontStatusField));
  memset(t,0,sizeof(CThostFtdcFrontStatusField));
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

//投资者持仓
PyObject * new_CThostFtdcInvestorPositionField(CThostFtdcInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionField", (char*)"ddcdddiddidcidiidscddiiiisdsdddididddsdd",
p->ShortFrozenAmount, p->FrozenMargin, p->HedgeFlag, p->PositionProfit, p->Commission, p->MarginRateByVolume, p->CombPosition, p->CashIn, p->PreSettlementPrice, p->CombLongFrozen, p->CloseAmount, p->PosiDirection, p->YdPosition, p->MarginRateByMoney, p->OpenVolume, p->CloseVolume, p->ExchangeMargin, p->InstrumentID, p->PositionDate, p->CloseProfitByTrade, p->PreMargin, p->SettlementID, p->ShortFrozen, p->LongFrozen, p->TodayPosition, p->TradingDay, p->PositionCost, p->BrokerID, p->FrozenCash, p->OpenAmount, p->OpenCost, p->Position, p->FrozenCommission, p->CombShortFrozen, p->CloseProfitByDate, p->SettlementPrice, p->LongFrozenAmount, p->InvestorID, p->CloseProfit, p->UseMargin);
}
CThostFtdcInvestorPositionField * from_CThostFtdcInvestorPositionField(PyObject * p){
  CThostFtdcInvestorPositionField *t = (CThostFtdcInvestorPositionField *)calloc(1, sizeof(CThostFtdcInvestorPositionField));
  memset(t,0,sizeof(CThostFtdcInvestorPositionField));
  //开仓冻结金额
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //组合成交形成的持仓
  t->CombPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "CombPosition"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //组合多头冻结
  t->CombLongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //持仓多空方向
  //enum类型
  //THOST_FTDC_PD_Net -> '1', 净
  //THOST_FTDC_PD_Short -> '3', 空头
  //THOST_FTDC_PD_Long -> '2', 多头
  t->PosiDirection =   PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
  //上日持仓
  t->YdPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //开仓量
  t->OpenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //平仓量
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //持仓日期
  //enum类型
  //THOST_FTDC_PSD_Today -> '1', 今日持仓
  //THOST_FTDC_PSD_History -> '2', 历史持仓
  t->PositionDate =   PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
  //逐笔对冲平仓盈亏
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
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
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //开仓金额
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //开仓成本
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //今日持仓
  t->Position =   PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //组合空头冻结
  t->CombShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
  //逐日盯市平仓盈亏
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //开仓冻结金额
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //占用的保证金
  t->UseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));

  return t;
};

//查询交易所状态
PyObject * new_CThostFtdcQryExchangeSequenceField(CThostFtdcQryExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeSequenceField", (char*)"s",
p->ExchangeID);
}
CThostFtdcQryExchangeSequenceField * from_CThostFtdcQryExchangeSequenceField(PyObject * p){
  CThostFtdcQryExchangeSequenceField *t = (CThostFtdcQryExchangeSequenceField *)calloc(1, sizeof(CThostFtdcQryExchangeSequenceField));
  memset(t,0,sizeof(CThostFtdcQryExchangeSequenceField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//查询联系人
PyObject * new_CThostFtdcQryLinkManField(CThostFtdcQryLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryLinkManField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryLinkManField * from_CThostFtdcQryLinkManField(PyObject * p){
  CThostFtdcQryLinkManField *t = (CThostFtdcQryLinkManField *)calloc(1, sizeof(CThostFtdcQryLinkManField));
  memset(t,0,sizeof(CThostFtdcQryLinkManField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//请求查询转帐流水
PyObject * new_CThostFtdcQryTransferSerialField(CThostFtdcQryTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTransferSerialField", (char*)"sss",
p->BankID, p->BrokerID, p->AccountID);
}
CThostFtdcQryTransferSerialField * from_CThostFtdcQryTransferSerialField(PyObject * p){
  CThostFtdcQryTransferSerialField *t = (CThostFtdcQryTransferSerialField *)calloc(1, sizeof(CThostFtdcQryTransferSerialField));
  memset(t,0,sizeof(CThostFtdcQryTransferSerialField));
  //银行编码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//交易所报单操作失败
PyObject * new_CThostFtdcExchangeOrderActionErrorField(CThostFtdcExchangeOrderActionErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderActionErrorField", (char*)"sisssssi",
p->ExchangeID, p->InstallID, p->OrderLocalID, p->ErrorMsg, p->TraderID, p->ActionLocalID, p->OrderSysID, p->ErrorID);
}
CThostFtdcExchangeOrderActionErrorField * from_CThostFtdcExchangeOrderActionErrorField(PyObject * p){
  CThostFtdcExchangeOrderActionErrorField *t = (CThostFtdcExchangeOrderActionErrorField *)calloc(1, sizeof(CThostFtdcExchangeOrderActionErrorField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderActionErrorField));
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

//查询报单
PyObject * new_CThostFtdcQryHisOrderField(CThostFtdcQryHisOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryHisOrderField", (char*)"ssissssss",
p->InstrumentID, p->ExchangeID, p->SettlementID, p->InsertTimeStart, p->InvestorID, p->BrokerID, p->OrderSysID, p->TradingDay, p->InsertTimeEnd);
}
CThostFtdcQryHisOrderField * from_CThostFtdcQryHisOrderField(PyObject * p){
  CThostFtdcQryHisOrderField *t = (CThostFtdcQryHisOrderField *)calloc(1, sizeof(CThostFtdcQryHisOrderField));
  memset(t,0,sizeof(CThostFtdcQryHisOrderField));
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

//正在同步中的合约交易权限
PyObject * new_CThostFtdcSyncingInstrumentTradingRightField(CThostFtdcSyncingInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentTradingRightField", (char*)"ssscc",
p->InstrumentID, p->InvestorID, p->BrokerID, p->InvestorRange, p->TradingRight);
}
CThostFtdcSyncingInstrumentTradingRightField * from_CThostFtdcSyncingInstrumentTradingRightField(PyObject * p){
  CThostFtdcSyncingInstrumentTradingRightField *t = (CThostFtdcSyncingInstrumentTradingRightField *)calloc(1, sizeof(CThostFtdcSyncingInstrumentTradingRightField));
  memset(t,0,sizeof(CThostFtdcSyncingInstrumentTradingRightField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
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
  //交易权限
  //enum类型
  //THOST_FTDC_TR_Allow -> '0', 可以交易
  //THOST_FTDC_TR_Forbidden -> '2', 不能交易
  //THOST_FTDC_TR_CloseOnly -> '1', 只能平仓
  t->TradingRight =   PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];

  return t;
};

//查询交易编码
PyObject * new_CThostFtdcQryTradingCodeField(CThostFtdcQryTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingCodeField", (char*)"ssscs",
p->InvestorID, p->ExchangeID, p->BrokerID, p->ClientIDType, p->ClientID);
}
CThostFtdcQryTradingCodeField * from_CThostFtdcQryTradingCodeField(PyObject * p){
  CThostFtdcQryTradingCodeField *t = (CThostFtdcQryTradingCodeField *)calloc(1, sizeof(CThostFtdcQryTradingCodeField));
  memset(t,0,sizeof(CThostFtdcQryTradingCodeField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //交易编码类型
  //enum类型
  //THOST_FTDC_CIDT_Hedge -> '3', 套保
  //THOST_FTDC_CIDT_Arbitrage -> '2', 套利
  //THOST_FTDC_CIDT_Speculation -> '1', 投机
  t->ClientIDType =   PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));

  return t;
};

//用户登录应答
PyObject * new_CThostFtdcRspUserLoginField(CThostFtdcRspUserLoginField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspUserLoginField", (char*)"sssssisissss",
p->CZCETime, p->SHFETime, p->MaxOrderRef, p->UserID, p->TradingDay, p->SessionID, p->SystemName, p->FrontID, p->FFEXTime, p->BrokerID, p->DCETime, p->LoginTime);
}
CThostFtdcRspUserLoginField * from_CThostFtdcRspUserLoginField(PyObject * p){
  CThostFtdcRspUserLoginField *t = (CThostFtdcRspUserLoginField *)calloc(1, sizeof(CThostFtdcRspUserLoginField));
  memset(t,0,sizeof(CThostFtdcRspUserLoginField));
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

//正在同步中的投资者
PyObject * new_CThostFtdcSyncingInvestorField(CThostFtdcSyncingInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorField", (char*)"ssssssssssic",
p->CommModelID, p->InvestorName, p->Mobile, p->IdentifiedCardNo, p->Telephone, p->InvestorID, p->BrokerID, p->Address, p->InvestorGroupID, p->OpenDate, p->IsActive, p->IdentifiedCardType);
}
CThostFtdcSyncingInvestorField * from_CThostFtdcSyncingInvestorField(PyObject * p){
  CThostFtdcSyncingInvestorField *t = (CThostFtdcSyncingInvestorField *)calloc(1, sizeof(CThostFtdcSyncingInvestorField));
  memset(t,0,sizeof(CThostFtdcSyncingInvestorField));
  //手续费率模板代码
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
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
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//查询投资者持仓明细
PyObject * new_CThostFtdcQryInvestorPositionDetailField(CThostFtdcQryInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionDetailField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
CThostFtdcQryInvestorPositionDetailField * from_CThostFtdcQryInvestorPositionDetailField(PyObject * p){
  CThostFtdcQryInvestorPositionDetailField *t = (CThostFtdcQryInvestorPositionDetailField *)calloc(1, sizeof(CThostFtdcQryInvestorPositionDetailField));
  memset(t,0,sizeof(CThostFtdcQryInvestorPositionDetailField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//投资者持仓明细
PyObject * new_CThostFtdcInvestorPositionDetailField(CThostFtdcInvestorPositionDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionDetailField", (char*)"ddcdcdcddidissdissdsdddsss",
p->PositionProfitByDate, p->ExchMargin, p->TradeType, p->MarginRateByMoney, p->HedgeFlag, p->MarginRateByVolume, p->Direction, p->CloseAmount, p->OpenPrice, p->Volume, p->LastSettlementPrice, p->CloseVolume, p->InstrumentID, p->ExchangeID, p->CloseProfitByTrade, p->SettlementID, p->TradingDay, p->BrokerID, p->Margin, p->TradeID, p->PositionProfitByTrade, p->CloseProfitByDate, p->SettlementPrice, p->InvestorID, p->CombInstrumentID, p->OpenDate);
}
CThostFtdcInvestorPositionDetailField * from_CThostFtdcInvestorPositionDetailField(PyObject * p){
  CThostFtdcInvestorPositionDetailField *t = (CThostFtdcInvestorPositionDetailField *)calloc(1, sizeof(CThostFtdcInvestorPositionDetailField));
  memset(t,0,sizeof(CThostFtdcInvestorPositionDetailField));
  //逐日盯市持仓盈亏
  t->PositionProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByDate"));
  //交易所保证金
  t->ExchMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchMargin"));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //买卖
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
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
  //逐笔对冲平仓盈亏
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者保证金
  t->Margin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Margin"));
  //成交编号
  strcpy(t->TradeID, PyString_AsString(PyObject_GetAttrString(p, "TradeID")));
  //逐笔对冲持仓盈亏
  t->PositionProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfitByTrade"));
  //逐日盯市平仓盈亏
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //组合合约代码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
  //开仓日期
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));

  return t;
};

//交易所报单
PyObject * new_CThostFtdcExchangeOrderField(CThostFtdcExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderField", (char*)"ciiisdcisissicccscsdsiiccssscsssssssssicis",
p->ContingentCondition, p->NotifySequence, p->VolumeTraded, p->IsAutoSuspend, p->TraderID, p->LimitPrice, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->CombOffsetFlag, p->StopPrice, p->ExchangeID, p->MinVolume, p->SettlementID, p->ForceCloseReason, p->OrderType, p->UpdateTime, p->TradingDay, p->ActiveTime, p->OrderSource, p->InsertTime, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->VolumeCondition, p->RequestID, p->ActiveTraderID);
}
CThostFtdcExchangeOrderField * from_CThostFtdcExchangeOrderField(PyObject * p){
  CThostFtdcExchangeOrderField *t = (CThostFtdcExchangeOrderField *)calloc(1, sizeof(CThostFtdcExchangeOrderField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderField));
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
  //自动挂起标志
  t->IsAutoSuspend =   PyInt_AsLong(PyObject_GetAttrString(p, "IsAutoSuspend"));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
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
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
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
  //组合开平标志
  strcpy(t->CombOffsetFlag, PyString_AsString(PyObject_GetAttrString(p, "CombOffsetFlag")));
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
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
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

//查询账户信息响应
PyObject * new_CThostFtdcRspQueryAccountField(CThostFtdcRspQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspQueryAccountField", (char*)"sssscississsisscicsssssssdcissccicscsd",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->BankUseAmount, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest, p->BankFetchAmount);
}
CThostFtdcRspQueryAccountField * from_CThostFtdcRspQueryAccountField(PyObject * p){
  CThostFtdcRspQueryAccountField *t = (CThostFtdcRspQueryAccountField *)calloc(1, sizeof(CThostFtdcRspQueryAccountField));
  memset(t,0,sizeof(CThostFtdcRspQueryAccountField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//查询结算信息确认域
PyObject * new_CThostFtdcQrySettlementInfoConfirmField(CThostFtdcQrySettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySettlementInfoConfirmField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQrySettlementInfoConfirmField * from_CThostFtdcQrySettlementInfoConfirmField(PyObject * p){
  CThostFtdcQrySettlementInfoConfirmField *t = (CThostFtdcQrySettlementInfoConfirmField *)calloc(1, sizeof(CThostFtdcQrySettlementInfoConfirmField));
  memset(t,0,sizeof(CThostFtdcQrySettlementInfoConfirmField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//银期开户信息
PyObject * new_CThostFtdcOpenAccountField(CThostFtdcOpenAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOpenAccountField", (char*)"csssscisssisssssisicicssssscsccsssssccscscsss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankSecuAcc, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->Gender, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest, p->DeviceID);
}
CThostFtdcOpenAccountField * from_CThostFtdcOpenAccountField(PyObject * p){
  CThostFtdcOpenAccountField *t = (CThostFtdcOpenAccountField *)calloc(1, sizeof(CThostFtdcOpenAccountField));
  memset(t,0,sizeof(CThostFtdcOpenAccountField));
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
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//查询交易事件通知
PyObject * new_CThostFtdcQryTradingNoticeField(CThostFtdcQryTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingNoticeField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryTradingNoticeField * from_CThostFtdcQryTradingNoticeField(PyObject * p){
  CThostFtdcQryTradingNoticeField *t = (CThostFtdcQryTradingNoticeField *)calloc(1, sizeof(CThostFtdcQryTradingNoticeField));
  memset(t,0,sizeof(CThostFtdcQryTradingNoticeField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询错误报单
PyObject * new_CThostFtdcQryErrOrderField(CThostFtdcQryErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryErrOrderField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryErrOrderField * from_CThostFtdcQryErrOrderField(PyObject * p){
  CThostFtdcQryErrOrderField *t = (CThostFtdcQryErrOrderField *)calloc(1, sizeof(CThostFtdcQryErrOrderField));
  memset(t,0,sizeof(CThostFtdcQryErrOrderField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//手工同步用户动态令牌
PyObject * new_CThostFtdcManualSyncBrokerUserOTPField(CThostFtdcManualSyncBrokerUserOTPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcManualSyncBrokerUserOTPField", (char*)"ssssc",
p->UserID, p->BrokerID, p->FirstOTP, p->SecondOTP, p->OTPType);
}
CThostFtdcManualSyncBrokerUserOTPField * from_CThostFtdcManualSyncBrokerUserOTPField(PyObject * p){
  CThostFtdcManualSyncBrokerUserOTPField *t = (CThostFtdcManualSyncBrokerUserOTPField *)calloc(1, sizeof(CThostFtdcManualSyncBrokerUserOTPField));
  memset(t,0,sizeof(CThostFtdcManualSyncBrokerUserOTPField));
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

//深度行情
PyObject * new_CThostFtdcDepthMarketDataField(CThostFtdcDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDepthMarketDataField", (char*)"ddddddddddddddisidiiiiddiiiiidisdssddddddsd",
p->HighestPrice, p->BidPrice5, p->BidPrice4, p->BidPrice1, p->BidPrice3, p->BidPrice2, p->LowerLimitPrice, p->OpenPrice, p->AskPrice5, p->AskPrice4, p->AskPrice3, p->PreClosePrice, p->AskPrice1, p->PreSettlementPrice, p->AskVolume1, p->UpdateTime, p->UpdateMillisec, p->AveragePrice, p->BidVolume5, p->BidVolume4, p->BidVolume3, p->BidVolume2, p->PreOpenInterest, p->AskPrice2, p->Volume, p->AskVolume3, p->AskVolume2, p->AskVolume5, p->AskVolume4, p->UpperLimitPrice, p->BidVolume1, p->InstrumentID, p->ClosePrice, p->ExchangeID, p->TradingDay, p->PreDelta, p->OpenInterest, p->CurrDelta, p->Turnover, p->LastPrice, p->SettlementPrice, p->ExchangeInstID, p->LowestPrice);
}
CThostFtdcDepthMarketDataField * from_CThostFtdcDepthMarketDataField(PyObject * p){
  CThostFtdcDepthMarketDataField *t = (CThostFtdcDepthMarketDataField *)calloc(1, sizeof(CThostFtdcDepthMarketDataField));
  memset(t,0,sizeof(CThostFtdcDepthMarketDataField));
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

//交易所交易员报盘机
PyObject * new_CThostFtdcTraderOfferField(CThostFtdcTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTraderOfferField", (char*)"ssissssssscssssssss",
p->StartDate, p->ExchangeID, p->InstallID, p->LastReportDate, p->ParticipantID, p->OrderLocalID, p->LastReportTime, p->TraderID, p->MaxTradeID, p->ConnectTime, p->TraderConnectStatus, p->TradingDay, p->ConnectRequestTime, p->StartTime, p->ConnectRequestDate, p->MaxOrderMessageReference, p->BrokerID, p->Password, p->ConnectDate);
}
CThostFtdcTraderOfferField * from_CThostFtdcTraderOfferField(PyObject * p){
  CThostFtdcTraderOfferField *t = (CThostFtdcTraderOfferField *)calloc(1, sizeof(CThostFtdcTraderOfferField));
  memset(t,0,sizeof(CThostFtdcTraderOfferField));
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
  //本席位最大成交编号
  strcpy(t->MaxTradeID, PyString_AsString(PyObject_GetAttrString(p, "MaxTradeID")));
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
  //本席位最大报单备拷
  strcpy(t->MaxOrderMessageReference, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderMessageReference")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //完成连接日期
  strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));

  return t;
};

//保证金监管系统经纪公司密钥
PyObject * new_CThostFtdcCFMMCBrokerKeyField(CThostFtdcCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCFMMCBrokerKeyField", (char*)"isscsss",
p->KeyID, p->ParticipantID, p->CreateDate, p->KeyKind, p->BrokerID, p->CreateTime, p->CurrentKey);
}
CThostFtdcCFMMCBrokerKeyField * from_CThostFtdcCFMMCBrokerKeyField(PyObject * p){
  CThostFtdcCFMMCBrokerKeyField *t = (CThostFtdcCFMMCBrokerKeyField *)calloc(1, sizeof(CThostFtdcCFMMCBrokerKeyField));
  memset(t,0,sizeof(CThostFtdcCFMMCBrokerKeyField));
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

//查询行情
PyObject * new_CThostFtdcQryDepthMarketDataField(CThostFtdcQryDepthMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryDepthMarketDataField", (char*)"s",
p->InstrumentID);
}
CThostFtdcQryDepthMarketDataField * from_CThostFtdcQryDepthMarketDataField(PyObject * p){
  CThostFtdcQryDepthMarketDataField *t = (CThostFtdcQryDepthMarketDataField *)calloc(1, sizeof(CThostFtdcQryDepthMarketDataField));
  memset(t,0,sizeof(CThostFtdcQryDepthMarketDataField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

  return t;
};

//查询银行交易明细请求，TradeCode=204999
PyObject * new_CThostFtdcTransferQryDetailReqField(CThostFtdcTransferQryDetailReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryDetailReqField", (char*)"s",
p->FutureAccount);
}
CThostFtdcTransferQryDetailReqField * from_CThostFtdcTransferQryDetailReqField(PyObject * p){
  CThostFtdcTransferQryDetailReqField *t = (CThostFtdcTransferQryDetailReqField *)calloc(1, sizeof(CThostFtdcTransferQryDetailReqField));
  memset(t,0,sizeof(CThostFtdcTransferQryDetailReqField));
  //期货资金账户
  strcpy(t->FutureAccount, PyString_AsString(PyObject_GetAttrString(p, "FutureAccount")));

  return t;
};

//经纪公司可提资金算法表
PyObject * new_CThostFtdcBrokerWithdrawAlgorithmField(CThostFtdcBrokerWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerWithdrawAlgorithmField", (char*)"cicdscc",
p->IncludeCloseProfit, p->IsBrokerUserEvent, p->AvailIncludeCloseProfit, p->UsingRatio, p->BrokerID, p->AllWithoutTrade, p->WithdrawAlgorithm);
}
CThostFtdcBrokerWithdrawAlgorithmField * from_CThostFtdcBrokerWithdrawAlgorithmField(PyObject * p){
  CThostFtdcBrokerWithdrawAlgorithmField *t = (CThostFtdcBrokerWithdrawAlgorithmField *)calloc(1, sizeof(CThostFtdcBrokerWithdrawAlgorithmField));
  memset(t,0,sizeof(CThostFtdcBrokerWithdrawAlgorithmField));
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

//行情交易所代码属性
PyObject * new_CThostFtdcMarketDataExchangeField(CThostFtdcMarketDataExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataExchangeField", (char*)"d",
p->ExchangeID);
}
CThostFtdcMarketDataExchangeField * from_CThostFtdcMarketDataExchangeField(PyObject * p){
  CThostFtdcMarketDataExchangeField *t = (CThostFtdcMarketDataExchangeField *)calloc(1, sizeof(CThostFtdcMarketDataExchangeField));
  memset(t,0,sizeof(CThostFtdcMarketDataExchangeField));
  //交易所代码
  t->ExchangeID =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeID"));

  return t;
};

//交易所报单插入失败
PyObject * new_CThostFtdcExchangeOrderInsertErrorField(CThostFtdcExchangeOrderInsertErrorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderInsertErrorField", (char*)"sissssi",
p->ExchangeID, p->InstallID, p->ParticipantID, p->OrderLocalID, p->ErrorMsg, p->TraderID, p->ErrorID);
}
CThostFtdcExchangeOrderInsertErrorField * from_CThostFtdcExchangeOrderInsertErrorField(PyObject * p){
  CThostFtdcExchangeOrderInsertErrorField *t = (CThostFtdcExchangeOrderInsertErrorField *)calloc(1, sizeof(CThostFtdcExchangeOrderInsertErrorField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderInsertErrorField));
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

//查询管理用户功能权限
PyObject * new_CThostFtdcQrySuperUserFunctionField(CThostFtdcQrySuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySuperUserFunctionField", (char*)"s",
p->UserID);
}
CThostFtdcQrySuperUserFunctionField * from_CThostFtdcQrySuperUserFunctionField(PyObject * p){
  CThostFtdcQrySuperUserFunctionField *t = (CThostFtdcQrySuperUserFunctionField *)calloc(1, sizeof(CThostFtdcQrySuperUserFunctionField));
  memset(t,0,sizeof(CThostFtdcQrySuperUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//冲正响应
PyObject * new_CThostFtdcRspRepealField(CThostFtdcRspRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspRepealField", (char*)"ssscisciissicsssisiciicscsssssscccsdssdccissicsisdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->BankRepealFlag, p->RepealedTimes, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->FutureRepealSerial, p->AccountID, p->BankAccount, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->BrokerRepealFlag, p->IdCardType, p->Password, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankRepealSerial, p->ErrorMsg, p->RepealTimeInterval, p->BankSecuAccType, p->BrokerIDByBank, p->PlateRepealSerial, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CThostFtdcRspRepealField * from_CThostFtdcRspRepealField(PyObject * p){
  CThostFtdcRspRepealField *t = (CThostFtdcRspRepealField *)calloc(1, sizeof(CThostFtdcRspRepealField));
  memset(t,0,sizeof(CThostFtdcRspRepealField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//查询成交
PyObject * new_CThostFtdcQryTradeField(CThostFtdcQryTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradeField", (char*)"sssssss",
p->InstrumentID, p->TradeTimeStart, p->ExchangeID, p->TradeID, p->InvestorID, p->BrokerID, p->TradeTimeEnd);
}
CThostFtdcQryTradeField * from_CThostFtdcQryTradeField(PyObject * p){
  CThostFtdcQryTradeField *t = (CThostFtdcQryTradeField *)calloc(1, sizeof(CThostFtdcQryTradeField));
  memset(t,0,sizeof(CThostFtdcQryTradeField));
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

//用户事件通知信息
PyObject * new_CThostFtdcTradingNoticeInfoField(CThostFtdcTradingNoticeInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingNoticeInfoField", (char*)"hissss",
p->SequenceSeries, p->SequenceNo, p->FieldContent, p->InvestorID, p->BrokerID, p->SendTime);
}
CThostFtdcTradingNoticeInfoField * from_CThostFtdcTradingNoticeInfoField(PyObject * p){
  CThostFtdcTradingNoticeInfoField *t = (CThostFtdcTradingNoticeInfoField *)calloc(1, sizeof(CThostFtdcTradingNoticeInfoField));
  memset(t,0,sizeof(CThostFtdcTradingNoticeInfoField));
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

//错误报单
PyObject * new_CThostFtdcErrOrderField(CThostFtdcErrOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrOrderField", (char*)"cssdiciccidsicisssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Direction, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->MinVolume, p->ForceCloseReason, p->ErrorID, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
CThostFtdcErrOrderField * from_CThostFtdcErrOrderField(PyObject * p){
  CThostFtdcErrOrderField *t = (CThostFtdcErrOrderField *)calloc(1, sizeof(CThostFtdcErrOrderField));
  memset(t,0,sizeof(CThostFtdcErrOrderField));
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
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
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
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
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

//查询签约银行响应
PyObject * new_CThostFtdcContractBankField(CThostFtdcContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcContractBankField", (char*)"ssss",
p->BankName, p->BrokerID, p->BankBrchID, p->BankID);
}
CThostFtdcContractBankField * from_CThostFtdcContractBankField(PyObject * p){
  CThostFtdcContractBankField *t = (CThostFtdcContractBankField *)calloc(1, sizeof(CThostFtdcContractBankField));
  memset(t,0,sizeof(CThostFtdcContractBankField));
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

//查询预埋撤单
PyObject * new_CThostFtdcQryParkedOrderActionField(CThostFtdcQryParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryParkedOrderActionField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
CThostFtdcQryParkedOrderActionField * from_CThostFtdcQryParkedOrderActionField(PyObject * p){
  CThostFtdcQryParkedOrderActionField *t = (CThostFtdcQryParkedOrderActionField *)calloc(1, sizeof(CThostFtdcQryParkedOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryParkedOrderActionField));
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

//产品
PyObject * new_CThostFtdcProductField(CThostFtdcProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcProductField", (char*)"isciidsicics",
p->MaxLimitOrderVolume, p->ExchangeID, p->PositionDateType, p->MinLimitOrderVolume, p->MaxMarketOrderVolume, p->PriceTick, p->ProductName, p->VolumeMultiple, p->PositionType, p->MinMarketOrderVolume, p->ProductClass, p->ProductID);
}
CThostFtdcProductField * from_CThostFtdcProductField(PyObject * p){
  CThostFtdcProductField *t = (CThostFtdcProductField *)calloc(1, sizeof(CThostFtdcProductField));
  memset(t,0,sizeof(CThostFtdcProductField));
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
  //THOST_FTDC_PC_Futures -> '1', 期货
  //THOST_FTDC_PC_Combination -> '3', 组合
  //THOST_FTDC_PC_Options -> '2', 期权
  //THOST_FTDC_PC_EFP -> '5', 期转现
  //THOST_FTDC_PC_Spot -> '4', 即期
  t->ProductClass =   PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
  //产品代码
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//查询保证金监管系统经纪公司密钥
PyObject * new_CThostFtdcQryCFMMCBrokerKeyField(CThostFtdcQryCFMMCBrokerKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCFMMCBrokerKeyField", (char*)"s",
p->BrokerID);
}
CThostFtdcQryCFMMCBrokerKeyField * from_CThostFtdcQryCFMMCBrokerKeyField(PyObject * p){
  CThostFtdcQryCFMMCBrokerKeyField *t = (CThostFtdcQryCFMMCBrokerKeyField *)calloc(1, sizeof(CThostFtdcQryCFMMCBrokerKeyField));
  memset(t,0,sizeof(CThostFtdcQryCFMMCBrokerKeyField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//经纪公司交易算法
PyObject * new_CThostFtdcBrokerTradingAlgosField(CThostFtdcBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerTradingAlgosField", (char*)"scscsc",
p->InstrumentID, p->HandlePositionAlgoID, p->ExchangeID, p->FindMarginRateAlgoID, p->BrokerID, p->HandleTradingAccountAlgoID);
}
CThostFtdcBrokerTradingAlgosField * from_CThostFtdcBrokerTradingAlgosField(PyObject * p){
  CThostFtdcBrokerTradingAlgosField *t = (CThostFtdcBrokerTradingAlgosField *)calloc(1, sizeof(CThostFtdcBrokerTradingAlgosField));
  memset(t,0,sizeof(CThostFtdcBrokerTradingAlgosField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //持仓处理算法编号
  //enum类型
  //THOST_FTDC_HPA_Base -> '1', 基本
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

//查询银行资金请求，TradeCode=204002
PyObject * new_CThostFtdcTransferQryBankReqField(CThostFtdcTransferQryBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryBankReqField", (char*)"sscs",
p->CurrencyCode, p->FutureAccount, p->FuturePwdFlag, p->FutureAccPwd);
}
CThostFtdcTransferQryBankReqField * from_CThostFtdcTransferQryBankReqField(PyObject * p){
  CThostFtdcTransferQryBankReqField *t = (CThostFtdcTransferQryBankReqField *)calloc(1, sizeof(CThostFtdcTransferQryBankReqField));
  memset(t,0,sizeof(CThostFtdcTransferQryBankReqField));
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

//变更银行账户请求
PyObject * new_CThostFtdcReqChangeAccountField(CThostFtdcReqChangeAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqChangeAccountField", (char*)"cssssscisssissssissiccsssscscssssccsscss",
p->MoneyAccountStatus, p->NewBankPassWord, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->NewBankAccount, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->TradingDay, p->Gender, p->BrokerID, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest);
}
CThostFtdcReqChangeAccountField * from_CThostFtdcReqChangeAccountField(PyObject * p){
  CThostFtdcReqChangeAccountField *t = (CThostFtdcReqChangeAccountField *)calloc(1, sizeof(CThostFtdcReqChangeAccountField));
  memset(t,0,sizeof(CThostFtdcReqChangeAccountField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//通讯阶段
PyObject * new_CThostFtdcCommPhaseField(CThostFtdcCommPhaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCommPhaseField", (char*)"sh",
p->TradingDay, p->CommPhaseNo);
}
CThostFtdcCommPhaseField * from_CThostFtdcCommPhaseField(PyObject * p){
  CThostFtdcCommPhaseField *t = (CThostFtdcCommPhaseField *)calloc(1, sizeof(CThostFtdcCommPhaseField));
  memset(t,0,sizeof(CThostFtdcCommPhaseField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //通讯时段编号
  t->CommPhaseNo =   PyInt_AsLong(PyObject_GetAttrString(p, "CommPhaseNo"));

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

//期货资金转银行请求，TradeCode=202002
PyObject * new_CThostFtdcTransferFutureToBankReqField(CThostFtdcTransferFutureToBankReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferFutureToBankReqField", (char*)"sssdcd",
p->FutureAccount, p->FutureAccPwd, p->CurrencyCode, p->TradeAmt, p->FuturePwdFlag, p->CustFee);
}
CThostFtdcTransferFutureToBankReqField * from_CThostFtdcTransferFutureToBankReqField(PyObject * p){
  CThostFtdcTransferFutureToBankReqField *t = (CThostFtdcTransferFutureToBankReqField *)calloc(1, sizeof(CThostFtdcTransferFutureToBankReqField));
  memset(t,0,sizeof(CThostFtdcTransferFutureToBankReqField));
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

//转帐销户请求
PyObject * new_CThostFtdcReqCancelAccountField(CThostFtdcReqCancelAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqCancelAccountField", (char*)"csssscisssisssssisiccssssscsccssssccscscsss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankSecuAcc, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->Gender, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest, p->DeviceID);
}
CThostFtdcReqCancelAccountField * from_CThostFtdcReqCancelAccountField(PyObject * p){
  CThostFtdcReqCancelAccountField *t = (CThostFtdcReqCancelAccountField *)calloc(1, sizeof(CThostFtdcReqCancelAccountField));
  memset(t,0,sizeof(CThostFtdcReqCancelAccountField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//行情最新成交属性
PyObject * new_CThostFtdcMarketDataLastMatchField(CThostFtdcMarketDataLastMatchField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataLastMatchField", (char*)"iddd",
p->Volume, p->OpenInterest, p->LastPrice, p->Turnover);
}
CThostFtdcMarketDataLastMatchField * from_CThostFtdcMarketDataLastMatchField(PyObject * p){
  CThostFtdcMarketDataLastMatchField *t = (CThostFtdcMarketDataLastMatchField *)calloc(1, sizeof(CThostFtdcMarketDataLastMatchField));
  memset(t,0,sizeof(CThostFtdcMarketDataLastMatchField));
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

//管理用户功能权限
PyObject * new_CThostFtdcSuperUserFunctionField(CThostFtdcSuperUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSuperUserFunctionField", (char*)"cs",
p->FunctionCode, p->UserID);
}
CThostFtdcSuperUserFunctionField * from_CThostFtdcSuperUserFunctionField(PyObject * p){
  CThostFtdcSuperUserFunctionField *t = (CThostFtdcSuperUserFunctionField *)calloc(1, sizeof(CThostFtdcSuperUserFunctionField));
  memset(t,0,sizeof(CThostFtdcSuperUserFunctionField));
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

//输入预埋单操作
PyObject * new_CThostFtdcParkedOrderActionField(CThostFtdcParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcParkedOrderActionField", (char*)"scscicssdssiisissii",
p->InstrumentID, p->Status, p->ExchangeID, p->ActionFlag, p->OrderActionRef, p->UserType, p->ErrorMsg, p->UserID, p->LimitPrice, p->OrderRef, p->InvestorID, p->SessionID, p->VolumeChange, p->BrokerID, p->RequestID, p->OrderSysID, p->ParkedOrderActionID, p->FrontID, p->ErrorID);
}
CThostFtdcParkedOrderActionField * from_CThostFtdcParkedOrderActionField(PyObject * p){
  CThostFtdcParkedOrderActionField *t = (CThostFtdcParkedOrderActionField *)calloc(1, sizeof(CThostFtdcParkedOrderActionField));
  memset(t,0,sizeof(CThostFtdcParkedOrderActionField));
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
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
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
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //预埋撤单单编号
  strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));

  return t;
};

//用户会话
PyObject * new_CThostFtdcUserSessionField(CThostFtdcUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserSessionField", (char*)"sssssisisss",
p->MacAddress, p->UserProductInfo, p->InterfaceProductInfo, p->UserID, p->LoginDate, p->SessionID, p->BrokerID, p->FrontID, p->IPAddress, p->LoginTime, p->ProtocolInfo);
}
CThostFtdcUserSessionField * from_CThostFtdcUserSessionField(PyObject * p){
  CThostFtdcUserSessionField *t = (CThostFtdcUserSessionField *)calloc(1, sizeof(CThostFtdcUserSessionField));
  memset(t,0,sizeof(CThostFtdcUserSessionField));
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

//根据价格查询最大报单数量
PyObject * new_CThostFtdcQueryMaxOrderVolumeWithPriceField(CThostFtdcQueryMaxOrderVolumeWithPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryMaxOrderVolumeWithPriceField", (char*)"sccdcssi",
p->InstrumentID, p->Direction, p->OffsetFlag, p->Price, p->HedgeFlag, p->InvestorID, p->BrokerID, p->MaxVolume);
}
CThostFtdcQueryMaxOrderVolumeWithPriceField * from_CThostFtdcQueryMaxOrderVolumeWithPriceField(PyObject * p){
  CThostFtdcQueryMaxOrderVolumeWithPriceField *t = (CThostFtdcQueryMaxOrderVolumeWithPriceField *)calloc(1, sizeof(CThostFtdcQueryMaxOrderVolumeWithPriceField));
  memset(t,0,sizeof(CThostFtdcQueryMaxOrderVolumeWithPriceField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
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
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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

//银行资金转期货请求，TradeCode=202001
PyObject * new_CThostFtdcTransferBankToFutureReqField(CThostFtdcTransferBankToFutureReqField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankToFutureReqField", (char*)"sssdcd",
p->FutureAccount, p->FutureAccPwd, p->CurrencyCode, p->TradeAmt, p->FuturePwdFlag, p->CustFee);
}
CThostFtdcTransferBankToFutureReqField * from_CThostFtdcTransferBankToFutureReqField(PyObject * p){
  CThostFtdcTransferBankToFutureReqField *t = (CThostFtdcTransferBankToFutureReqField *)calloc(1, sizeof(CThostFtdcTransferBankToFutureReqField));
  memset(t,0,sizeof(CThostFtdcTransferBankToFutureReqField));
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
PyObject * new_CThostFtdcInstrumentStatusField(CThostFtdcInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentStatusField", (char*)"ssssiccs",
p->InstrumentID, p->ExchangeID, p->EnterTime, p->SettlementGroupID, p->TradingSegmentSN, p->EnterReason, p->InstrumentStatus, p->ExchangeInstID);
}
CThostFtdcInstrumentStatusField * from_CThostFtdcInstrumentStatusField(PyObject * p){
  CThostFtdcInstrumentStatusField *t = (CThostFtdcInstrumentStatusField *)calloc(1, sizeof(CThostFtdcInstrumentStatusField));
  memset(t,0,sizeof(CThostFtdcInstrumentStatusField));
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

//请求查询保证金监管系统经纪公司资金账户密钥
PyObject * new_CThostFtdcQryCFMMCTradingAccountKeyField(CThostFtdcQryCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCFMMCTradingAccountKeyField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryCFMMCTradingAccountKeyField * from_CThostFtdcQryCFMMCTradingAccountKeyField(PyObject * p){
  CThostFtdcQryCFMMCTradingAccountKeyField *t = (CThostFtdcQryCFMMCTradingAccountKeyField *)calloc(1, sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(CThostFtdcQryCFMMCTradingAccountKeyField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询签约银行请求
PyObject * new_CThostFtdcQryContractBankField(CThostFtdcQryContractBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryContractBankField", (char*)"sss",
p->BrokerID, p->BankBrchID, p->BankID);
}
CThostFtdcQryContractBankField * from_CThostFtdcQryContractBankField(PyObject * p){
  CThostFtdcQryContractBankField *t = (CThostFtdcQryContractBankField *)calloc(1, sizeof(CThostFtdcQryContractBankField));
  memset(t,0,sizeof(CThostFtdcQryContractBankField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //银行分中心代码
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//正在同步中的交易代码
PyObject * new_CThostFtdcSyncingTradingCodeField(CThostFtdcSyncingTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingTradingCodeField", (char*)"ssssci",
p->ExchangeID, p->ClientID, p->InvestorID, p->BrokerID, p->ClientIDType, p->IsActive);
}
CThostFtdcSyncingTradingCodeField * from_CThostFtdcSyncingTradingCodeField(PyObject * p){
  CThostFtdcSyncingTradingCodeField *t = (CThostFtdcSyncingTradingCodeField *)calloc(1, sizeof(CThostFtdcSyncingTradingCodeField));
  memset(t,0,sizeof(CThostFtdcSyncingTradingCodeField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //交易编码类型
  //enum类型
  //THOST_FTDC_CIDT_Hedge -> '3', 套保
  //THOST_FTDC_CIDT_Arbitrage -> '2', 套利
  //THOST_FTDC_CIDT_Speculation -> '1', 投机
  t->ClientIDType =   PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

  return t;
};

//查询仓单折抵信息
PyObject * new_CThostFtdcQryEWarrantOffsetField(CThostFtdcQryEWarrantOffsetField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryEWarrantOffsetField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
CThostFtdcQryEWarrantOffsetField * from_CThostFtdcQryEWarrantOffsetField(PyObject * p){
  CThostFtdcQryEWarrantOffsetField *t = (CThostFtdcQryEWarrantOffsetField *)calloc(1, sizeof(CThostFtdcQryEWarrantOffsetField));
  memset(t,0,sizeof(CThostFtdcQryEWarrantOffsetField));
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

//查询经纪公司交易参数
PyObject * new_CThostFtdcQryBrokerTradingParamsField(CThostFtdcQryBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerTradingParamsField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryBrokerTradingParamsField * from_CThostFtdcQryBrokerTradingParamsField(PyObject * p){
  CThostFtdcQryBrokerTradingParamsField *t = (CThostFtdcQryBrokerTradingParamsField *)calloc(1, sizeof(CThostFtdcQryBrokerTradingParamsField));
  memset(t,0,sizeof(CThostFtdcQryBrokerTradingParamsField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//正在同步中的交易账号
PyObject * new_CThostFtdcSyncingTradingAccountField(CThostFtdcSyncingTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingTradingAccountField", (char*)"ddddddddsddddddidssddddddddddd",
p->Mortgage, p->ExchangeDeliveryMargin, p->FrozenMargin, p->WithdrawQuota, p->PositionProfit, p->Commission, p->Interest, p->CashIn, p->AccountID, p->Available, p->PreCredit, p->PreMortgage, p->InterestBase, p->ExchangeMargin, p->PreMargin, p->SettlementID, p->DeliveryMargin, p->TradingDay, p->BrokerID, p->FrozenCash, p->Withdraw, p->Balance, p->Reserve, p->PreDeposit, p->Credit, p->PreBalance, p->CurrMargin, p->FrozenCommission, p->CloseProfit, p->Deposit);
}
CThostFtdcSyncingTradingAccountField * from_CThostFtdcSyncingTradingAccountField(PyObject * p){
  CThostFtdcSyncingTradingAccountField *t = (CThostFtdcSyncingTradingAccountField *)calloc(1, sizeof(CThostFtdcSyncingTradingAccountField));
  memset(t,0,sizeof(CThostFtdcSyncingTradingAccountField));
  //质押金额
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //交易所交割保证金
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //可取资金
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //利息收入
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //可用资金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //上次信用额度
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //上次质押金额
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //利息基数
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
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
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //上次存款额
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //信用额度
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));

  return t;
};

//查询交易所报单
PyObject * new_CThostFtdcQryExchangeOrderField(CThostFtdcQryExchangeOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeOrderField", (char*)"sssss",
p->ExchangeInstID, p->TraderID, p->ExchangeID, p->ParticipantID, p->ClientID);
}
CThostFtdcQryExchangeOrderField * from_CThostFtdcQryExchangeOrderField(PyObject * p){
  CThostFtdcQryExchangeOrderField *t = (CThostFtdcQryExchangeOrderField *)calloc(1, sizeof(CThostFtdcQryExchangeOrderField));
  memset(t,0,sizeof(CThostFtdcQryExchangeOrderField));
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

//银期变更银行账号信息
PyObject * new_CThostFtdcChangeAccountField(CThostFtdcChangeAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcChangeAccountField", (char*)"cssssscisssissssissicicsssscscsssssccsscss",
p->MoneyAccountStatus, p->NewBankPassWord, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankBranchID, p->SessionID, p->NewBankAccount, p->Address, p->PlateSerial, p->BankPwdFlag, p->ErrorID, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->TradingDay, p->Gender, p->BrokerID, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->ZipCode, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest);
}
CThostFtdcChangeAccountField * from_CThostFtdcChangeAccountField(PyObject * p){
  CThostFtdcChangeAccountField *t = (CThostFtdcChangeAccountField *)calloc(1, sizeof(CThostFtdcChangeAccountField));
  memset(t,0,sizeof(CThostFtdcChangeAccountField));
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
  //错误代码
  t->ErrorID =   PyInt_AsLong(PyObject_GetAttrString(p, "ErrorID"));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//合约
PyObject * new_CThostFtdcInstrumentField(CThostFtdcInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentField", (char*)"iscdccsdiissisiisidcsisss",
p->IsTrading, p->ExpireDate, p->PositionDateType, p->LongMarginRatio, p->PositionType, p->ProductClass, p->InstrumentName, p->ShortMarginRatio, p->VolumeMultiple, p->DeliveryYear, p->CreateDate, p->InstrumentID, p->MaxLimitOrderVolume, p->ExchangeID, p->MinLimitOrderVolume, p->MaxMarketOrderVolume, p->StartDelivDate, p->DeliveryMonth, p->PriceTick, p->InstLifePhase, p->ExchangeInstID, p->MinMarketOrderVolume, p->EndDelivDate, p->OpenDate, p->ProductID);
}
CThostFtdcInstrumentField * from_CThostFtdcInstrumentField(PyObject * p){
  CThostFtdcInstrumentField *t = (CThostFtdcInstrumentField *)calloc(1, sizeof(CThostFtdcInstrumentField));
  memset(t,0,sizeof(CThostFtdcInstrumentField));
  //当前是否交易
  t->IsTrading =   PyInt_AsLong(PyObject_GetAttrString(p, "IsTrading"));
  //到期日
  strcpy(t->ExpireDate, PyString_AsString(PyObject_GetAttrString(p, "ExpireDate")));
  //持仓日期类型
  //enum类型
  //THOST_FTDC_PDT_UseHistory -> '1', 使用历史持仓
  //THOST_FTDC_PDT_NoUseHistory -> '2', 不使用历史持仓
  t->PositionDateType =   PyString_AsString(PyObject_GetAttrString(p, "PositionDateType"))[0];
  //多头保证金率
  t->LongMarginRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatio"));
  //持仓类型
  //enum类型
  //THOST_FTDC_PT_Net -> '1', 净持仓
  //THOST_FTDC_PT_Gross -> '2', 综合持仓
  t->PositionType =   PyString_AsString(PyObject_GetAttrString(p, "PositionType"))[0];
  //产品类型
  //enum类型
  //THOST_FTDC_PC_Futures -> '1', 期货
  //THOST_FTDC_PC_Combination -> '3', 组合
  //THOST_FTDC_PC_Options -> '2', 期权
  //THOST_FTDC_PC_EFP -> '5', 期转现
  //THOST_FTDC_PC_Spot -> '4', 即期
  t->ProductClass =   PyString_AsString(PyObject_GetAttrString(p, "ProductClass"))[0];
  //合约名称
  strcpy(t->InstrumentName, PyString_AsString(PyObject_GetAttrString(p, "InstrumentName")));
  //空头保证金率
  t->ShortMarginRatio =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatio"));
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

//查询经纪公司交易算法
PyObject * new_CThostFtdcQryBrokerTradingAlgosField(CThostFtdcQryBrokerTradingAlgosField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerTradingAlgosField", (char*)"sss",
p->InstrumentID, p->ExchangeID, p->BrokerID);
}
CThostFtdcQryBrokerTradingAlgosField * from_CThostFtdcQryBrokerTradingAlgosField(PyObject * p){
  CThostFtdcQryBrokerTradingAlgosField *t = (CThostFtdcQryBrokerTradingAlgosField *)calloc(1, sizeof(CThostFtdcQryBrokerTradingAlgosField));
  memset(t,0,sizeof(CThostFtdcQryBrokerTradingAlgosField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//转账请求
PyObject * new_CThostFtdcReqTransferField(CThostFtdcReqTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqTransferField", (char*)"sssscississsisscicscssssssccidssdccicscsdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->IdCardType, p->PlateSerial, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CThostFtdcReqTransferField * from_CThostFtdcReqTransferField(PyObject * p){
  CThostFtdcReqTransferField *t = (CThostFtdcReqTransferField *)calloc(1, sizeof(CThostFtdcReqTransferField));
  memset(t,0,sizeof(CThostFtdcReqTransferField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//验证期货资金密码和客户信息
PyObject * new_CThostFtdcVerifyFuturePasswordAndCustInfoField(CThostFtdcVerifyFuturePasswordAndCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyFuturePasswordAndCustInfoField", (char*)"cscsss",
p->CustType, p->CustomerName, p->IdCardType, p->IdentifiedCardNo, p->Password, p->AccountID);
}
CThostFtdcVerifyFuturePasswordAndCustInfoField * from_CThostFtdcVerifyFuturePasswordAndCustInfoField(PyObject * p){
  CThostFtdcVerifyFuturePasswordAndCustInfoField *t = (CThostFtdcVerifyFuturePasswordAndCustInfoField *)calloc(1, sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField));
  memset(t,0,sizeof(CThostFtdcVerifyFuturePasswordAndCustInfoField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//登录信息
PyObject * new_CThostFtdcLogoutAllField(CThostFtdcLogoutAllField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLogoutAllField", (char*)"iis",
p->FrontID, p->SessionID, p->SystemName);
}
CThostFtdcLogoutAllField * from_CThostFtdcLogoutAllField(PyObject * p){
  CThostFtdcLogoutAllField *t = (CThostFtdcLogoutAllField *)calloc(1, sizeof(CThostFtdcLogoutAllField));
  memset(t,0,sizeof(CThostFtdcLogoutAllField));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //会话编号
  t->SessionID =   PyInt_AsLong(PyObject_GetAttrString(p, "SessionID"));
  //系统名称
  strcpy(t->SystemName, PyString_AsString(PyObject_GetAttrString(p, "SystemName")));

  return t;
};

//行情静态属性
PyObject * new_CThostFtdcMarketDataStaticField(CThostFtdcMarketDataStaticField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataStaticField", (char*)"dddddddd",
p->ClosePrice, p->HighestPrice, p->SettlementPrice, p->OpenPrice, p->LowerLimitPrice, p->UpperLimitPrice, p->LowestPrice, p->CurrDelta);
}
CThostFtdcMarketDataStaticField * from_CThostFtdcMarketDataStaticField(PyObject * p){
  CThostFtdcMarketDataStaticField *t = (CThostFtdcMarketDataStaticField *)calloc(1, sizeof(CThostFtdcMarketDataStaticField));
  memset(t,0,sizeof(CThostFtdcMarketDataStaticField));
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

//交易编码
PyObject * new_CThostFtdcTradingCodeField(CThostFtdcTradingCodeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingCodeField", (char*)"ssssci",
p->ExchangeID, p->ClientID, p->InvestorID, p->BrokerID, p->ClientIDType, p->IsActive);
}
CThostFtdcTradingCodeField * from_CThostFtdcTradingCodeField(PyObject * p){
  CThostFtdcTradingCodeField *t = (CThostFtdcTradingCodeField *)calloc(1, sizeof(CThostFtdcTradingCodeField));
  memset(t,0,sizeof(CThostFtdcTradingCodeField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //交易编码类型
  //enum类型
  //THOST_FTDC_CIDT_Hedge -> '3', 套保
  //THOST_FTDC_CIDT_Arbitrage -> '2', 套利
  //THOST_FTDC_CIDT_Speculation -> '1', 投机
  t->ClientIDType =   PyString_AsString(PyObject_GetAttrString(p, "ClientIDType"))[0];
  //是否活跃
  t->IsActive =   PyInt_AsLong(PyObject_GetAttrString(p, "IsActive"));

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

//查询管理用户
PyObject * new_CThostFtdcQrySuperUserField(CThostFtdcQrySuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySuperUserField", (char*)"s",
p->UserID);
}
CThostFtdcQrySuperUserField * from_CThostFtdcQrySuperUserField(PyObject * p){
  CThostFtdcQrySuperUserField *t = (CThostFtdcQrySuperUserField *)calloc(1, sizeof(CThostFtdcQrySuperUserField));
  memset(t,0,sizeof(CThostFtdcQrySuperUserField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));

  return t;
};

//查询交易编码
PyObject * new_CThostFtdcQryInstrumentMarginRateField(CThostFtdcQryInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentMarginRateField", (char*)"sssc",
p->InstrumentID, p->InvestorID, p->BrokerID, p->HedgeFlag);
}
CThostFtdcQryInstrumentMarginRateField * from_CThostFtdcQryInstrumentMarginRateField(PyObject * p){
  CThostFtdcQryInstrumentMarginRateField *t = (CThostFtdcQryInstrumentMarginRateField *)calloc(1, sizeof(CThostFtdcQryInstrumentMarginRateField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentMarginRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];

  return t;
};

//查询交易编码
PyObject * new_CThostFtdcQryInvestorGroupField(CThostFtdcQryInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorGroupField", (char*)"s",
p->BrokerID);
}
CThostFtdcQryInvestorGroupField * from_CThostFtdcQryInvestorGroupField(PyObject * p){
  CThostFtdcQryInvestorGroupField *t = (CThostFtdcQryInvestorGroupField *)calloc(1, sizeof(CThostFtdcQryInvestorGroupField));
  memset(t,0,sizeof(CThostFtdcQryInvestorGroupField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//经纪公司可提资金算法表
PyObject * new_CThostFtdcInvestorWithdrawAlgorithmField(CThostFtdcInvestorWithdrawAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorWithdrawAlgorithmField", (char*)"sscd",
p->InvestorID, p->BrokerID, p->InvestorRange, p->UsingRatio);
}
CThostFtdcInvestorWithdrawAlgorithmField * from_CThostFtdcInvestorWithdrawAlgorithmField(PyObject * p){
  CThostFtdcInvestorWithdrawAlgorithmField *t = (CThostFtdcInvestorWithdrawAlgorithmField *)calloc(1, sizeof(CThostFtdcInvestorWithdrawAlgorithmField));
  memset(t,0,sizeof(CThostFtdcInvestorWithdrawAlgorithmField));
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

//资金账户口令变更域
PyObject * new_CThostFtdcTradingAccountPasswordUpdateV1Field(CThostFtdcTradingAccountPasswordUpdateV1Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordUpdateV1Field", (char*)"ssss",
p->InvestorID, p->NewPassword, p->OldPassword, p->BrokerID);
}
CThostFtdcTradingAccountPasswordUpdateV1Field * from_CThostFtdcTradingAccountPasswordUpdateV1Field(PyObject * p){
  CThostFtdcTradingAccountPasswordUpdateV1Field *t = (CThostFtdcTradingAccountPasswordUpdateV1Field *)calloc(1, sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field));
  memset(t,0,sizeof(CThostFtdcTradingAccountPasswordUpdateV1Field));
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

//交易所成交
PyObject * new_CThostFtdcExchangeTradeField(CThostFtdcExchangeTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeTradeField", (char*)"cscsccsdsisssssssisccc",
p->TradeType, p->TraderID, p->HedgeFlag, p->TradeTime, p->OffsetFlag, p->Direction, p->ParticipantID, p->Price, p->ClientID, p->Volume, p->OrderSysID, p->ExchangeID, p->ClearingPartID, p->OrderLocalID, p->TradeID, p->TradeDate, p->BusinessUnit, p->SequenceNo, p->ExchangeInstID, p->TradeSource, p->PriceSource, p->TradingRole);
}
CThostFtdcExchangeTradeField * from_CThostFtdcExchangeTradeField(PyObject * p){
  CThostFtdcExchangeTradeField *t = (CThostFtdcExchangeTradeField *)calloc(1, sizeof(CThostFtdcExchangeTradeField));
  memset(t,0,sizeof(CThostFtdcExchangeTradeField));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //成交时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
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
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //价格
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //结算会员编号
  strcpy(t->ClearingPartID, PyString_AsString(PyObject_GetAttrString(p, "ClearingPartID")));
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
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));
  //成交来源
  //enum类型
  //THOST_FTDC_TSRC_NORMAL -> '0', 来自交易所普通回报
  //THOST_FTDC_TSRC_QUERY -> '1', 来自查询
  t->TradeSource =   PyString_AsString(PyObject_GetAttrString(p, "TradeSource"))[0];
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

//查询用户会话
PyObject * new_CThostFtdcQryUserSessionField(CThostFtdcQryUserSessionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryUserSessionField", (char*)"iiss",
p->FrontID, p->SessionID, p->BrokerID, p->UserID);
}
CThostFtdcQryUserSessionField * from_CThostFtdcQryUserSessionField(PyObject * p){
  CThostFtdcQryUserSessionField *t = (CThostFtdcQryUserSessionField *)calloc(1, sizeof(CThostFtdcQryUserSessionField));
  memset(t,0,sizeof(CThostFtdcQryUserSessionField));
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

//用户事件通知
PyObject * new_CThostFtdcTradingNoticeField(CThostFtdcTradingNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingNoticeField", (char*)"hisssssc",
p->SequenceSeries, p->SequenceNo, p->UserID, p->FieldContent, p->InvestorID, p->BrokerID, p->SendTime, p->InvestorRange);
}
CThostFtdcTradingNoticeField * from_CThostFtdcTradingNoticeField(PyObject * p){
  CThostFtdcTradingNoticeField *t = (CThostFtdcTradingNoticeField *)calloc(1, sizeof(CThostFtdcTradingNoticeField));
  memset(t,0,sizeof(CThostFtdcTradingNoticeField));
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

//交易核心向银期报盘发出密钥同步请求
PyObject * new_CThostFtdcReqSyncKeyField(CThostFtdcReqSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqSyncKeyField", (char*)"isscssssssissssissii",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->Message, p->PlateSerial, p->RequestID);
}
CThostFtdcReqSyncKeyField * from_CThostFtdcReqSyncKeyField(PyObject * p){
  CThostFtdcReqSyncKeyField *t = (CThostFtdcReqSyncKeyField *)calloc(1, sizeof(CThostFtdcReqSyncKeyField));
  memset(t,0,sizeof(CThostFtdcReqSyncKeyField));
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

//查询经纪公司用户
PyObject * new_CThostFtdcQryBrokerUserField(CThostFtdcQryBrokerUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserField", (char*)"ss",
p->UserID, p->BrokerID);
}
CThostFtdcQryBrokerUserField * from_CThostFtdcQryBrokerUserField(PyObject * p){
  CThostFtdcQryBrokerUserField *t = (CThostFtdcQryBrokerUserField *)calloc(1, sizeof(CThostFtdcQryBrokerUserField));
  memset(t,0,sizeof(CThostFtdcQryBrokerUserField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//期商签到通知
PyObject * new_CThostFtdcNotifyFutureSignInField(CThostFtdcNotifyFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyFutureSignInField", (char*)"sssiisssissiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->PinKey, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->MacKey, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CThostFtdcNotifyFutureSignInField * from_CThostFtdcNotifyFutureSignInField(PyObject * p){
  CThostFtdcNotifyFutureSignInField *t = (CThostFtdcNotifyFutureSignInField *)calloc(1, sizeof(CThostFtdcNotifyFutureSignInField));
  memset(t,0,sizeof(CThostFtdcNotifyFutureSignInField));
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

//正在同步中的合约手续费率
PyObject * new_CThostFtdcSyncingInstrumentCommissionRateField(CThostFtdcSyncingInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentCommissionRateField", (char*)"sdddsscddd",
p->InstrumentID, p->OpenRatioByMoney, p->CloseRatioByVolume, p->CloseTodayRatioByMoney, p->InvestorID, p->BrokerID, p->InvestorRange, p->CloseRatioByMoney, p->OpenRatioByVolume, p->CloseTodayRatioByVolume);
}
CThostFtdcSyncingInstrumentCommissionRateField * from_CThostFtdcSyncingInstrumentCommissionRateField(PyObject * p){
  CThostFtdcSyncingInstrumentCommissionRateField *t = (CThostFtdcSyncingInstrumentCommissionRateField *)calloc(1, sizeof(CThostFtdcSyncingInstrumentCommissionRateField));
  memset(t,0,sizeof(CThostFtdcSyncingInstrumentCommissionRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //开仓手续费率
  t->OpenRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
  //平仓手续费
  t->CloseRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));
  //平今手续费率
  t->CloseTodayRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
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
  //平仓手续费率
  t->CloseRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
  //开仓手续费
  t->OpenRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
  //平今手续费
  t->CloseTodayRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));

  return t;
};

//正在同步中的合约保证金率
PyObject * new_CThostFtdcSyncingInstrumentMarginRateField(CThostFtdcSyncingInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInstrumentMarginRateField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CThostFtdcSyncingInstrumentMarginRateField * from_CThostFtdcSyncingInstrumentMarginRateField(PyObject * p){
  CThostFtdcSyncingInstrumentMarginRateField *t = (CThostFtdcSyncingInstrumentMarginRateField *)calloc(1, sizeof(CThostFtdcSyncingInstrumentMarginRateField));
  memset(t,0,sizeof(CThostFtdcSyncingInstrumentMarginRateField));
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
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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

//强制交易员退出
PyObject * new_CThostFtdcForceUserLogoutField(CThostFtdcForceUserLogoutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcForceUserLogoutField", (char*)"ss",
p->UserID, p->BrokerID);
}
CThostFtdcForceUserLogoutField * from_CThostFtdcForceUserLogoutField(PyObject * p){
  CThostFtdcForceUserLogoutField *t = (CThostFtdcForceUserLogoutField *)calloc(1, sizeof(CThostFtdcForceUserLogoutField));
  memset(t,0,sizeof(CThostFtdcForceUserLogoutField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//交易核心向银期报盘发出密钥同步处理结果的通知
PyObject * new_CThostFtdcNotifySyncKeyField(CThostFtdcNotifySyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifySyncKeyField", (char*)"sssiissisiisssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Message);
}
CThostFtdcNotifySyncKeyField * from_CThostFtdcNotifySyncKeyField(PyObject * p){
  CThostFtdcNotifySyncKeyField *t = (CThostFtdcNotifySyncKeyField *)calloc(1, sizeof(CThostFtdcNotifySyncKeyField));
  memset(t,0,sizeof(CThostFtdcNotifySyncKeyField));
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

//行情申买四、五属性
PyObject * new_CThostFtdcMarketDataBid45Field(CThostFtdcMarketDataBid45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBid45Field", (char*)"ddii",
p->BidPrice5, p->BidPrice4, p->BidVolume5, p->BidVolume4);
}
CThostFtdcMarketDataBid45Field * from_CThostFtdcMarketDataBid45Field(PyObject * p){
  CThostFtdcMarketDataBid45Field *t = (CThostFtdcMarketDataBid45Field *)calloc(1, sizeof(CThostFtdcMarketDataBid45Field));
  memset(t,0,sizeof(CThostFtdcMarketDataBid45Field));
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

//联系人
PyObject * new_CThostFtdcLinkManField(CThostFtdcLinkManField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLinkManField", (char*)"cssssisssc",
p->PersonType, p->PersonName, p->IdentifiedCardNo, p->Telephone, p->ZipCode, p->Priority, p->InvestorID, p->BrokerID, p->Address, p->IdentifiedCardType);
}
CThostFtdcLinkManField * from_CThostFtdcLinkManField(PyObject * p){
  CThostFtdcLinkManField *t = (CThostFtdcLinkManField *)calloc(1, sizeof(CThostFtdcLinkManField));
  memset(t,0,sizeof(CThostFtdcLinkManField));
  //联系人类型
  //enum类型
  //THOST_FTDC_PST_LinkMan -> '7', 投资者联系人
  //THOST_FTDC_PST_Corporation -> '6', 法人代表
  //THOST_FTDC_PST_Settlement -> '4', 结算单确认人
  //THOST_FTDC_PST_Open -> '2', 开户授权人
  //THOST_FTDC_PST_Company -> '5', 法人
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//投资者手续费率模板
PyObject * new_CThostFtdcCommRateModelField(CThostFtdcCommRateModelField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCommRateModelField", (char*)"sss",
p->CommModelID, p->BrokerID, p->CommModelName);
}
CThostFtdcCommRateModelField * from_CThostFtdcCommRateModelField(PyObject * p){
  CThostFtdcCommRateModelField *t = (CThostFtdcCommRateModelField *)calloc(1, sizeof(CThostFtdcCommRateModelField));
  memset(t,0,sizeof(CThostFtdcCommRateModelField));
  //手续费率模板代码
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //模板名称
  strcpy(t->CommModelName, PyString_AsString(PyObject_GetAttrString(p, "CommModelName")));

  return t;
};

//浮动盈亏算法
PyObject * new_CThostFtdcPositionProfitAlgorithmField(CThostFtdcPositionProfitAlgorithmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcPositionProfitAlgorithmField", (char*)"sscs",
p->Memo, p->BrokerID, p->Algorithm, p->AccountID);
}
CThostFtdcPositionProfitAlgorithmField * from_CThostFtdcPositionProfitAlgorithmField(PyObject * p){
  CThostFtdcPositionProfitAlgorithmField *t = (CThostFtdcPositionProfitAlgorithmField *)calloc(1, sizeof(CThostFtdcPositionProfitAlgorithmField));
  memset(t,0,sizeof(CThostFtdcPositionProfitAlgorithmField));
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

//查询交易所
PyObject * new_CThostFtdcQryExchangeField(CThostFtdcQryExchangeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeField", (char*)"s",
p->ExchangeID);
}
CThostFtdcQryExchangeField * from_CThostFtdcQryExchangeField(PyObject * p){
  CThostFtdcQryExchangeField *t = (CThostFtdcQryExchangeField *)calloc(1, sizeof(CThostFtdcQryExchangeField));
  memset(t,0,sizeof(CThostFtdcQryExchangeField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));

  return t;
};

//查询最大报单数量
PyObject * new_CThostFtdcQueryMaxOrderVolumeField(CThostFtdcQueryMaxOrderVolumeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryMaxOrderVolumeField", (char*)"scccssi",
p->InstrumentID, p->Direction, p->OffsetFlag, p->HedgeFlag, p->InvestorID, p->BrokerID, p->MaxVolume);
}
CThostFtdcQueryMaxOrderVolumeField * from_CThostFtdcQueryMaxOrderVolumeField(PyObject * p){
  CThostFtdcQueryMaxOrderVolumeField *t = (CThostFtdcQueryMaxOrderVolumeField *)calloc(1, sizeof(CThostFtdcQueryMaxOrderVolumeField));
  memset(t,0,sizeof(CThostFtdcQueryMaxOrderVolumeField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
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
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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

//行情更新时间属性
PyObject * new_CThostFtdcMarketDataUpdateTimeField(CThostFtdcMarketDataUpdateTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataUpdateTimeField", (char*)"ssi",
p->InstrumentID, p->UpdateTime, p->UpdateMillisec);
}
CThostFtdcMarketDataUpdateTimeField * from_CThostFtdcMarketDataUpdateTimeField(PyObject * p){
  CThostFtdcMarketDataUpdateTimeField *t = (CThostFtdcMarketDataUpdateTimeField *)calloc(1, sizeof(CThostFtdcMarketDataUpdateTimeField));
  memset(t,0,sizeof(CThostFtdcMarketDataUpdateTimeField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //最后修改时间
  strcpy(t->UpdateTime, PyString_AsString(PyObject_GetAttrString(p, "UpdateTime")));
  //最后修改毫秒
  t->UpdateMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "UpdateMillisec"));

  return t;
};

//组合交易合约的单腿
PyObject * new_CThostFtdcCombinationLegField(CThostFtdcCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCombinationLegField", (char*)"ciiiss",
p->Direction, p->ImplyLevel, p->LegMultiple, p->LegID, p->LegInstrumentID, p->CombInstrumentID);
}
CThostFtdcCombinationLegField * from_CThostFtdcCombinationLegField(PyObject * p){
  CThostFtdcCombinationLegField *t = (CThostFtdcCombinationLegField *)calloc(1, sizeof(CThostFtdcCombinationLegField));
  memset(t,0,sizeof(CThostFtdcCombinationLegField));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
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

//交易所状态
PyObject * new_CThostFtdcExchangeSequenceField(CThostFtdcExchangeSequenceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeSequenceField", (char*)"sic",
p->ExchangeID, p->SequenceNo, p->MarketStatus);
}
CThostFtdcExchangeSequenceField * from_CThostFtdcExchangeSequenceField(PyObject * p){
  CThostFtdcExchangeSequenceField *t = (CThostFtdcExchangeSequenceField *)calloc(1, sizeof(CThostFtdcExchangeSequenceField));
  memset(t,0,sizeof(CThostFtdcExchangeSequenceField));
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

//投资者结算结果
PyObject * new_CThostFtdcSettlementInfoField(CThostFtdcSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementInfoField", (char*)"isisss",
p->SettlementID, p->InvestorID, p->SequenceNo, p->Content, p->TradingDay, p->BrokerID);
}
CThostFtdcSettlementInfoField * from_CThostFtdcSettlementInfoField(PyObject * p){
  CThostFtdcSettlementInfoField *t = (CThostFtdcSettlementInfoField *)calloc(1, sizeof(CThostFtdcSettlementInfoField));
  memset(t,0,sizeof(CThostFtdcSettlementInfoField));
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

//交易所行情报盘机
PyObject * new_CThostFtdcMDTraderOfferField(CThostFtdcMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMDTraderOfferField", (char*)"ssissssssscssssssss",
p->StartDate, p->ExchangeID, p->InstallID, p->LastReportDate, p->ParticipantID, p->OrderLocalID, p->LastReportTime, p->TraderID, p->MaxTradeID, p->ConnectTime, p->TraderConnectStatus, p->TradingDay, p->ConnectRequestTime, p->StartTime, p->ConnectRequestDate, p->MaxOrderMessageReference, p->BrokerID, p->Password, p->ConnectDate);
}
CThostFtdcMDTraderOfferField * from_CThostFtdcMDTraderOfferField(PyObject * p){
  CThostFtdcMDTraderOfferField *t = (CThostFtdcMDTraderOfferField *)calloc(1, sizeof(CThostFtdcMDTraderOfferField));
  memset(t,0,sizeof(CThostFtdcMDTraderOfferField));
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
  //本席位最大成交编号
  strcpy(t->MaxTradeID, PyString_AsString(PyObject_GetAttrString(p, "MaxTradeID")));
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
  //本席位最大报单备拷
  strcpy(t->MaxOrderMessageReference, PyString_AsString(PyObject_GetAttrString(p, "MaxOrderMessageReference")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //完成连接日期
  strcpy(t->ConnectDate, PyString_AsString(PyObject_GetAttrString(p, "ConnectDate")));

  return t;
};

//查询合约状态
PyObject * new_CThostFtdcQryInstrumentStatusField(CThostFtdcQryInstrumentStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentStatusField", (char*)"ss",
p->ExchangeID, p->ExchangeInstID);
}
CThostFtdcQryInstrumentStatusField * from_CThostFtdcQryInstrumentStatusField(PyObject * p){
  CThostFtdcQryInstrumentStatusField *t = (CThostFtdcQryInstrumentStatusField *)calloc(1, sizeof(CThostFtdcQryInstrumentStatusField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentStatusField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //合约在交易所的代码
  strcpy(t->ExchangeInstID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeInstID")));

  return t;
};

//行情申卖二、三属性
PyObject * new_CThostFtdcMarketDataAsk23Field(CThostFtdcMarketDataAsk23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAsk23Field", (char*)"iidd",
p->AskVolume3, p->AskVolume2, p->AskPrice3, p->AskPrice2);
}
CThostFtdcMarketDataAsk23Field * from_CThostFtdcMarketDataAsk23Field(PyObject * p){
  CThostFtdcMarketDataAsk23Field *t = (CThostFtdcMarketDataAsk23Field *)calloc(1, sizeof(CThostFtdcMarketDataAsk23Field));
  memset(t,0,sizeof(CThostFtdcMarketDataAsk23Field));
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

//查询报单操作
PyObject * new_CThostFtdcQryOrderActionField(CThostFtdcQryOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryOrderActionField", (char*)"sss",
p->InvestorID, p->ExchangeID, p->BrokerID);
}
CThostFtdcQryOrderActionField * from_CThostFtdcQryOrderActionField(PyObject * p){
  CThostFtdcQryOrderActionField *t = (CThostFtdcQryOrderActionField *)calloc(1, sizeof(CThostFtdcQryOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//灾备中心交易权限
PyObject * new_CThostFtdcUserRightsAssignField(CThostFtdcUserRightsAssignField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserRightsAssignField", (char*)"sis",
p->UserID, p->DRIdentityID, p->BrokerID);
}
CThostFtdcUserRightsAssignField * from_CThostFtdcUserRightsAssignField(PyObject * p){
  CThostFtdcUserRightsAssignField *t = (CThostFtdcUserRightsAssignField *)calloc(1, sizeof(CThostFtdcUserRightsAssignField));
  memset(t,0,sizeof(CThostFtdcUserRightsAssignField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //交易中心代码
  t->DRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));
  //应用单元代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

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

//当前时间
PyObject * new_CThostFtdcCurrentTimeField(CThostFtdcCurrentTimeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCurrentTimeField", (char*)"ssi",
p->CurrTime, p->CurrDate, p->CurrMillisec);
}
CThostFtdcCurrentTimeField * from_CThostFtdcCurrentTimeField(PyObject * p){
  CThostFtdcCurrentTimeField *t = (CThostFtdcCurrentTimeField *)calloc(1, sizeof(CThostFtdcCurrentTimeField));
  memset(t,0,sizeof(CThostFtdcCurrentTimeField));
  //当前时间
  strcpy(t->CurrTime, PyString_AsString(PyObject_GetAttrString(p, "CurrTime")));
  //当前日期
  strcpy(t->CurrDate, PyString_AsString(PyObject_GetAttrString(p, "CurrDate")));
  //当前时间（毫秒）
  t->CurrMillisec =   PyInt_AsLong(PyObject_GetAttrString(p, "CurrMillisec"));

  return t;
};

//错误报单操作
PyObject * new_CThostFtdcErrOrderActionField(CThostFtdcErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrOrderActionField", (char*)"ssssdcisiiicissssssssssssii",
p->ActionTime, p->InvestorID, p->TraderID, p->UserID, p->LimitPrice, p->OrderActionStatus, p->InstallID, p->ParticipantID, p->OrderActionRef, p->VolumeChange, p->SessionID, p->ActionFlag, p->ErrorID, p->InstrumentID, p->ExchangeID, p->StatusMsg, p->OrderSysID, p->BrokerID, p->ClientID, p->ActionDate, p->OrderLocalID, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->ActionLocalID, p->RequestID, p->FrontID);
}
CThostFtdcErrOrderActionField * from_CThostFtdcErrOrderActionField(PyObject * p){
  CThostFtdcErrOrderActionField *t = (CThostFtdcErrOrderActionField *)calloc(1, sizeof(CThostFtdcErrOrderActionField));
  memset(t,0,sizeof(CThostFtdcErrOrderActionField));
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
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
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
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //操作日期
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
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

  return t;
};

//查询交易员报盘机
PyObject * new_CThostFtdcQryTraderOfferField(CThostFtdcQryTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTraderOfferField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
CThostFtdcQryTraderOfferField * from_CThostFtdcQryTraderOfferField(PyObject * p){
  CThostFtdcQryTraderOfferField *t = (CThostFtdcQryTraderOfferField *)calloc(1, sizeof(CThostFtdcQryTraderOfferField));
  memset(t,0,sizeof(CThostFtdcQryTraderOfferField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//行情申买二、三属性
PyObject * new_CThostFtdcMarketDataBid23Field(CThostFtdcMarketDataBid23Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBid23Field", (char*)"iidd",
p->BidVolume3, p->BidVolume2, p->BidPrice3, p->BidPrice2);
}
CThostFtdcMarketDataBid23Field * from_CThostFtdcMarketDataBid23Field(PyObject * p){
  CThostFtdcMarketDataBid23Field *t = (CThostFtdcMarketDataBid23Field *)calloc(1, sizeof(CThostFtdcMarketDataBid23Field));
  memset(t,0,sizeof(CThostFtdcMarketDataBid23Field));
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

//行情基础属性
PyObject * new_CThostFtdcMarketDataBaseField(CThostFtdcMarketDataBaseField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBaseField", (char*)"sdddd",
p->TradingDay, p->PreDelta, p->PreClosePrice, p->PreOpenInterest, p->PreSettlementPrice);
}
CThostFtdcMarketDataBaseField * from_CThostFtdcMarketDataBaseField(PyObject * p){
  CThostFtdcMarketDataBaseField *t = (CThostFtdcMarketDataBaseField *)calloc(1, sizeof(CThostFtdcMarketDataBaseField));
  memset(t,0,sizeof(CThostFtdcMarketDataBaseField));
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

//冲正请求
PyObject * new_CThostFtdcReqRepealField(CThostFtdcReqRepealField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqRepealField", (char*)"ssscisciissicsssisicicscsssssscccsdssdccisicsisdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->BankRepealFlag, p->RepealedTimes, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->FutureRepealSerial, p->AccountID, p->BankAccount, p->InstallID, p->SecuPwdFlag, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->BankPwdFlag, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->BrokerRepealFlag, p->IdCardType, p->Password, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankRepealSerial, p->RepealTimeInterval, p->BankSecuAccType, p->BrokerIDByBank, p->PlateRepealSerial, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CThostFtdcReqRepealField * from_CThostFtdcReqRepealField(PyObject * p){
  CThostFtdcReqRepealField *t = (CThostFtdcReqRepealField *)calloc(1, sizeof(CThostFtdcReqRepealField));
  memset(t,0,sizeof(CThostFtdcReqRepealField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//成交
PyObject * new_CThostFtdcTradeField(CThostFtdcTradeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradeField", (char*)"cscscsdsissssissscssssisissccc",
p->TradeType, p->TraderID, p->HedgeFlag, p->TradeTime, p->Direction, p->ParticipantID, p->Price, p->ClientID, p->Volume, p->OrderSysID, p->ClearingPartID, p->InstrumentID, p->ExchangeID, p->SettlementID, p->UserID, p->TradingDay, p->BrokerID, p->OffsetFlag, p->OrderLocalID, p->TradeID, p->TradeDate, p->BusinessUnit, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->ExchangeInstID, p->TradeSource, p->PriceSource, p->TradingRole);
}
CThostFtdcTradeField * from_CThostFtdcTradeField(PyObject * p){
  CThostFtdcTradeField *t = (CThostFtdcTradeField *)calloc(1, sizeof(CThostFtdcTradeField));
  memset(t,0,sizeof(CThostFtdcTradeField));
  //成交类型
  //enum类型
  //THOST_FTDC_TRDT_EFPDerived -> '3', 期转现衍生成交
  //THOST_FTDC_TRDT_OTC -> '2', OTC成交
  //THOST_FTDC_TRDT_OptionsExecution -> '1', 期权执行
  //THOST_FTDC_TRDT_Common -> '0', 普通成交
  //THOST_FTDC_TRDT_CombinationDerived -> '4', 组合衍生成交
  t->TradeType =   PyString_AsString(PyObject_GetAttrString(p, "TradeType"))[0];
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //成交时间
  strcpy(t->TradeTime, PyString_AsString(PyObject_GetAttrString(p, "TradeTime")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
  //价格
  t->Price =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Price"));
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
  //成交来源
  //enum类型
  //THOST_FTDC_TSRC_NORMAL -> '0', 来自交易所普通回报
  //THOST_FTDC_TSRC_QUERY -> '1', 来自查询
  t->TradeSource =   PyString_AsString(PyObject_GetAttrString(p, "TradeSource"))[0];
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

//查询预埋单
PyObject * new_CThostFtdcQryParkedOrderField(CThostFtdcQryParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryParkedOrderField", (char*)"ssss",
p->InstrumentID, p->InvestorID, p->ExchangeID, p->BrokerID);
}
CThostFtdcQryParkedOrderField * from_CThostFtdcQryParkedOrderField(PyObject * p){
  CThostFtdcQryParkedOrderField *t = (CThostFtdcQryParkedOrderField *)calloc(1, sizeof(CThostFtdcQryParkedOrderField));
  memset(t,0,sizeof(CThostFtdcQryParkedOrderField));
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

//查询经纪公司用户事件
PyObject * new_CThostFtdcQryBrokerUserEventField(CThostFtdcQryBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserEventField", (char*)"ssc",
p->UserID, p->BrokerID, p->UserEventType);
}
CThostFtdcQryBrokerUserEventField * from_CThostFtdcQryBrokerUserEventField(PyObject * p){
  CThostFtdcQryBrokerUserEventField *t = (CThostFtdcQryBrokerUserEventField *)calloc(1, sizeof(CThostFtdcQryBrokerUserEventField));
  memset(t,0,sizeof(CThostFtdcQryBrokerUserEventField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //用户事件类型
  //enum类型
  //THOST_FTDC_UET_Authenticate -> '6', 客户端认证
  //THOST_FTDC_UET_Login -> '1', 登录
  //THOST_FTDC_UET_TradingError -> '4', 交易失败
  //THOST_FTDC_UET_UpdatePassword -> '5', 修改密码
  //THOST_FTDC_UET_Other -> '9', 其他
  //THOST_FTDC_UET_Trading -> '3', 交易成功
  //THOST_FTDC_UET_Logout -> '2', 登出
  t->UserEventType =   PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];

  return t;
};

//查询交易编码
PyObject * new_CThostFtdcQryInstrumentCommissionRateField(CThostFtdcQryInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentCommissionRateField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
CThostFtdcQryInstrumentCommissionRateField * from_CThostFtdcQryInstrumentCommissionRateField(PyObject * p){
  CThostFtdcQryInstrumentCommissionRateField *t = (CThostFtdcQryInstrumentCommissionRateField *)calloc(1, sizeof(CThostFtdcQryInstrumentCommissionRateField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentCommissionRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//返回结果
PyObject * new_CThostFtdcReturnResultField(CThostFtdcReturnResultField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReturnResultField", (char*)"ss",
p->ReturnCode, p->DescrInfoForReturnCode);
}
CThostFtdcReturnResultField * from_CThostFtdcReturnResultField(PyObject * p){
  CThostFtdcReturnResultField *t = (CThostFtdcReturnResultField *)calloc(1, sizeof(CThostFtdcReturnResultField));
  memset(t,0,sizeof(CThostFtdcReturnResultField));
  //返回代码
  strcpy(t->ReturnCode, PyString_AsString(PyObject_GetAttrString(p, "ReturnCode")));
  //返回码描述
  strcpy(t->DescrInfoForReturnCode, PyString_AsString(PyObject_GetAttrString(p, "DescrInfoForReturnCode")));

  return t;
};

//删除预埋撤单
PyObject * new_CThostFtdcRemoveParkedOrderActionField(CThostFtdcRemoveParkedOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRemoveParkedOrderActionField", (char*)"sss",
p->InvestorID, p->BrokerID, p->ParkedOrderActionID);
}
CThostFtdcRemoveParkedOrderActionField * from_CThostFtdcRemoveParkedOrderActionField(PyObject * p){
  CThostFtdcRemoveParkedOrderActionField *t = (CThostFtdcRemoveParkedOrderActionField *)calloc(1, sizeof(CThostFtdcRemoveParkedOrderActionField));
  memset(t,0,sizeof(CThostFtdcRemoveParkedOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //预埋撤单编号
  strcpy(t->ParkedOrderActionID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderActionID")));

  return t;
};

//查询交易员
PyObject * new_CThostFtdcQryTraderField(CThostFtdcQryTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTraderField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
CThostFtdcQryTraderField * from_CThostFtdcQryTraderField(PyObject * p){
  CThostFtdcQryTraderField *t = (CThostFtdcQryTraderField *)calloc(1, sizeof(CThostFtdcQryTraderField));
  memset(t,0,sizeof(CThostFtdcQryTraderField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//保证金监管系统经纪公司资金账户密钥
PyObject * new_CThostFtdcCFMMCTradingAccountKeyField(CThostFtdcCFMMCTradingAccountKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcCFMMCTradingAccountKeyField", (char*)"issss",
p->KeyID, p->BrokerID, p->ParticipantID, p->CurrentKey, p->AccountID);
}
CThostFtdcCFMMCTradingAccountKeyField * from_CThostFtdcCFMMCTradingAccountKeyField(PyObject * p){
  CThostFtdcCFMMCTradingAccountKeyField *t = (CThostFtdcCFMMCTradingAccountKeyField *)calloc(1, sizeof(CThostFtdcCFMMCTradingAccountKeyField));
  memset(t,0,sizeof(CThostFtdcCFMMCTradingAccountKeyField));
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

//期商签退响应
PyObject * new_CThostFtdcRspFutureSignOutField(CThostFtdcRspFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspFutureSignOutField", (char*)"sssiissisiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CThostFtdcRspFutureSignOutField * from_CThostFtdcRspFutureSignOutField(PyObject * p){
  CThostFtdcRspFutureSignOutField *t = (CThostFtdcRspFutureSignOutField *)calloc(1, sizeof(CThostFtdcRspFutureSignOutField));
  memset(t,0,sizeof(CThostFtdcRspFutureSignOutField));
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

//查询出入金流水
PyObject * new_CThostFtdcQrySyncDepositField(CThostFtdcQrySyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySyncDepositField", (char*)"ss",
p->DepositSeqNo, p->BrokerID);
}
CThostFtdcQrySyncDepositField * from_CThostFtdcQrySyncDepositField(PyObject * p){
  CThostFtdcQrySyncDepositField *t = (CThostFtdcQrySyncDepositField *)calloc(1, sizeof(CThostFtdcQrySyncDepositField));
  memset(t,0,sizeof(CThostFtdcQrySyncDepositField));
  //出入金流水号
  strcpy(t->DepositSeqNo, PyString_AsString(PyObject_GetAttrString(p, "DepositSeqNo")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

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

//验证客户信息
PyObject * new_CThostFtdcVerifyCustInfoField(CThostFtdcVerifyCustInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyCustInfoField", (char*)"cssc",
p->CustType, p->IdentifiedCardNo, p->CustomerName, p->IdCardType);
}
CThostFtdcVerifyCustInfoField * from_CThostFtdcVerifyCustInfoField(PyObject * p){
  CThostFtdcVerifyCustInfoField *t = (CThostFtdcVerifyCustInfoField *)calloc(1, sizeof(CThostFtdcVerifyCustInfoField));
  memset(t,0,sizeof(CThostFtdcVerifyCustInfoField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//输入报单操作
PyObject * new_CThostFtdcInputOrderActionField(CThostFtdcInputOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInputOrderActionField", (char*)"sscisdssiisisi",
p->InstrumentID, p->ExchangeID, p->ActionFlag, p->OrderActionRef, p->UserID, p->LimitPrice, p->OrderRef, p->InvestorID, p->SessionID, p->VolumeChange, p->BrokerID, p->RequestID, p->OrderSysID, p->FrontID);
}
CThostFtdcInputOrderActionField * from_CThostFtdcInputOrderActionField(PyObject * p){
  CThostFtdcInputOrderActionField *t = (CThostFtdcInputOrderActionField *)calloc(1, sizeof(CThostFtdcInputOrderActionField));
  memset(t,0,sizeof(CThostFtdcInputOrderActionField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //报单操作引用
  t->OrderActionRef =   PyInt_AsLong(PyObject_GetAttrString(p, "OrderActionRef"));
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
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//投资者组合持仓明细
PyObject * new_CThostFtdcInvestorPositionCombineDetailField(CThostFtdcInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorPositionCombineDetailField", (char*)"ssdsisiddicsisdcsss",
p->InstrumentID, p->ExchangeID, p->MarginRateByVolume, p->ComTradeID, p->SettlementID, p->InvestorID, p->TotalAmt, p->Margin, p->ExchMargin, p->LegMultiple, p->HedgeFlag, p->TradeID, p->LegID, p->TradingDay, p->MarginRateByMoney, p->Direction, p->BrokerID, p->CombInstrumentID, p->OpenDate);
}
CThostFtdcInvestorPositionCombineDetailField * from_CThostFtdcInvestorPositionCombineDetailField(PyObject * p){
  CThostFtdcInvestorPositionCombineDetailField *t = (CThostFtdcInvestorPositionCombineDetailField *)calloc(1, sizeof(CThostFtdcInvestorPositionCombineDetailField));
  memset(t,0,sizeof(CThostFtdcInvestorPositionCombineDetailField));
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
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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
  //THOST_FTDC_D_Sell -> '1', 卖
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //组合持仓合约编码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));
  //开仓日期
  strcpy(t->OpenDate, PyString_AsString(PyObject_GetAttrString(p, "OpenDate")));

  return t;
};

//查询经纪公司用户权限
PyObject * new_CThostFtdcQryBrokerUserFunctionField(CThostFtdcQryBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerUserFunctionField", (char*)"ss",
p->UserID, p->BrokerID);
}
CThostFtdcQryBrokerUserFunctionField * from_CThostFtdcQryBrokerUserFunctionField(PyObject * p){
  CThostFtdcQryBrokerUserFunctionField *t = (CThostFtdcQryBrokerUserFunctionField *)calloc(1, sizeof(CThostFtdcQryBrokerUserFunctionField));
  memset(t,0,sizeof(CThostFtdcQryBrokerUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//预埋单
PyObject * new_CThostFtdcParkedOrderField(CThostFtdcParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcParkedOrderField", (char*)"cssdiccciccidssicissssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Status, p->Direction, p->UserType, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->ForceCloseReason, p->ErrorID, p->ParkedOrderID, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->ErrorMsg, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
CThostFtdcParkedOrderField * from_CThostFtdcParkedOrderField(PyObject * p){
  CThostFtdcParkedOrderField *t = (CThostFtdcParkedOrderField *)calloc(1, sizeof(CThostFtdcParkedOrderField));
  memset(t,0,sizeof(CThostFtdcParkedOrderField));
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
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
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
  //THOST_FTDC_D_Sell -> '1', 卖
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
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
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
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
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

//经济公司是否有在本标示的交易权限
PyObject * new_CThostFtdcBrokerUserRightAssignField(CThostFtdcBrokerUserRightAssignField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserRightAssignField", (char*)"isi",
p->DRIdentityID, p->BrokerID, p->Tradeable);
}
CThostFtdcBrokerUserRightAssignField * from_CThostFtdcBrokerUserRightAssignField(PyObject * p){
  CThostFtdcBrokerUserRightAssignField *t = (CThostFtdcBrokerUserRightAssignField *)calloc(1, sizeof(CThostFtdcBrokerUserRightAssignField));
  memset(t,0,sizeof(CThostFtdcBrokerUserRightAssignField));
  //交易中心代码
  t->DRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "DRIdentityID"));
  //应用单元代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //能否交易
  t->Tradeable =   PyInt_AsLong(PyObject_GetAttrString(p, "Tradeable"));

  return t;
};

//报单操作
PyObject * new_CThostFtdcOrderActionField(CThostFtdcOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOrderActionField", (char*)"ssssdcisiiicsssssssssssii",
p->ActionTime, p->InvestorID, p->TraderID, p->UserID, p->LimitPrice, p->OrderActionStatus, p->InstallID, p->ParticipantID, p->OrderActionRef, p->VolumeChange, p->SessionID, p->ActionFlag, p->InstrumentID, p->ExchangeID, p->StatusMsg, p->OrderSysID, p->BrokerID, p->ClientID, p->ActionDate, p->OrderLocalID, p->BusinessUnit, p->OrderRef, p->ActionLocalID, p->RequestID, p->FrontID);
}
CThostFtdcOrderActionField * from_CThostFtdcOrderActionField(PyObject * p){
  CThostFtdcOrderActionField *t = (CThostFtdcOrderActionField *)calloc(1, sizeof(CThostFtdcOrderActionField));
  memset(t,0,sizeof(CThostFtdcOrderActionField));
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
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
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
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //操作日期
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
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

  return t;
};

//会员编码和经纪公司编码对照表
PyObject * new_CThostFtdcPartBrokerField(CThostFtdcPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcPartBrokerField", (char*)"sssi",
p->ExchangeID, p->BrokerID, p->ParticipantID, p->IsActive);
}
CThostFtdcPartBrokerField * from_CThostFtdcPartBrokerField(PyObject * p){
  CThostFtdcPartBrokerField *t = (CThostFtdcPartBrokerField *)calloc(1, sizeof(CThostFtdcPartBrokerField));
  memset(t,0,sizeof(CThostFtdcPartBrokerField));
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

//转帐开户请求
PyObject * new_CThostFtdcReqOpenAccountField(CThostFtdcReqOpenAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqOpenAccountField", (char*)"csssscisssisssssisiccssssscsccssssccscscsss",
p->MoneyAccountStatus, p->BrokerBranchID, p->BankPassWord, p->Telephone, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->Fax, p->InstallID, p->CustomerName, p->CountryCode, p->TradeCode, p->BankSecuAcc, p->BankBranchID, p->SessionID, p->Address, p->PlateSerial, p->BankPwdFlag, p->CustType, p->IdentifiedCardNo, p->BankID, p->BankSerial, p->OperNo, p->TradingDay, p->Gender, p->BrokerID, p->CashExchangeCode, p->IdCardType, p->Password, p->MobilePhone, p->TradeDate, p->CurrencyID, p->BankAccType, p->LastFragment, p->ZipCode, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->EMail, p->Digest, p->DeviceID);
}
CThostFtdcReqOpenAccountField * from_CThostFtdcReqOpenAccountField(PyObject * p){
  CThostFtdcReqOpenAccountField *t = (CThostFtdcReqOpenAccountField *)calloc(1, sizeof(CThostFtdcReqOpenAccountField));
  memset(t,0,sizeof(CThostFtdcReqOpenAccountField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//校验投资者密码
PyObject * new_CThostFtdcVerifyInvestorPasswordField(CThostFtdcVerifyInvestorPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyInvestorPasswordField", (char*)"sss",
p->InvestorID, p->Password, p->BrokerID);
}
CThostFtdcVerifyInvestorPasswordField * from_CThostFtdcVerifyInvestorPasswordField(PyObject * p){
  CThostFtdcVerifyInvestorPasswordField *t = (CThostFtdcVerifyInvestorPasswordField *)calloc(1, sizeof(CThostFtdcVerifyInvestorPasswordField));
  memset(t,0,sizeof(CThostFtdcVerifyInvestorPasswordField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询经纪公司资金
PyObject * new_CThostFtdcQueryBrokerDepositField(CThostFtdcQueryBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQueryBrokerDepositField", (char*)"ss",
p->ExchangeID, p->BrokerID);
}
CThostFtdcQueryBrokerDepositField * from_CThostFtdcQueryBrokerDepositField(PyObject * p){
  CThostFtdcQueryBrokerDepositField *t = (CThostFtdcQueryBrokerDepositField *)calloc(1, sizeof(CThostFtdcQueryBrokerDepositField));
  memset(t,0,sizeof(CThostFtdcQueryBrokerDepositField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//管理用户
PyObject * new_CThostFtdcSuperUserField(CThostFtdcSuperUserField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSuperUserField", (char*)"sssi",
p->UserName, p->Password, p->UserID, p->IsActive);
}
CThostFtdcSuperUserField * from_CThostFtdcSuperUserField(PyObject * p){
  CThostFtdcSuperUserField *t = (CThostFtdcSuperUserField *)calloc(1, sizeof(CThostFtdcSuperUserField));
  memset(t,0,sizeof(CThostFtdcSuperUserField));
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

//查询产品
PyObject * new_CThostFtdcQryProductField(CThostFtdcQryProductField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryProductField", (char*)"s",
p->ProductID);
}
CThostFtdcQryProductField * from_CThostFtdcQryProductField(PyObject * p){
  CThostFtdcQryProductField *t = (CThostFtdcQryProductField *)calloc(1, sizeof(CThostFtdcQryProductField));
  memset(t,0,sizeof(CThostFtdcQryProductField));
  //产品代码
  strcpy(t->ProductID, PyString_AsString(PyObject_GetAttrString(p, "ProductID")));

  return t;
};

//投资者
PyObject * new_CThostFtdcInvestorField(CThostFtdcInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInvestorField", (char*)"ssssssssssic",
p->CommModelID, p->InvestorName, p->Mobile, p->IdentifiedCardNo, p->Telephone, p->InvestorID, p->BrokerID, p->Address, p->InvestorGroupID, p->OpenDate, p->IsActive, p->IdentifiedCardType);
}
CThostFtdcInvestorField * from_CThostFtdcInvestorField(PyObject * p){
  CThostFtdcInvestorField *t = (CThostFtdcInvestorField *)calloc(1, sizeof(CThostFtdcInvestorField));
  memset(t,0,sizeof(CThostFtdcInvestorField));
  //手续费率模板代码
  strcpy(t->CommModelID, PyString_AsString(PyObject_GetAttrString(p, "CommModelID")));
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
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//数据同步状态
PyObject * new_CThostFtdcSyncStatusField(CThostFtdcSyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncStatusField", (char*)"sc",
p->TradingDay, p->DataSyncStatus);
}
CThostFtdcSyncStatusField * from_CThostFtdcSyncStatusField(PyObject * p){
  CThostFtdcSyncStatusField *t = (CThostFtdcSyncStatusField *)calloc(1, sizeof(CThostFtdcSyncStatusField));
  memset(t,0,sizeof(CThostFtdcSyncStatusField));
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

//投资者合约交易权限
PyObject * new_CThostFtdcInstrumentTradingRightField(CThostFtdcInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentTradingRightField", (char*)"ssscc",
p->InstrumentID, p->InvestorID, p->BrokerID, p->InvestorRange, p->TradingRight);
}
CThostFtdcInstrumentTradingRightField * from_CThostFtdcInstrumentTradingRightField(PyObject * p){
  CThostFtdcInstrumentTradingRightField *t = (CThostFtdcInstrumentTradingRightField *)calloc(1, sizeof(CThostFtdcInstrumentTradingRightField));
  memset(t,0,sizeof(CThostFtdcInstrumentTradingRightField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
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
  //交易权限
  //enum类型
  //THOST_FTDC_TR_Allow -> '0', 可以交易
  //THOST_FTDC_TR_Forbidden -> '2', 不能交易
  //THOST_FTDC_TR_CloseOnly -> '1', 只能平仓
  t->TradingRight =   PyString_AsString(PyObject_GetAttrString(p, "TradingRight"))[0];

  return t;
};

//查询银行资金请求响应
PyObject * new_CThostFtdcTransferQryBankRspField(CThostFtdcTransferQryBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferQryBankRspField", (char*)"sssddsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->UseAmt, p->RetInfo, p->FetchAmt);
}
CThostFtdcTransferQryBankRspField * from_CThostFtdcTransferQryBankRspField(PyObject * p){
  CThostFtdcTransferQryBankRspField *t = (CThostFtdcTransferQryBankRspField *)calloc(1, sizeof(CThostFtdcTransferQryBankRspField));
  memset(t,0,sizeof(CThostFtdcTransferQryBankRspField));
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

//客户开销户信息表
PyObject * new_CThostFtdcAccountregisterField(CThostFtdcAccountregisterField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcAccountregisterField", (char*)"scsssssssssiccscs",
p->BankAccount, p->CustType, p->CustomerName, p->CurrencyID, p->BrokerBranchID, p->OutDate, p->IdentifiedCardNo, p->BankBranchID, p->RegDate, p->BrokerID, p->BankID, p->TID, p->OpenOrDestroy, p->IdCardType, p->TradeDay, p->BankAccType, p->AccountID);
}
CThostFtdcAccountregisterField * from_CThostFtdcAccountregisterField(PyObject * p){
  CThostFtdcAccountregisterField *t = (CThostFtdcAccountregisterField *)calloc(1, sizeof(CThostFtdcAccountregisterField));
  memset(t,0,sizeof(CThostFtdcAccountregisterField));
  //银行帐号
  strcpy(t->BankAccount, PyString_AsString(PyObject_GetAttrString(p, "BankAccount")));
  //客户类型
  //enum类型
  //THOST_FTDC_CUSTT_Institution -> '1', 机构户
  //THOST_FTDC_CUSTT_Person -> '0', 自然人
  t->CustType =   PyString_AsString(PyObject_GetAttrString(p, "CustType"))[0];
  //客户姓名
  strcpy(t->CustomerName, PyString_AsString(PyObject_GetAttrString(p, "CustomerName")));
  //币种代码
  strcpy(t->CurrencyID, PyString_AsString(PyObject_GetAttrString(p, "CurrencyID")));
  //期货公司分支机构编码
  strcpy(t->BrokerBranchID, PyString_AsString(PyObject_GetAttrString(p, "BrokerBranchID")));
  //解约日期
  strcpy(t->OutDate, PyString_AsString(PyObject_GetAttrString(p, "OutDate")));
  //证件号码
  strcpy(t->IdentifiedCardNo, PyString_AsString(PyObject_GetAttrString(p, "IdentifiedCardNo")));
  //银行分支机构编码
  strcpy(t->BankBranchID, PyString_AsString(PyObject_GetAttrString(p, "BankBranchID")));
  //签约日期
  strcpy(t->RegDate, PyString_AsString(PyObject_GetAttrString(p, "RegDate")));
  //期货公司编码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //银行编码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //交易ID
  t->TID =   PyInt_AsLong(PyObject_GetAttrString(p, "TID"));
  //开销户类别
  //enum类型
  //THOST_FTDC_OOD_Destroy -> '0', 销户
  //THOST_FTDC_OOD_Open -> '1', 开户
  t->OpenOrDestroy =   PyString_AsString(PyObject_GetAttrString(p, "OpenOrDestroy"))[0];
  //证件类型
  //enum类型
  //THOST_FTDC_ICT_LicenseNo -> '9', 营业执照号
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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
  //交易日期
  strcpy(t->TradeDay, PyString_AsString(PyObject_GetAttrString(p, "TradeDay")));
  //银行帐号类型
  //enum类型
  //THOST_FTDC_BAT_SavingCard -> '2', 储蓄卡
  //THOST_FTDC_BAT_CreditCard -> '3', 信用卡
  //THOST_FTDC_BAT_BankBook -> '1', 银行存折
  t->BankAccType =   PyString_AsString(PyObject_GetAttrString(p, "BankAccType"))[0];
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//经纪公司资金
PyObject * new_CThostFtdcBrokerDepositField(CThostFtdcBrokerDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerDepositField", (char*)"dssdddssddddd",
p->Available, p->ExchangeID, p->ParticipantID, p->FrozenMargin, p->PreBalance, p->CurrMargin, p->TradingDay, p->BrokerID, p->Deposit, p->Withdraw, p->CloseProfit, p->Balance, p->Reserve);
}
CThostFtdcBrokerDepositField * from_CThostFtdcBrokerDepositField(PyObject * p){
  CThostFtdcBrokerDepositField *t = (CThostFtdcBrokerDepositField *)calloc(1, sizeof(CThostFtdcBrokerDepositField));
  memset(t,0,sizeof(CThostFtdcBrokerDepositField));
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

//查询错误报单操作
PyObject * new_CThostFtdcErrorConditionalOrderField(CThostFtdcErrorConditionalOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcErrorConditionalOrderField", (char*)"cisissssdiscisissiciccscidssisiccisssssissssssssisisciscs",
p->ContingentCondition, p->NotifySequence, p->ActiveUserID, p->VolumeTraded, p->UserProductInfo, p->CombOffsetFlag, p->TraderID, p->UserID, p->LimitPrice, p->UserForceClose, p->RelativeOrderSysID, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->SessionID, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->StatusMsg, p->SettlementID, p->ForceCloseReason, p->OrderType, p->ErrorID, p->UpdateTime, p->TradingDay, p->ActiveTime, p->BrokerID, p->InsertTime, p->FrontID, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->VolumeCondition, p->RequestID, p->ErrorMsg, p->OrderSource, p->ActiveTraderID);
}
CThostFtdcErrorConditionalOrderField * from_CThostFtdcErrorConditionalOrderField(PyObject * p){
  CThostFtdcErrorConditionalOrderField *t = (CThostFtdcErrorConditionalOrderField *)calloc(1, sizeof(CThostFtdcErrorConditionalOrderField));
  memset(t,0,sizeof(CThostFtdcErrorConditionalOrderField));
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
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //相关报单
  strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
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
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
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
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
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
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//灾备交易转换报文
PyObject * new_CThostFtdcDRTransferField(CThostFtdcDRTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcDRTransferField", (char*)"siis",
p->DestBrokerID, p->DestDRIdentityID, p->OrigDRIdentityID, p->OrigBrokerID);
}
CThostFtdcDRTransferField * from_CThostFtdcDRTransferField(PyObject * p){
  CThostFtdcDRTransferField *t = (CThostFtdcDRTransferField *)calloc(1, sizeof(CThostFtdcDRTransferField));
  memset(t,0,sizeof(CThostFtdcDRTransferField));
  //目标易用单元代码
  strcpy(t->DestBrokerID, PyString_AsString(PyObject_GetAttrString(p, "DestBrokerID")));
  //目标交易中心代码
  t->DestDRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "DestDRIdentityID"));
  //原交易中心代码
  t->OrigDRIdentityID =   PyInt_AsLong(PyObject_GetAttrString(p, "OrigDRIdentityID"));
  //原应用单元代码
  strcpy(t->OrigBrokerID, PyString_AsString(PyObject_GetAttrString(p, "OrigBrokerID")));

  return t;
};

//经纪公司交易参数
PyObject * new_CThostFtdcBrokerTradingParamsField(CThostFtdcBrokerTradingParamsField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerTradingParamsField", (char*)"scscc",
p->InvestorID, p->MarginPriceType, p->BrokerID, p->AvailIncludeCloseProfit, p->Algorithm);
}
CThostFtdcBrokerTradingParamsField * from_CThostFtdcBrokerTradingParamsField(PyObject * p){
  CThostFtdcBrokerTradingParamsField *t = (CThostFtdcBrokerTradingParamsField *)calloc(1, sizeof(CThostFtdcBrokerTradingParamsField));
  memset(t,0,sizeof(CThostFtdcBrokerTradingParamsField));
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

//删除预埋单
PyObject * new_CThostFtdcRemoveParkedOrderField(CThostFtdcRemoveParkedOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRemoveParkedOrderField", (char*)"sss",
p->InvestorID, p->BrokerID, p->ParkedOrderID);
}
CThostFtdcRemoveParkedOrderField * from_CThostFtdcRemoveParkedOrderField(PyObject * p){
  CThostFtdcRemoveParkedOrderField *t = (CThostFtdcRemoveParkedOrderField *)calloc(1, sizeof(CThostFtdcRemoveParkedOrderField));
  memset(t,0,sizeof(CThostFtdcRemoveParkedOrderField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //预埋报单编号
  strcpy(t->ParkedOrderID, PyString_AsString(PyObject_GetAttrString(p, "ParkedOrderID")));

  return t;
};

//经纪公司用户口令
PyObject * new_CThostFtdcBrokerUserPasswordField(CThostFtdcBrokerUserPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserPasswordField", (char*)"sss",
p->UserID, p->Password, p->BrokerID);
}
CThostFtdcBrokerUserPasswordField * from_CThostFtdcBrokerUserPasswordField(PyObject * p){
  CThostFtdcBrokerUserPasswordField *t = (CThostFtdcBrokerUserPasswordField *)calloc(1, sizeof(CThostFtdcBrokerUserPasswordField));
  memset(t,0,sizeof(CThostFtdcBrokerUserPasswordField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//报单
PyObject * new_CThostFtdcOrderField(CThostFtdcOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcOrderField", (char*)"cisissssdiscisissiciccscidssisiccsssssissssssssisiscics",
p->ContingentCondition, p->NotifySequence, p->ActiveUserID, p->VolumeTraded, p->UserProductInfo, p->CombOffsetFlag, p->TraderID, p->UserID, p->LimitPrice, p->UserForceClose, p->RelativeOrderSysID, p->Direction, p->InstallID, p->ParticipantID, p->VolumeTotalOriginal, p->ExchangeInstID, p->ClientID, p->VolumeTotal, p->OrderPriceType, p->SessionID, p->TimeCondition, p->OrderStatus, p->OrderSysID, p->OrderSubmitStatus, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->ExchangeID, p->MinVolume, p->StatusMsg, p->SettlementID, p->ForceCloseReason, p->OrderType, p->UpdateTime, p->TradingDay, p->ActiveTime, p->BrokerID, p->InsertTime, p->FrontID, p->SuspendTime, p->ClearingPartID, p->CombHedgeFlag, p->CancelTime, p->GTDDate, p->OrderLocalID, p->BusinessUnit, p->InsertDate, p->SequenceNo, p->OrderRef, p->BrokerOrderSeq, p->InvestorID, p->VolumeCondition, p->RequestID, p->OrderSource, p->ActiveTraderID);
}
CThostFtdcOrderField * from_CThostFtdcOrderField(PyObject * p){
  CThostFtdcOrderField *t = (CThostFtdcOrderField *)calloc(1, sizeof(CThostFtdcOrderField));
  memset(t,0,sizeof(CThostFtdcOrderField));
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
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //相关报单
  strcpy(t->RelativeOrderSysID, PyString_AsString(PyObject_GetAttrString(p, "RelativeOrderSysID")));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
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
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
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
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
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
  //最后修改交易所交易员代码
  strcpy(t->ActiveTraderID, PyString_AsString(PyObject_GetAttrString(p, "ActiveTraderID")));

  return t;
};

//查询组合合约分腿
PyObject * new_CThostFtdcQrySyncStatusField(CThostFtdcQrySyncStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySyncStatusField", (char*)"s",
p->TradingDay);
}
CThostFtdcQrySyncStatusField * from_CThostFtdcQrySyncStatusField(PyObject * p){
  CThostFtdcQrySyncStatusField *t = (CThostFtdcQrySyncStatusField *)calloc(1, sizeof(CThostFtdcQrySyncStatusField));
  memset(t,0,sizeof(CThostFtdcQrySyncStatusField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

  return t;
};

//查询错误报单操作
PyObject * new_CThostFtdcQryErrOrderActionField(CThostFtdcQryErrOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryErrOrderActionField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryErrOrderActionField * from_CThostFtdcQryErrOrderActionField(PyObject * p){
  CThostFtdcQryErrOrderActionField *t = (CThostFtdcQryErrOrderActionField *)calloc(1, sizeof(CThostFtdcQryErrOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryErrOrderActionField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//用户动态令牌参数
PyObject * new_CThostFtdcBrokerUserOTPParamField(CThostFtdcBrokerUserOTPParamField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserOTPParamField", (char*)"iisssssc",
p->LastDrift, p->LastSuccess, p->SerialNumber, p->UserID, p->AuthKey, p->BrokerID, p->OTPVendorsID, p->OTPType);
}
CThostFtdcBrokerUserOTPParamField * from_CThostFtdcBrokerUserOTPParamField(PyObject * p){
  CThostFtdcBrokerUserOTPParamField *t = (CThostFtdcBrokerUserOTPParamField *)calloc(1, sizeof(CThostFtdcBrokerUserOTPParamField));
  memset(t,0,sizeof(CThostFtdcBrokerUserOTPParamField));
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

//合约保证金率调整
PyObject * new_CThostFtdcInstrumentMarginRateAdjustField(CThostFtdcInstrumentMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentMarginRateAdjustField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CThostFtdcInstrumentMarginRateAdjustField * from_CThostFtdcInstrumentMarginRateAdjustField(PyObject * p){
  CThostFtdcInstrumentMarginRateAdjustField *t = (CThostFtdcInstrumentMarginRateAdjustField *)calloc(1, sizeof(CThostFtdcInstrumentMarginRateAdjustField));
  memset(t,0,sizeof(CThostFtdcInstrumentMarginRateAdjustField));
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
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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

//查询投资者
PyObject * new_CThostFtdcQryInvestorField(CThostFtdcQryInvestorField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryInvestorField * from_CThostFtdcQryInvestorField(PyObject * p){
  CThostFtdcQryInvestorField *t = (CThostFtdcQryInvestorField *)calloc(1, sizeof(CThostFtdcQryInvestorField));
  memset(t,0,sizeof(CThostFtdcQryInvestorField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//指定的合约
PyObject * new_CThostFtdcSpecificInstrumentField(CThostFtdcSpecificInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSpecificInstrumentField", (char*)"s",
p->InstrumentID);
}
CThostFtdcSpecificInstrumentField * from_CThostFtdcSpecificInstrumentField(PyObject * p){
  CThostFtdcSpecificInstrumentField *t = (CThostFtdcSpecificInstrumentField *)calloc(1, sizeof(CThostFtdcSpecificInstrumentField));
  memset(t,0,sizeof(CThostFtdcSpecificInstrumentField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));

  return t;
};

//行情申卖四、五属性
PyObject * new_CThostFtdcMarketDataAsk45Field(CThostFtdcMarketDataAsk45Field * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAsk45Field", (char*)"ddii",
p->AskPrice5, p->AskPrice4, p->AskVolume5, p->AskVolume4);
}
CThostFtdcMarketDataAsk45Field * from_CThostFtdcMarketDataAsk45Field(PyObject * p){
  CThostFtdcMarketDataAsk45Field *t = (CThostFtdcMarketDataAsk45Field *)calloc(1, sizeof(CThostFtdcMarketDataAsk45Field));
  memset(t,0,sizeof(CThostFtdcMarketDataAsk45Field));
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

//资金账户口令变更域
PyObject * new_CThostFtdcTradingAccountPasswordUpdateField(CThostFtdcTradingAccountPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordUpdateField", (char*)"ssss",
p->NewPassword, p->OldPassword, p->BrokerID, p->AccountID);
}
CThostFtdcTradingAccountPasswordUpdateField * from_CThostFtdcTradingAccountPasswordUpdateField(PyObject * p){
  CThostFtdcTradingAccountPasswordUpdateField *t = (CThostFtdcTradingAccountPasswordUpdateField *)calloc(1, sizeof(CThostFtdcTradingAccountPasswordUpdateField));
  memset(t,0,sizeof(CThostFtdcTradingAccountPasswordUpdateField));
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

//查询指定流水号的交易结果响应
PyObject * new_CThostFtdcRspQueryTradeResultBySerialField(CThostFtdcRspQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspQueryTradeResultBySerialField", (char*)"ssssssssssisiissscsissscds",
p->OriginReturnCode, p->OriginDescrInfoForReturnCode, p->BrokerBranchID, p->BankPassWord, p->TradeTime, p->AccountID, p->BankAccount, p->TradeCode, p->BankBranchID, p->RefrenceIssure, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->TradingDay, p->BrokerID, p->RefrenceIssureType, p->Password, p->Reference, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->TradeAmount, p->Digest);
}
CThostFtdcRspQueryTradeResultBySerialField * from_CThostFtdcRspQueryTradeResultBySerialField(PyObject * p){
  CThostFtdcRspQueryTradeResultBySerialField *t = (CThostFtdcRspQueryTradeResultBySerialField *)calloc(1, sizeof(CThostFtdcRspQueryTradeResultBySerialField));
  memset(t,0,sizeof(CThostFtdcRspQueryTradeResultBySerialField));
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

//合约手续费率
PyObject * new_CThostFtdcInstrumentCommissionRateField(CThostFtdcInstrumentCommissionRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentCommissionRateField", (char*)"sdddsscddd",
p->InstrumentID, p->OpenRatioByMoney, p->CloseRatioByVolume, p->CloseTodayRatioByMoney, p->InvestorID, p->BrokerID, p->InvestorRange, p->CloseRatioByMoney, p->OpenRatioByVolume, p->CloseTodayRatioByVolume);
}
CThostFtdcInstrumentCommissionRateField * from_CThostFtdcInstrumentCommissionRateField(PyObject * p){
  CThostFtdcInstrumentCommissionRateField *t = (CThostFtdcInstrumentCommissionRateField *)calloc(1, sizeof(CThostFtdcInstrumentCommissionRateField));
  memset(t,0,sizeof(CThostFtdcInstrumentCommissionRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //开仓手续费率
  t->OpenRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByMoney"));
  //平仓手续费
  t->CloseRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByVolume"));
  //平今手续费率
  t->CloseTodayRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByMoney"));
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
  //平仓手续费率
  t->CloseRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseRatioByMoney"));
  //开仓手续费
  t->OpenRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenRatioByVolume"));
  //平今手续费
  t->CloseTodayRatioByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseTodayRatioByVolume"));

  return t;
};

//查询组合持仓明细
PyObject * new_CThostFtdcQryInvestorPositionCombineDetailField(CThostFtdcQryInvestorPositionCombineDetailField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInvestorPositionCombineDetailField", (char*)"sss",
p->InvestorID, p->BrokerID, p->CombInstrumentID);
}
CThostFtdcQryInvestorPositionCombineDetailField * from_CThostFtdcQryInvestorPositionCombineDetailField(PyObject * p){
  CThostFtdcQryInvestorPositionCombineDetailField *t = (CThostFtdcQryInvestorPositionCombineDetailField *)calloc(1, sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
  memset(t,0,sizeof(CThostFtdcQryInvestorPositionCombineDetailField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //组合持仓合约编码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//查询转帐银行
PyObject * new_CThostFtdcQryTransferBankField(CThostFtdcQryTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTransferBankField", (char*)"ss",
p->BankBrchID, p->BankID);
}
CThostFtdcQryTransferBankField * from_CThostFtdcQryTransferBankField(PyObject * p){
  CThostFtdcQryTransferBankField *t = (CThostFtdcQryTransferBankField *)calloc(1, sizeof(CThostFtdcQryTransferBankField));
  memset(t,0,sizeof(CThostFtdcQryTransferBankField));
  //银行分中心代码
  strcpy(t->BankBrchID, PyString_AsString(PyObject_GetAttrString(p, "BankBrchID")));
  //银行代码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));

  return t;
};

//银期转账交易流水表
PyObject * new_CThostFtdcTransferSerialField(CThostFtdcTransferSerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferSerialField", (char*)"ssssssssisicisssscssdcissddc",
p->BankNewAccount, p->BrokerBranchID, p->TradeTime, p->OperatorCode, p->AccountID, p->BankAccount, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->FutureAccType, p->ErrorID, p->BankSerial, p->IdentifiedCardNo, p->TradingDay, p->BrokerID, p->IdCardType, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->FutureSerial, p->InvestorID, p->ErrorMsg, p->CustFee, p->TradeAmount, p->AvailabilityFlag);
}
CThostFtdcTransferSerialField * from_CThostFtdcTransferSerialField(PyObject * p){
  CThostFtdcTransferSerialField *t = (CThostFtdcTransferSerialField *)calloc(1, sizeof(CThostFtdcTransferSerialField));
  memset(t,0,sizeof(CThostFtdcTransferSerialField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//交易所保证金率调整
PyObject * new_CThostFtdcExchangeMarginRateAdjustField(CThostFtdcExchangeMarginRateAdjustField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeMarginRateAdjustField", (char*)"sddddddddcddsdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->ExchLongMarginRatioByMoney, p->ExchShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->ExchShortMarginRatioByVolume, p->ExchLongMarginRatioByVolume, p->NoShortMarginRatioByMoney, p->NoLongMarginRatioByMoney, p->HedgeFlag, p->NoLongMarginRatioByVolume, p->NoShortMarginRatioByVolume, p->BrokerID, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CThostFtdcExchangeMarginRateAdjustField * from_CThostFtdcExchangeMarginRateAdjustField(PyObject * p){
  CThostFtdcExchangeMarginRateAdjustField *t = (CThostFtdcExchangeMarginRateAdjustField *)calloc(1, sizeof(CThostFtdcExchangeMarginRateAdjustField));
  memset(t,0,sizeof(CThostFtdcExchangeMarginRateAdjustField));
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
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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

//查询前置状态
PyObject * new_CThostFtdcQryFrontStatusField(CThostFtdcQryFrontStatusField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryFrontStatusField", (char*)"i",
p->FrontID);
}
CThostFtdcQryFrontStatusField * from_CThostFtdcQryFrontStatusField(PyObject * p){
  CThostFtdcQryFrontStatusField *t = (CThostFtdcQryFrontStatusField *)calloc(1, sizeof(CThostFtdcQryFrontStatusField));
  memset(t,0,sizeof(CThostFtdcQryFrontStatusField));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));

  return t;
};

//查询客户通知
PyObject * new_CThostFtdcQryNoticeField(CThostFtdcQryNoticeField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryNoticeField", (char*)"s",
p->BrokerID);
}
CThostFtdcQryNoticeField * from_CThostFtdcQryNoticeField(PyObject * p){
  CThostFtdcQryNoticeField *t = (CThostFtdcQryNoticeField *)calloc(1, sizeof(CThostFtdcQryNoticeField));
  memset(t,0,sizeof(CThostFtdcQryNoticeField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//正在同步中的投资者分组
PyObject * new_CThostFtdcSyncingInvestorGroupField(CThostFtdcSyncingInvestorGroupField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorGroupField", (char*)"sss",
p->InvestorGroupID, p->BrokerID, p->InvestorGroupName);
}
CThostFtdcSyncingInvestorGroupField * from_CThostFtdcSyncingInvestorGroupField(PyObject * p){
  CThostFtdcSyncingInvestorGroupField *t = (CThostFtdcSyncingInvestorGroupField *)calloc(1, sizeof(CThostFtdcSyncingInvestorGroupField));
  memset(t,0,sizeof(CThostFtdcSyncingInvestorGroupField));
  //投资者分组代码
  strcpy(t->InvestorGroupID, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者分组名称
  strcpy(t->InvestorGroupName, PyString_AsString(PyObject_GetAttrString(p, "InvestorGroupName")));

  return t;
};

//交易所交易员
PyObject * new_CThostFtdcTraderField(CThostFtdcTraderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTraderField", (char*)"ssssis",
p->ExchangeID, p->ParticipantID, p->TraderID, p->BrokerID, p->InstallCount, p->Password);
}
CThostFtdcTraderField * from_CThostFtdcTraderField(PyObject * p){
  CThostFtdcTraderField *t = (CThostFtdcTraderField *)calloc(1, sizeof(CThostFtdcTraderField));
  memset(t,0,sizeof(CThostFtdcTraderField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));
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

//期商签退通知
PyObject * new_CThostFtdcNotifyFutureSignOutField(CThostFtdcNotifyFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyFutureSignOutField", (char*)"sssiissisiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CThostFtdcNotifyFutureSignOutField * from_CThostFtdcNotifyFutureSignOutField(PyObject * p){
  CThostFtdcNotifyFutureSignOutField *t = (CThostFtdcNotifyFutureSignOutField *)calloc(1, sizeof(CThostFtdcNotifyFutureSignOutField));
  memset(t,0,sizeof(CThostFtdcNotifyFutureSignOutField));
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

//登录信息
PyObject * new_CThostFtdcLoginInfoField(CThostFtdcLoginInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLoginInfoField", (char*)"sssssssssisssisssss",
p->CZCETime, p->MacAddress, p->SHFETime, p->MaxOrderRef, p->UserProductInfo, p->InterfaceProductInfo, p->UserID, p->LoginDate, p->SystemName, p->SessionID, p->BrokerID, p->OneTimePassword, p->FFEXTime, p->FrontID, p->DCETime, p->Password, p->IPAddress, p->LoginTime, p->ProtocolInfo);
}
CThostFtdcLoginInfoField * from_CThostFtdcLoginInfoField(PyObject * p){
  CThostFtdcLoginInfoField *t = (CThostFtdcLoginInfoField *)calloc(1, sizeof(CThostFtdcLoginInfoField));
  memset(t,0,sizeof(CThostFtdcLoginInfoField));
  //郑商所时间
  strcpy(t->CZCETime, PyString_AsString(PyObject_GetAttrString(p, "CZCETime")));
  //Mac地址
  strcpy(t->MacAddress, PyString_AsString(PyObject_GetAttrString(p, "MacAddress")));
  //上期所时间
  strcpy(t->SHFETime, PyString_AsString(PyObject_GetAttrString(p, "SHFETime")));
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
  //中金所时间
  strcpy(t->FFEXTime, PyString_AsString(PyObject_GetAttrString(p, "FFEXTime")));
  //前置编号
  t->FrontID =   PyInt_AsLong(PyObject_GetAttrString(p, "FrontID"));
  //大商所时间
  strcpy(t->DCETime, PyString_AsString(PyObject_GetAttrString(p, "DCETime")));
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

//装载结算信息
PyObject * new_CThostFtdcLoadSettlementInfoField(CThostFtdcLoadSettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcLoadSettlementInfoField", (char*)"s",
p->BrokerID);
}
CThostFtdcLoadSettlementInfoField * from_CThostFtdcLoadSettlementInfoField(PyObject * p){
  CThostFtdcLoadSettlementInfoField *t = (CThostFtdcLoadSettlementInfoField *)calloc(1, sizeof(CThostFtdcLoadSettlementInfoField));
  memset(t,0,sizeof(CThostFtdcLoadSettlementInfoField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//资金账户口令域
PyObject * new_CThostFtdcTradingAccountPasswordField(CThostFtdcTradingAccountPasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountPasswordField", (char*)"sss",
p->Password, p->BrokerID, p->AccountID);
}
CThostFtdcTradingAccountPasswordField * from_CThostFtdcTradingAccountPasswordField(PyObject * p){
  CThostFtdcTradingAccountPasswordField *t = (CThostFtdcTradingAccountPasswordField *)calloc(1, sizeof(CThostFtdcTradingAccountPasswordField));
  memset(t,0,sizeof(CThostFtdcTradingAccountPasswordField));
  //密码
  strcpy(t->Password, PyString_AsString(PyObject_GetAttrString(p, "Password")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//投资者结算结果确认信息
PyObject * new_CThostFtdcSettlementInfoConfirmField(CThostFtdcSettlementInfoConfirmField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementInfoConfirmField", (char*)"ssss",
p->ConfirmTime, p->InvestorID, p->BrokerID, p->ConfirmDate);
}
CThostFtdcSettlementInfoConfirmField * from_CThostFtdcSettlementInfoConfirmField(PyObject * p){
  CThostFtdcSettlementInfoConfirmField *t = (CThostFtdcSettlementInfoConfirmField *)calloc(1, sizeof(CThostFtdcSettlementInfoConfirmField));
  memset(t,0,sizeof(CThostFtdcSettlementInfoConfirmField));
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

//银行发起银行资金转期货响应
PyObject * new_CThostFtdcRspTransferField(CThostFtdcRspTransferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspTransferField", (char*)"sssscississsissciicscssssssccidssdcciscscsdds",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->FeePayFlag, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->TransferStatus, p->IdCardType, p->PlateSerial, p->FutureFetchAmount, p->TradeDate, p->CurrencyID, p->BrokerFee, p->BankAccType, p->LastFragment, p->FutureSerial, p->ErrorMsg, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Message, p->CustFee, p->TradeAmount, p->Digest);
}
CThostFtdcRspTransferField * from_CThostFtdcRspTransferField(PyObject * p){
  CThostFtdcRspTransferField *t = (CThostFtdcRspTransferField *)calloc(1, sizeof(CThostFtdcRspTransferField));
  memset(t,0,sizeof(CThostFtdcRspTransferField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//查询交易所报单操作
PyObject * new_CThostFtdcQryExchangeOrderActionField(CThostFtdcQryExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryExchangeOrderActionField", (char*)"ssss",
p->ExchangeID, p->TraderID, p->ParticipantID, p->ClientID);
}
CThostFtdcQryExchangeOrderActionField * from_CThostFtdcQryExchangeOrderActionField(PyObject * p){
  CThostFtdcQryExchangeOrderActionField *t = (CThostFtdcQryExchangeOrderActionField *)calloc(1, sizeof(CThostFtdcQryExchangeOrderActionField));
  memset(t,0,sizeof(CThostFtdcQryExchangeOrderActionField));
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

//银行资金转期货请求响应
PyObject * new_CThostFtdcTransferBankToFutureRspField(CThostFtdcTransferBankToFutureRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankToFutureRspField", (char*)"sssdsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->RetInfo, p->CustFee);
}
CThostFtdcTransferBankToFutureRspField * from_CThostFtdcTransferBankToFutureRspField(PyObject * p){
  CThostFtdcTransferBankToFutureRspField *t = (CThostFtdcTransferBankToFutureRspField *)calloc(1, sizeof(CThostFtdcTransferBankToFutureRspField));
  memset(t,0,sizeof(CThostFtdcTransferBankToFutureRspField));
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

//出入金同步
PyObject * new_CThostFtdcSyncDepositField(CThostFtdcSyncDepositField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncDepositField", (char*)"sssdi",
p->InvestorID, p->DepositSeqNo, p->BrokerID, p->Deposit, p->IsForce);
}
CThostFtdcSyncDepositField * from_CThostFtdcSyncDepositField(PyObject * p){
  CThostFtdcSyncDepositField *t = (CThostFtdcSyncDepositField *)calloc(1, sizeof(CThostFtdcSyncDepositField));
  memset(t,0,sizeof(CThostFtdcSyncDepositField));
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

//期商签到签退
PyObject * new_CThostFtdcFutureSignIOField(CThostFtdcFutureSignIOField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcFutureSignIOField", (char*)"isscssssssissssisissi",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->CurrencyID, p->Digest, p->RequestID);
}
CThostFtdcFutureSignIOField * from_CThostFtdcFutureSignIOField(PyObject * p){
  CThostFtdcFutureSignIOField *t = (CThostFtdcFutureSignIOField *)calloc(1, sizeof(CThostFtdcFutureSignIOField));
  memset(t,0,sizeof(CThostFtdcFutureSignIOField));
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

//经纪公司
PyObject * new_CThostFtdcBrokerField(CThostFtdcBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerField", (char*)"sssi",
p->BrokerAbbr, p->BrokerID, p->BrokerName, p->IsActive);
}
CThostFtdcBrokerField * from_CThostFtdcBrokerField(PyObject * p){
  CThostFtdcBrokerField *t = (CThostFtdcBrokerField *)calloc(1, sizeof(CThostFtdcBrokerField));
  memset(t,0,sizeof(CThostFtdcBrokerField));
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

//查询交易编码
PyObject * new_CThostFtdcQryInstrumentTradingRightField(CThostFtdcQryInstrumentTradingRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentTradingRightField", (char*)"sss",
p->InstrumentID, p->InvestorID, p->BrokerID);
}
CThostFtdcQryInstrumentTradingRightField * from_CThostFtdcQryInstrumentTradingRightField(PyObject * p){
  CThostFtdcQryInstrumentTradingRightField *t = (CThostFtdcQryInstrumentTradingRightField *)calloc(1, sizeof(CThostFtdcQryInstrumentTradingRightField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentTradingRightField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//请求查询银期签约关系
PyObject * new_CThostFtdcQryAccountregisterField(CThostFtdcQryAccountregisterField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryAccountregisterField", (char*)"sss",
p->BankID, p->BrokerID, p->AccountID);
}
CThostFtdcQryAccountregisterField * from_CThostFtdcQryAccountregisterField(PyObject * p){
  CThostFtdcQryAccountregisterField *t = (CThostFtdcQryAccountregisterField *)calloc(1, sizeof(CThostFtdcQryAccountregisterField));
  memset(t,0,sizeof(CThostFtdcQryAccountregisterField));
  //银行编码
  strcpy(t->BankID, PyString_AsString(PyObject_GetAttrString(p, "BankID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));

  return t;
};

//查询经纪公司用户事件
PyObject * new_CThostFtdcBrokerUserEventField(CThostFtdcBrokerUserEventField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserEventField", (char*)"sissssssc",
p->InstrumentID, p->EventSequenceNo, p->EventTime, p->UserID, p->InvestorID, p->BrokerID, p->UserEventInfo, p->EventDate, p->UserEventType);
}
CThostFtdcBrokerUserEventField * from_CThostFtdcBrokerUserEventField(PyObject * p){
  CThostFtdcBrokerUserEventField *t = (CThostFtdcBrokerUserEventField *)calloc(1, sizeof(CThostFtdcBrokerUserEventField));
  memset(t,0,sizeof(CThostFtdcBrokerUserEventField));
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
  //THOST_FTDC_UET_Authenticate -> '6', 客户端认证
  //THOST_FTDC_UET_Login -> '1', 登录
  //THOST_FTDC_UET_TradingError -> '4', 交易失败
  //THOST_FTDC_UET_UpdatePassword -> '5', 修改密码
  //THOST_FTDC_UET_Other -> '9', 其他
  //THOST_FTDC_UET_Trading -> '3', 交易成功
  //THOST_FTDC_UET_Logout -> '2', 登出
  t->UserEventType =   PyString_AsString(PyObject_GetAttrString(p, "UserEventType"))[0];

  return t;
};

//经纪公司用户功能权限
PyObject * new_CThostFtdcBrokerUserFunctionField(CThostFtdcBrokerUserFunctionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcBrokerUserFunctionField", (char*)"ssc",
p->UserID, p->BrokerID, p->BrokerFunctionCode);
}
CThostFtdcBrokerUserFunctionField * from_CThostFtdcBrokerUserFunctionField(PyObject * p){
  CThostFtdcBrokerUserFunctionField *t = (CThostFtdcBrokerUserFunctionField *)calloc(1, sizeof(CThostFtdcBrokerUserFunctionField));
  memset(t,0,sizeof(CThostFtdcBrokerUserFunctionField));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //经纪公司功能代码
  //enum类型
  //THOST_FTDC_BFC_TradeQry -> 'c', 交易查询：如查成交，委托
  //THOST_FTDC_BFC_CfgRiskLevelStd -> 'G', 风险级别标准设置
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
  //THOST_FTDC_BFC_MarketDataWarn -> 'B', 行情预警
  //THOST_FTDC_BFC_OrderInsert -> '5', 报单插入
  //THOST_FTDC_BFC_BrokerDeposit -> 'j', 察看经纪公司资金权限
  //THOST_FTDC_BFC_Virement -> 'e', 银期转账
  //THOST_FTDC_BFC_CfgBizNotice -> 'D', 业务通知模板设置
  //THOST_FTDC_BFC_BaseQry -> 'b', 基本查询：查询基础数据，如合约，交易所等常量
  //THOST_FTDC_BFC_ForceClose -> 'u', 强平
  //THOST_FTDC_BFC_RiskNotice -> 'i', 风控通知发送
  //THOST_FTDC_BFC_NetPositionInd -> 'x', 净持仓保证金指标
  //THOST_FTDC_BFC_QueryFundChange -> 'r', 出入金查询
  //THOST_FTDC_BFC_QueryPosition -> 'n', 持仓查询
  //THOST_FTDC_BFC_QryBizNotice -> 'C', 业务通知查询
  //THOST_FTDC_BFC_SyncOTP -> 'E', 同步动态令牌
  //THOST_FTDC_BFC_QueryTradingCode -> 't', 交易编码查询
  //THOST_FTDC_BFC_DataExport -> 'z', 数据导出
  //THOST_FTDC_BFC_ForceUserLogout -> '1', 强制用户登出
  //THOST_FTDC_BFC_Risk -> 'f', 风险监控
  //THOST_FTDC_BFC_Session -> 'g', 查询/管理：查询会话，踢人等
  //THOST_FTDC_BFC_RiskNoticeCtl -> 'h', 风控通知控制
  //THOST_FTDC_BFC_SendBizNotice -> 'F', 发送业务通知
  t->BrokerFunctionCode =   PyString_AsString(PyObject_GetAttrString(p, "BrokerFunctionCode"))[0];

  return t;
};

//资金账户
PyObject * new_CThostFtdcTradingAccountField(CThostFtdcTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTradingAccountField", (char*)"ddddddddsddddddidssddddddddddd",
p->Mortgage, p->ExchangeDeliveryMargin, p->FrozenMargin, p->WithdrawQuota, p->PositionProfit, p->Commission, p->Interest, p->CashIn, p->AccountID, p->Available, p->PreCredit, p->PreMortgage, p->InterestBase, p->ExchangeMargin, p->PreMargin, p->SettlementID, p->DeliveryMargin, p->TradingDay, p->BrokerID, p->FrozenCash, p->Withdraw, p->Balance, p->Reserve, p->PreDeposit, p->Credit, p->PreBalance, p->CurrMargin, p->FrozenCommission, p->CloseProfit, p->Deposit);
}
CThostFtdcTradingAccountField * from_CThostFtdcTradingAccountField(PyObject * p){
  CThostFtdcTradingAccountField *t = (CThostFtdcTradingAccountField *)calloc(1, sizeof(CThostFtdcTradingAccountField));
  memset(t,0,sizeof(CThostFtdcTradingAccountField));
  //质押金额
  t->Mortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Mortgage"));
  //交易所交割保证金
  t->ExchangeDeliveryMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeDeliveryMargin"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //可取资金
  t->WithdrawQuota =   PyFloat_AsDouble(PyObject_GetAttrString(p, "WithdrawQuota"));
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //利息收入
  t->Interest =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Interest"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //投资者帐号
  strcpy(t->AccountID, PyString_AsString(PyObject_GetAttrString(p, "AccountID")));
  //可用资金
  t->Available =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Available"));
  //上次信用额度
  t->PreCredit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreCredit"));
  //上次质押金额
  t->PreMortgage =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMortgage"));
  //利息基数
  t->InterestBase =   PyFloat_AsDouble(PyObject_GetAttrString(p, "InterestBase"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
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
  //期货结算准备金
  t->Balance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Balance"));
  //基本准备金
  t->Reserve =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Reserve"));
  //上次存款额
  t->PreDeposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreDeposit"));
  //信用额度
  t->Credit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Credit"));
  //上次结算准备金
  t->PreBalance =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreBalance"));
  //当前保证金总额
  t->CurrMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CurrMargin"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //入金金额
  t->Deposit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Deposit"));

  return t;
};

//转帐银行
PyObject * new_CThostFtdcTransferBankField(CThostFtdcTransferBankField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferBankField", (char*)"siss",
p->BankName, p->IsActive, p->BankBrchID, p->BankID);
}
CThostFtdcTransferBankField * from_CThostFtdcTransferBankField(PyObject * p){
  CThostFtdcTransferBankField *t = (CThostFtdcTransferBankField *)calloc(1, sizeof(CThostFtdcTransferBankField));
  memset(t,0,sizeof(CThostFtdcTransferBankField));
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

//交易核心向银期报盘发出密钥同步响应
PyObject * new_CThostFtdcRspSyncKeyField(CThostFtdcRspSyncKeyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspSyncKeyField", (char*)"sssiissisiisssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Message);
}
CThostFtdcRspSyncKeyField * from_CThostFtdcRspSyncKeyField(PyObject * p){
  CThostFtdcRspSyncKeyField *t = (CThostFtdcRspSyncKeyField *)calloc(1, sizeof(CThostFtdcRspSyncKeyField));
  memset(t,0,sizeof(CThostFtdcRspSyncKeyField));
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

//交易所报单操作
PyObject * new_CThostFtdcExchangeOrderActionField(CThostFtdcExchangeOrderActionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeOrderActionField", (char*)"ssssssssdsicicss",
p->ActionDate, p->ExchangeID, p->ActionTime, p->OrderSysID, p->OrderLocalID, p->BusinessUnit, p->TraderID, p->UserID, p->LimitPrice, p->ActionLocalID, p->InstallID, p->OrderActionStatus, p->VolumeChange, p->ActionFlag, p->ClientID, p->ParticipantID);
}
CThostFtdcExchangeOrderActionField * from_CThostFtdcExchangeOrderActionField(PyObject * p){
  CThostFtdcExchangeOrderActionField *t = (CThostFtdcExchangeOrderActionField *)calloc(1, sizeof(CThostFtdcExchangeOrderActionField));
  memset(t,0,sizeof(CThostFtdcExchangeOrderActionField));
  //操作日期
  strcpy(t->ActionDate, PyString_AsString(PyObject_GetAttrString(p, "ActionDate")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //操作时间
  strcpy(t->ActionTime, PyString_AsString(PyObject_GetAttrString(p, "ActionTime")));
  //报单编号
  strcpy(t->OrderSysID, PyString_AsString(PyObject_GetAttrString(p, "OrderSysID")));
  //本地报单编号
  strcpy(t->OrderLocalID, PyString_AsString(PyObject_GetAttrString(p, "OrderLocalID")));
  //业务单元
  strcpy(t->BusinessUnit, PyString_AsString(PyObject_GetAttrString(p, "BusinessUnit")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //用户代码
  strcpy(t->UserID, PyString_AsString(PyObject_GetAttrString(p, "UserID")));
  //价格
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //操作本地编号
  strcpy(t->ActionLocalID, PyString_AsString(PyObject_GetAttrString(p, "ActionLocalID")));
  //安装编号
  t->InstallID =   PyInt_AsLong(PyObject_GetAttrString(p, "InstallID"));
  //报单操作状态
  //enum类型
  //THOST_FTDC_OAS_Rejected -> 'c', 已经被拒绝
  //THOST_FTDC_OAS_Submitted -> 'a', 已经提交
  //THOST_FTDC_OAS_Accepted -> 'b', 已经接受
  t->OrderActionStatus =   PyString_AsString(PyObject_GetAttrString(p, "OrderActionStatus"))[0];
  //数量变化
  t->VolumeChange =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeChange"));
  //操作标志
  //enum类型
  //THOST_FTDC_AF_Delete -> '0', 删除
  //THOST_FTDC_AF_Modify -> '3', 修改
  t->ActionFlag =   PyString_AsString(PyObject_GetAttrString(p, "ActionFlag"))[0];
  //客户代码
  strcpy(t->ClientID, PyString_AsString(PyObject_GetAttrString(p, "ClientID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//合约保证金率
PyObject * new_CThostFtdcInstrumentMarginRateField(CThostFtdcInstrumentMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInstrumentMarginRateField", (char*)"sddicsscdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->IsRelative, p->HedgeFlag, p->InvestorID, p->BrokerID, p->InvestorRange, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CThostFtdcInstrumentMarginRateField * from_CThostFtdcInstrumentMarginRateField(PyObject * p){
  CThostFtdcInstrumentMarginRateField *t = (CThostFtdcInstrumentMarginRateField *)calloc(1, sizeof(CThostFtdcInstrumentMarginRateField));
  memset(t,0,sizeof(CThostFtdcInstrumentMarginRateField));
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
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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

//成交均价
PyObject * new_CThostFtdcMarketDataAveragePriceField(CThostFtdcMarketDataAveragePriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataAveragePriceField", (char*)"d",
p->AveragePrice);
}
CThostFtdcMarketDataAveragePriceField * from_CThostFtdcMarketDataAveragePriceField(PyObject * p){
  CThostFtdcMarketDataAveragePriceField *t = (CThostFtdcMarketDataAveragePriceField *)calloc(1, sizeof(CThostFtdcMarketDataAveragePriceField));
  memset(t,0,sizeof(CThostFtdcMarketDataAveragePriceField));
  //当日均价
  t->AveragePrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "AveragePrice"));

  return t;
};

//查询行情报盘机
PyObject * new_CThostFtdcQryMDTraderOfferField(CThostFtdcQryMDTraderOfferField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryMDTraderOfferField", (char*)"sss",
p->ExchangeID, p->TraderID, p->ParticipantID);
}
CThostFtdcQryMDTraderOfferField * from_CThostFtdcQryMDTraderOfferField(PyObject * p){
  CThostFtdcQryMDTraderOfferField *t = (CThostFtdcQryMDTraderOfferField *)calloc(1, sizeof(CThostFtdcQryMDTraderOfferField));
  memset(t,0,sizeof(CThostFtdcQryMDTraderOfferField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //交易所交易员代码
  strcpy(t->TraderID, PyString_AsString(PyObject_GetAttrString(p, "TraderID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//查询指定流水号的交易结果请求
PyObject * new_CThostFtdcReqQueryTradeResultBySerialField(CThostFtdcReqQueryTradeResultBySerialField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqQueryTradeResultBySerialField", (char*)"sssssssssisicssssccsisscds",
p->BrokerBranchID, p->BankPassWord, p->TradeTime, p->AccountID, p->BankAccount, p->CustomerName, p->TradeCode, p->BankBranchID, p->RefrenceIssure, p->SessionID, p->BankID, p->PlateSerial, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->TradingDay, p->BrokerID, p->RefrenceIssureType, p->IdCardType, p->Password, p->Reference, p->TradeDate, p->CurrencyID, p->LastFragment, p->TradeAmount, p->Digest);
}
CThostFtdcReqQueryTradeResultBySerialField * from_CThostFtdcReqQueryTradeResultBySerialField(PyObject * p){
  CThostFtdcReqQueryTradeResultBySerialField *t = (CThostFtdcReqQueryTradeResultBySerialField *)calloc(1, sizeof(CThostFtdcReqQueryTradeResultBySerialField));
  memset(t,0,sizeof(CThostFtdcReqQueryTradeResultBySerialField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//用户口令变更
PyObject * new_CThostFtdcUserPasswordUpdateField(CThostFtdcUserPasswordUpdateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserPasswordUpdateField", (char*)"ssss",
p->UserID, p->NewPassword, p->OldPassword, p->BrokerID);
}
CThostFtdcUserPasswordUpdateField * from_CThostFtdcUserPasswordUpdateField(PyObject * p){
  CThostFtdcUserPasswordUpdateField *t = (CThostFtdcUserPasswordUpdateField *)calloc(1, sizeof(CThostFtdcUserPasswordUpdateField));
  memset(t,0,sizeof(CThostFtdcUserPasswordUpdateField));
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

//查询账户信息通知
PyObject * new_CThostFtdcNotifyQueryAccountField(CThostFtdcNotifyQueryAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcNotifyQueryAccountField", (char*)"sssscississsissciicsssssssdcisssccicscsd",
p->BrokerBranchID, p->UserID, p->BankPassWord, p->TradeTime, p->VerifyCertNoFlag, p->TID, p->AccountID, p->BankAccount, p->InstallID, p->CustomerName, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->Password, p->BankPwdFlag, p->ErrorID, p->RequestID, p->CustType, p->IdentifiedCardNo, p->BankSerial, p->OperNo, p->TradingDay, p->BankSecuAcc, p->BrokerID, p->DeviceID, p->BankUseAmount, p->IdCardType, p->PlateSerial, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->BankAccType, p->LastFragment, p->FutureSerial, p->BankSecuAccType, p->BrokerIDByBank, p->SecuPwdFlag, p->Digest, p->BankFetchAmount);
}
CThostFtdcNotifyQueryAccountField * from_CThostFtdcNotifyQueryAccountField(PyObject * p){
  CThostFtdcNotifyQueryAccountField *t = (CThostFtdcNotifyQueryAccountField *)calloc(1, sizeof(CThostFtdcNotifyQueryAccountField));
  memset(t,0,sizeof(CThostFtdcNotifyQueryAccountField));
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
  //THOST_FTDC_ICT_TaxNo -> 'A', 税务登记号
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

//市场行情
PyObject * new_CThostFtdcMarketDataField(CThostFtdcMarketDataField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataField", (char*)"dddddsididsdssddddddsd",
p->HighestPrice, p->LowerLimitPrice, p->OpenPrice, p->PreClosePrice, p->PreSettlementPrice, p->UpdateTime, p->UpdateMillisec, p->PreOpenInterest, p->Volume, p->UpperLimitPrice, p->InstrumentID, p->ClosePrice, p->ExchangeID, p->TradingDay, p->PreDelta, p->OpenInterest, p->CurrDelta, p->Turnover, p->LastPrice, p->SettlementPrice, p->ExchangeInstID, p->LowestPrice);
}
CThostFtdcMarketDataField * from_CThostFtdcMarketDataField(PyObject * p){
  CThostFtdcMarketDataField *t = (CThostFtdcMarketDataField *)calloc(1, sizeof(CThostFtdcMarketDataField));
  memset(t,0,sizeof(CThostFtdcMarketDataField));
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

//仓单折抵信息
PyObject * new_CThostFtdcEWarrantOffsetField(CThostFtdcEWarrantOffsetField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcEWarrantOffsetField", (char*)"ssscciss",
p->InstrumentID, p->ExchangeID, p->InvestorID, p->HedgeFlag, p->Direction, p->Volume, p->TradingDay, p->BrokerID);
}
CThostFtdcEWarrantOffsetField * from_CThostFtdcEWarrantOffsetField(PyObject * p){
  CThostFtdcEWarrantOffsetField *t = (CThostFtdcEWarrantOffsetField *)calloc(1, sizeof(CThostFtdcEWarrantOffsetField));
  memset(t,0,sizeof(CThostFtdcEWarrantOffsetField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //数量
  t->Volume =   PyInt_AsLong(PyObject_GetAttrString(p, "Volume"));
  //交易日期
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//用户IP
PyObject * new_CThostFtdcUserIPField(CThostFtdcUserIPField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserIPField", (char*)"sssss",
p->MacAddress, p->UserID, p->IPMask, p->BrokerID, p->IPAddress);
}
CThostFtdcUserIPField * from_CThostFtdcUserIPField(PyObject * p){
  CThostFtdcUserIPField *t = (CThostFtdcUserIPField *)calloc(1, sizeof(CThostFtdcUserIPField));
  memset(t,0,sizeof(CThostFtdcUserIPField));
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

//查询经纪公司
PyObject * new_CThostFtdcQryBrokerField(CThostFtdcQryBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryBrokerField", (char*)"s",
p->BrokerID);
}
CThostFtdcQryBrokerField * from_CThostFtdcQryBrokerField(PyObject * p){
  CThostFtdcQryBrokerField *t = (CThostFtdcQryBrokerField *)calloc(1, sizeof(CThostFtdcQryBrokerField));
  memset(t,0,sizeof(CThostFtdcQryBrokerField));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//查询经纪公司会员代码
PyObject * new_CThostFtdcQryPartBrokerField(CThostFtdcQryPartBrokerField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryPartBrokerField", (char*)"sss",
p->ExchangeID, p->BrokerID, p->ParticipantID);
}
CThostFtdcQryPartBrokerField * from_CThostFtdcQryPartBrokerField(PyObject * p){
  CThostFtdcQryPartBrokerField *t = (CThostFtdcQryPartBrokerField *)calloc(1, sizeof(CThostFtdcQryPartBrokerField));
  memset(t,0,sizeof(CThostFtdcQryPartBrokerField));
  //交易所代码
  strcpy(t->ExchangeID, PyString_AsString(PyObject_GetAttrString(p, "ExchangeID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //会员代码
  strcpy(t->ParticipantID, PyString_AsString(PyObject_GetAttrString(p, "ParticipantID")));

  return t;
};

//结算引用
PyObject * new_CThostFtdcSettlementRefField(CThostFtdcSettlementRefField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSettlementRefField", (char*)"si",
p->TradingDay, p->SettlementID);
}
CThostFtdcSettlementRefField * from_CThostFtdcSettlementRefField(PyObject * p){
  CThostFtdcSettlementRefField *t = (CThostFtdcSettlementRefField *)calloc(1, sizeof(CThostFtdcSettlementRefField));
  memset(t,0,sizeof(CThostFtdcSettlementRefField));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));

  return t;
};

//期商签退请求
PyObject * new_CThostFtdcReqFutureSignOutField(CThostFtdcReqFutureSignOutField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqFutureSignOutField", (char*)"isscssssssissssisissi",
p->InstallID, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BrokerIDByBank, p->BankSerial, p->BankBranchID, p->OperNo, p->TradingDay, p->SessionID, p->BrokerID, p->DeviceID, p->UserID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->CurrencyID, p->Digest, p->RequestID);
}
CThostFtdcReqFutureSignOutField * from_CThostFtdcReqFutureSignOutField(PyObject * p){
  CThostFtdcReqFutureSignOutField *t = (CThostFtdcReqFutureSignOutField *)calloc(1, sizeof(CThostFtdcReqFutureSignOutField));
  memset(t,0,sizeof(CThostFtdcReqFutureSignOutField));
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

//期货资金转银行请求响应
PyObject * new_CThostFtdcTransferFutureToBankRspField(CThostFtdcTransferFutureToBankRspField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcTransferFutureToBankRspField", (char*)"sssdsd",
p->FutureAccount, p->RetCode, p->CurrencyCode, p->TradeAmt, p->RetInfo, p->CustFee);
}
CThostFtdcTransferFutureToBankRspField * from_CThostFtdcTransferFutureToBankRspField(PyObject * p){
  CThostFtdcTransferFutureToBankRspField *t = (CThostFtdcTransferFutureToBankRspField *)calloc(1, sizeof(CThostFtdcTransferFutureToBankRspField));
  memset(t,0,sizeof(CThostFtdcTransferFutureToBankRspField));
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

//查询组合合约分腿
PyObject * new_CThostFtdcQryCombinationLegField(CThostFtdcQryCombinationLegField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryCombinationLegField", (char*)"sis",
p->LegInstrumentID, p->LegID, p->CombInstrumentID);
}
CThostFtdcQryCombinationLegField * from_CThostFtdcQryCombinationLegField(PyObject * p){
  CThostFtdcQryCombinationLegField *t = (CThostFtdcQryCombinationLegField *)calloc(1, sizeof(CThostFtdcQryCombinationLegField));
  memset(t,0,sizeof(CThostFtdcQryCombinationLegField));
  //单腿合约代码
  strcpy(t->LegInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "LegInstrumentID")));
  //单腿编号
  t->LegID =   PyInt_AsLong(PyObject_GetAttrString(p, "LegID"));
  //组合合约代码
  strcpy(t->CombInstrumentID, PyString_AsString(PyObject_GetAttrString(p, "CombInstrumentID")));

  return t;
};

//交易所保证金率
PyObject * new_CThostFtdcExchangeMarginRateField(CThostFtdcExchangeMarginRateField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcExchangeMarginRateField", (char*)"sddcsdd",
p->InstrumentID, p->ShortMarginRatioByMoney, p->LongMarginRatioByMoney, p->HedgeFlag, p->BrokerID, p->ShortMarginRatioByVolume, p->LongMarginRatioByVolume);
}
CThostFtdcExchangeMarginRateField * from_CThostFtdcExchangeMarginRateField(PyObject * p){
  CThostFtdcExchangeMarginRateField *t = (CThostFtdcExchangeMarginRateField *)calloc(1, sizeof(CThostFtdcExchangeMarginRateField));
  memset(t,0,sizeof(CThostFtdcExchangeMarginRateField));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //空头保证金率
  t->ShortMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortMarginRatioByMoney"));
  //多头保证金率
  t->LongMarginRatioByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongMarginRatioByMoney"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
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

//日终文件就绪请求
PyObject * new_CThostFtdcReqDayEndFileReadyField(CThostFtdcReqDayEndFileReadyField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcReqDayEndFileReadyField", (char*)"csscssssisssis",
p->FileBusinessCode, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BankSerial, p->BankBranchID, p->TradingDay, p->SessionID, p->BrokerID, p->BankID, p->TradeTime, p->PlateSerial, p->Digest);
}
CThostFtdcReqDayEndFileReadyField * from_CThostFtdcReqDayEndFileReadyField(PyObject * p){
  CThostFtdcReqDayEndFileReadyField *t = (CThostFtdcReqDayEndFileReadyField *)calloc(1, sizeof(CThostFtdcReqDayEndFileReadyField));
  memset(t,0,sizeof(CThostFtdcReqDayEndFileReadyField));
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

//查询资金账户
PyObject * new_CThostFtdcQryTradingAccountField(CThostFtdcQryTradingAccountField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryTradingAccountField", (char*)"ss",
p->InvestorID, p->BrokerID);
}
CThostFtdcQryTradingAccountField * from_CThostFtdcQryTradingAccountField(PyObject * p){
  CThostFtdcQryTradingAccountField *t = (CThostFtdcQryTradingAccountField *)calloc(1, sizeof(CThostFtdcQryTradingAccountField));
  memset(t,0,sizeof(CThostFtdcQryTradingAccountField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));

  return t;
};

//用户权限
PyObject * new_CThostFtdcUserRightField(CThostFtdcUserRightField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcUserRightField", (char*)"cssi",
p->UserRightType, p->UserID, p->BrokerID, p->IsForbidden);
}
CThostFtdcUserRightField * from_CThostFtdcUserRightField(PyObject * p){
  CThostFtdcUserRightField *t = (CThostFtdcUserRightField *)calloc(1, sizeof(CThostFtdcUserRightField));
  memset(t,0,sizeof(CThostFtdcUserRightField));
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

//输入报单
PyObject * new_CThostFtdcInputOrderField(CThostFtdcInputOrderField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcInputOrderField", (char*)"cssdiciccidsicssssssci",
p->ContingentCondition, p->CombOffsetFlag, p->UserID, p->LimitPrice, p->UserForceClose, p->Direction, p->VolumeTotalOriginal, p->OrderPriceType, p->TimeCondition, p->IsAutoSuspend, p->StopPrice, p->InstrumentID, p->MinVolume, p->ForceCloseReason, p->BrokerID, p->CombHedgeFlag, p->GTDDate, p->BusinessUnit, p->OrderRef, p->InvestorID, p->VolumeCondition, p->RequestID);
}
CThostFtdcInputOrderField * from_CThostFtdcInputOrderField(PyObject * p){
  CThostFtdcInputOrderField *t = (CThostFtdcInputOrderField *)calloc(1, sizeof(CThostFtdcInputOrderField));
  memset(t,0,sizeof(CThostFtdcInputOrderField));
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
  t->LimitPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LimitPrice"));
  //用户强评标志
  t->UserForceClose =   PyInt_AsLong(PyObject_GetAttrString(p, "UserForceClose"));
  //买卖方向
  //enum类型
  //THOST_FTDC_D_Buy -> '0', 买
  //THOST_FTDC_D_Sell -> '1', 卖
  t->Direction =   PyString_AsString(PyObject_GetAttrString(p, "Direction"))[0];
  //数量
  t->VolumeTotalOriginal =   PyInt_AsLong(PyObject_GetAttrString(p, "VolumeTotalOriginal"));
  //报单价格条件
  //enum类型
  //THOST_FTDC_OPT_AskPrice1PlusTwoTicks -> 'A', 卖一价浮动上浮2个ticks
  //THOST_FTDC_OPT_LastPricePlusTwoTicks -> '6', 最新价浮动上浮2个ticks
  //THOST_FTDC_OPT_AskPrice1PlusOneTicks -> '9', 卖一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1 -> 'C', 买一价
  //THOST_FTDC_OPT_LimitPrice -> '2', 限价
  //THOST_FTDC_OPT_LastPricePlusOneTicks -> '5', 最新价浮动上浮1个ticks
  //THOST_FTDC_OPT_LastPrice -> '4', 最新价
  //THOST_FTDC_OPT_AskPrice1 -> '8', 卖一价
  //THOST_FTDC_OPT_AskPrice1PlusThreeTicks -> 'B', 卖一价浮动上浮3个ticks
  //THOST_FTDC_OPT_AnyPrice -> '1', 任意价
  //THOST_FTDC_OPT_BestPrice -> '3', 最优价
  //THOST_FTDC_OPT_LastPricePlusThreeTicks -> '7', 最新价浮动上浮3个ticks
  //THOST_FTDC_OPT_BidPrice1PlusOneTicks -> 'D', 买一价浮动上浮1个ticks
  //THOST_FTDC_OPT_BidPrice1PlusTwoTicks -> 'E', 买一价浮动上浮2个ticks
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
  //最小成交量
  t->MinVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "MinVolume"));
  //强平原因
  //enum类型
  //THOST_FTDC_FCC_PersonDeliv -> '7', 自然人临近交割
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

//验证期货资金密码
PyObject * new_CThostFtdcVerifyFuturePasswordField(CThostFtdcVerifyFuturePasswordField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcVerifyFuturePasswordField", (char*)"sssscsssssiissisis",
p->BankAccount, p->Password, p->TradeDate, p->TradeCode, p->LastFragment, p->BrokerBranchID, p->BankSerial, p->BankBranchID, p->BankPassWord, p->TradingDay, p->SessionID, p->InstallID, p->BrokerID, p->BankID, p->TID, p->TradeTime, p->PlateSerial, p->AccountID);
}
CThostFtdcVerifyFuturePasswordField * from_CThostFtdcVerifyFuturePasswordField(PyObject * p){
  CThostFtdcVerifyFuturePasswordField *t = (CThostFtdcVerifyFuturePasswordField *)calloc(1, sizeof(CThostFtdcVerifyFuturePasswordField));
  memset(t,0,sizeof(CThostFtdcVerifyFuturePasswordField));
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

//正在同步中的投资者持仓
PyObject * new_CThostFtdcSyncingInvestorPositionField(CThostFtdcSyncingInvestorPositionField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcSyncingInvestorPositionField", (char*)"ddcdddiddidcidiidscddiiiisdsdddididddsdd",
p->ShortFrozenAmount, p->FrozenMargin, p->HedgeFlag, p->PositionProfit, p->Commission, p->MarginRateByVolume, p->CombPosition, p->CashIn, p->PreSettlementPrice, p->CombLongFrozen, p->CloseAmount, p->PosiDirection, p->YdPosition, p->MarginRateByMoney, p->OpenVolume, p->CloseVolume, p->ExchangeMargin, p->InstrumentID, p->PositionDate, p->CloseProfitByTrade, p->PreMargin, p->SettlementID, p->ShortFrozen, p->LongFrozen, p->TodayPosition, p->TradingDay, p->PositionCost, p->BrokerID, p->FrozenCash, p->OpenAmount, p->OpenCost, p->Position, p->FrozenCommission, p->CombShortFrozen, p->CloseProfitByDate, p->SettlementPrice, p->LongFrozenAmount, p->InvestorID, p->CloseProfit, p->UseMargin);
}
CThostFtdcSyncingInvestorPositionField * from_CThostFtdcSyncingInvestorPositionField(PyObject * p){
  CThostFtdcSyncingInvestorPositionField *t = (CThostFtdcSyncingInvestorPositionField *)calloc(1, sizeof(CThostFtdcSyncingInvestorPositionField));
  memset(t,0,sizeof(CThostFtdcSyncingInvestorPositionField));
  //开仓冻结金额
  t->ShortFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ShortFrozenAmount"));
  //冻结的保证金
  t->FrozenMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenMargin"));
  //投机套保标志
  //enum类型
  //THOST_FTDC_HF_Speculation -> '1', 投机
  //THOST_FTDC_HF_Arbitrage -> '2', 套利
  //THOST_FTDC_HF_Hedge -> '3', 套保
  t->HedgeFlag =   PyString_AsString(PyObject_GetAttrString(p, "HedgeFlag"))[0];
  //持仓盈亏
  t->PositionProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PositionProfit"));
  //手续费
  t->Commission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "Commission"));
  //保证金率(按手数)
  t->MarginRateByVolume =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByVolume"));
  //组合成交形成的持仓
  t->CombPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "CombPosition"));
  //资金差额
  t->CashIn =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CashIn"));
  //上次结算价
  t->PreSettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreSettlementPrice"));
  //组合多头冻结
  t->CombLongFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombLongFrozen"));
  //平仓金额
  t->CloseAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseAmount"));
  //持仓多空方向
  //enum类型
  //THOST_FTDC_PD_Net -> '1', 净
  //THOST_FTDC_PD_Short -> '3', 空头
  //THOST_FTDC_PD_Long -> '2', 多头
  t->PosiDirection =   PyString_AsString(PyObject_GetAttrString(p, "PosiDirection"))[0];
  //上日持仓
  t->YdPosition =   PyInt_AsLong(PyObject_GetAttrString(p, "YdPosition"));
  //保证金率
  t->MarginRateByMoney =   PyFloat_AsDouble(PyObject_GetAttrString(p, "MarginRateByMoney"));
  //开仓量
  t->OpenVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "OpenVolume"));
  //平仓量
  t->CloseVolume =   PyInt_AsLong(PyObject_GetAttrString(p, "CloseVolume"));
  //交易所保证金
  t->ExchangeMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "ExchangeMargin"));
  //合约代码
  strcpy(t->InstrumentID, PyString_AsString(PyObject_GetAttrString(p, "InstrumentID")));
  //持仓日期
  //enum类型
  //THOST_FTDC_PSD_Today -> '1', 今日持仓
  //THOST_FTDC_PSD_History -> '2', 历史持仓
  t->PositionDate =   PyString_AsString(PyObject_GetAttrString(p, "PositionDate"))[0];
  //逐笔对冲平仓盈亏
  t->CloseProfitByTrade =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByTrade"));
  //上次占用的保证金
  t->PreMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "PreMargin"));
  //结算编号
  t->SettlementID =   PyInt_AsLong(PyObject_GetAttrString(p, "SettlementID"));
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
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //冻结的资金
  t->FrozenCash =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCash"));
  //开仓金额
  t->OpenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenAmount"));
  //开仓成本
  t->OpenCost =   PyFloat_AsDouble(PyObject_GetAttrString(p, "OpenCost"));
  //今日持仓
  t->Position =   PyInt_AsLong(PyObject_GetAttrString(p, "Position"));
  //冻结的手续费
  t->FrozenCommission =   PyFloat_AsDouble(PyObject_GetAttrString(p, "FrozenCommission"));
  //组合空头冻结
  t->CombShortFrozen =   PyInt_AsLong(PyObject_GetAttrString(p, "CombShortFrozen"));
  //逐日盯市平仓盈亏
  t->CloseProfitByDate =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfitByDate"));
  //本次结算价
  t->SettlementPrice =   PyFloat_AsDouble(PyObject_GetAttrString(p, "SettlementPrice"));
  //开仓冻结金额
  t->LongFrozenAmount =   PyFloat_AsDouble(PyObject_GetAttrString(p, "LongFrozenAmount"));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //平仓盈亏
  t->CloseProfit =   PyFloat_AsDouble(PyObject_GetAttrString(p, "CloseProfit"));
  //占用的保证金
  t->UseMargin =   PyFloat_AsDouble(PyObject_GetAttrString(p, "UseMargin"));

  return t;
};

//查询投资者结算结果
PyObject * new_CThostFtdcQrySettlementInfoField(CThostFtdcQrySettlementInfoField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQrySettlementInfoField", (char*)"sss",
p->InvestorID, p->BrokerID, p->TradingDay);
}
CThostFtdcQrySettlementInfoField * from_CThostFtdcQrySettlementInfoField(PyObject * p){
  CThostFtdcQrySettlementInfoField *t = (CThostFtdcQrySettlementInfoField *)calloc(1, sizeof(CThostFtdcQrySettlementInfoField));
  memset(t,0,sizeof(CThostFtdcQrySettlementInfoField));
  //投资者代码
  strcpy(t->InvestorID, PyString_AsString(PyObject_GetAttrString(p, "InvestorID")));
  //经纪公司代码
  strcpy(t->BrokerID, PyString_AsString(PyObject_GetAttrString(p, "BrokerID")));
  //交易日
  strcpy(t->TradingDay, PyString_AsString(PyObject_GetAttrString(p, "TradingDay")));

  return t;
};

//期商签到响应
PyObject * new_CThostFtdcRspFutureSignInField(CThostFtdcRspFutureSignInField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcRspFutureSignInField", (char*)"sssiisssissiissssssssciss",
p->BrokerBranchID, p->UserID, p->TradeTime, p->TID, p->InstallID, p->PinKey, p->TradeCode, p->BankBranchID, p->SessionID, p->BankID, p->MacKey, p->PlateSerial, p->ErrorID, p->BankSerial, p->OperNo, p->TradingDay, p->BrokerID, p->DeviceID, p->TradeDate, p->CurrencyID, p->ErrorMsg, p->LastFragment, p->RequestID, p->BrokerIDByBank, p->Digest);
}
CThostFtdcRspFutureSignInField * from_CThostFtdcRspFutureSignInField(PyObject * p){
  CThostFtdcRspFutureSignInField *t = (CThostFtdcRspFutureSignInField *)calloc(1, sizeof(CThostFtdcRspFutureSignInField));
  memset(t,0,sizeof(CThostFtdcRspFutureSignInField));
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

//查询合约
PyObject * new_CThostFtdcQryInstrumentField(CThostFtdcQryInstrumentField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcQryInstrumentField", (char*)"ssss",
p->InstrumentID, p->ExchangeID, p->ExchangeInstID, p->ProductID);
}
CThostFtdcQryInstrumentField * from_CThostFtdcQryInstrumentField(PyObject * p){
  CThostFtdcQryInstrumentField *t = (CThostFtdcQryInstrumentField *)calloc(1, sizeof(CThostFtdcQryInstrumentField));
  memset(t,0,sizeof(CThostFtdcQryInstrumentField));
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

//行情最优价属性
PyObject * new_CThostFtdcMarketDataBestPriceField(CThostFtdcMarketDataBestPriceField * p){
  if(p==NULL)
      return Py_None;
  return PyObject_CallMethod(mod, (char*)"CThostFtdcMarketDataBestPriceField", (char*)"iddi",
p->AskVolume1, p->BidPrice1, p->AskPrice1, p->BidVolume1);
}
CThostFtdcMarketDataBestPriceField * from_CThostFtdcMarketDataBestPriceField(PyObject * p){
  CThostFtdcMarketDataBestPriceField *t = (CThostFtdcMarketDataBestPriceField *)calloc(1, sizeof(CThostFtdcMarketDataBestPriceField));
  memset(t,0,sizeof(CThostFtdcMarketDataBestPriceField));
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
