#include "test.h"

void test_md(void){
  //初始化UserApi
  CThostFtdcMdApi* pUserApi=CThostFtdcMdApi::CreateFtdcMdApi();
  CtpMdSpi* pUserSpi=new CtpMdSpi(pUserApi); //创建回调处理类对象MdSpi
  pUserApi->RegisterSpi(pUserSpi);			// 回调对象注入接口类
  pUserApi->RegisterFront(mdFront);		  // 注册行情前置地址

  pUserApi->Init();      //接口线程启动, 开始工作
  ShowMdCommand(pUserSpi,true); 
  pUserApi->Join();      //等待接口线程退出
  //pUserApi->Release(); //接口对象释放
}

void test_order(void)
{
  //初始化UserApi
  CThostFtdcTraderApi* pUserApi = CThostFtdcTraderApi::CreateFtdcTraderApi();
  CtpTraderSpi* pUserSpi = new CtpTraderSpi(pUserApi);
  pUserApi->RegisterSpi((CThostFtdcTraderSpi*)pUserSpi);			// 注册事件类
  pUserApi->SubscribePublicTopic(THOST_TERT_RESTART);					// 注册公有流
  pUserApi->SubscribePrivateTopic(THOST_TERT_RESTART);			  // 注册私有流
  pUserApi->RegisterFront(tradeFront);							// 注册交易前置地址
  
  pUserApi->Init();
  ShowTraderCommand(pUserSpi,true); 
  pUserApi->Join();  
  //pUserApi->Release();
}

void test_risk()
{
  //CShfeFtdcRiskUserApi* pUserApi=CShfeFtdcRiskUserApi::CreateFtdcRiskUserApi();	
  //CtpRiskSpi* pUserSpi=new CtpRiskSpi(pUserApi);	
  //pUserApi->RegisterSpi(pUserSpi);
  //pUserApi->RegisterFront(riskFront);
  //
  //pUserApi->Init(); 
  //ShowRiskCommand(pUserSpi,true); 
  //pUserApi->Join();
  //pUserApi->Release();
}

int main(int argc, const char* argv[]){
  if(argc < 2)  cerr<<"格式: 命令 参数, 输入有误."<<endl;  
  else if(strcmp(argv[1],"--md")==0)    test_md();
  else if(strcmp(argv[1],"--order")==0) test_order();
  else if(strcmp(argv[1],"--risk")==0)  test_risk();

  return 0;
}
