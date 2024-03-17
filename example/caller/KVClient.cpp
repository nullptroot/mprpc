#include "kv.pb.h"
#include "logger.h"
#include "mprpcapplication.h"
#include <iostream>

void insertKV(fixbug::KVServerRPC_Stub &stub,fixbug::InsertRequest &request,
                fixbug::ResultCode &response,RpcController &controller,
                int key,const char *value)
{
  // fixbug::InsertRequest request;
  auto kvPair = request.mutable_kvpair();
  kvPair->set_key(key);
  kvPair->set_value(value);
  // rpc 方法的响应，调用方只需要传参
  // fixbug::ResultCode response;
  // 控制信息对象
  // RpcController controller;
  // Login 会调用 MprpcChannel::callMethod，同步的 rpc 调用过程
  stub.InsertKeyValue(&controller, &request, &response, nullptr);
  if (controller.Failed()) 
    std::cout << controller.ErrorText() << '\n';
  else 
  {
    // 一次 rpc 调用完成，读取 response 结果，返回值的意义由用户设定
    if (0 == response.errcode()) 
      std::cout << "rpc InsertKeyValue success!\n";
    else 
      std::cout << "rpc InsertKeyValue error: " << response.errmsg() << '\n';
  }
}
void searchKV(fixbug::KVServerRPC_Stub &stub,fixbug::SearchOrDeleteRequest &request,
                fixbug::SearchResponse &response,RpcController &controller,
                int key)
{
  request.set_key(key);
  stub.SearchKeyValue(&controller, &request, &response, nullptr);
  if (controller.Failed())
    std::cout << controller.ErrorText() << '\n';
  else 
  {
    // 一次 rpc 调用完成，读取 response 结果，返回值的意义由用户设定
    if (0 == response.result().errcode()) 
    {
      std::cout << "rpc SearchKeyValue success!\n";
      std::cout << "key: "<<response.kvpair().key()<<" value :"<<response.kvpair().value()<<std::endl;
    } 
    else 
      std::cout << "rpc SearchKeyValue error: " << response.result().errmsg()<<std::endl;
  }
}

void showAllKV(fixbug::KVServerRPC_Stub &stub,const google::protobuf::Empty & request,
                              ::fixbug::ShowAllResponse &response,RpcController &controller)
{
  stub.ShowAllKeyValue(&controller,&request,&response,nullptr);
  if (controller.Failed()) 
    std::cout << controller.ErrorText() << '\n';
  else 
  {
    int n = response.allkvpair_size();
    for(int i = 0; i < n; ++i)
    {
      std::cout << "rpc ShowAllKeyValue success!\n";
      std::cout<<"key: "<<response.allkvpair(i).key()<<" value: "<<response.allkvpair(i).value()<<std::endl;
    }
  }
}

void deleteKey(fixbug::KVServerRPC_Stub &stub,RpcController &controller,
                              ::fixbug::SearchOrDeleteRequest &request,
                              ::fixbug::ResultCode &response,int key)
{
  request.set_key(key);
  stub.DeleteKeyValue(&controller,&request,&response,nullptr);
  if (controller.Failed()) 
    std::cout << controller.ErrorText() << '\n';
  else
  {
    if (0 == response.errcode()) 
      std::cout << "rpc DeleteKeyValue success!\n";
    else
      std::cout << "rpc DeleteKeyValue error: " << response.errmsg()<<std::endl;
  }
}

int main(int argc, char **argv) 
{
  LOG_DEBUG("this is a debug!");
  LOG_INFO("this is a info!");
  LOG_ERROR("this is a error!");
  LOG_FATAL("this is a fatal!");
  // 整个程序启动以后，想使用框架享受 rpc
  // 服务调用，一定需要先调用框架的初始化函数(只初始化一次)
  MprpcApplication::Init(argc, argv);

  // 调用远程发布的 rpc 方法，必须传入一个 ::google::protobuf::RpcChannel* 来构造代理对象
  fixbug::KVServerRPC_Stub stub(new MprpcChannel());
  // 调用 rpc 方法，实际上是调用 RpcChannel::callMethod，集中来做 rpc
  // 方法的参数序列化和网络发送 初始化 rpc 方法的请求参数
  fixbug::InsertRequest request;
  
  // rpc 方法的响应，调用方只需要传参
  fixbug::ResultCode response;
  // 控制信息对象
  RpcController controller;
  // Login 会调用 MprpcChannel::callMethod，同步的 rpc 调用过程
  insertKV(stub,request,response,controller,1,"test kv server 1");
  insertKV(stub,request,response,controller,6,"test kv server 6");
  insertKV(stub,request,response,controller,4,"test kv server 4");
  insertKV(stub,request,response,controller,8,"test kv server 8");

  fixbug::SearchOrDeleteRequest searchReq;
  fixbug::SearchResponse searchRes;
  searchKV(stub,searchReq,searchRes,controller,6);
  searchKV(stub,searchReq,searchRes,controller,4);
  searchKV(stub,searchReq,searchRes,controller,2);
  searchKV(stub,searchReq,searchRes,controller,1);
  searchKV(stub,searchReq,searchRes,controller,8);
  
  fixbug::ShowAllResponse showRes;
  google::protobuf::Empty empty;
  showAllKV(stub,empty,showRes,controller);

  deleteKey(stub,controller,searchReq,response,6);
  deleteKey(stub,controller,searchReq,response,1);
  showAllKV(stub,empty,showRes,controller);
  
  
  std::cout<<"finish : !!! log has bugs\n";
  return 0;
}
