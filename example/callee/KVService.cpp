#include <iostream>
#include <string>
#include <vector>

#include "kv.pb.h"
#include "mprpcapplication.h"
#include "mprpcprovider.h"
#include "logger.h"
#include "skiplist.h"

class KVService : public fixbug::KVServerRPC {
private:
  SkipList<int, std::string> skipList;
public:
  KVService(int skipListLevel):skipList(skipListLevel){};
  virtual void InsertKeyValue(::google::protobuf::RpcController* controller,
                       const ::fixbug::InsertRequest* request,
                       ::fixbug::ResultCode* response,
                       ::google::protobuf::Closure* done)
  {
    int key = request->kvpair().key();
    std::string value = request->kvpair().value();
    int ret = skipList.insert_element(key,std::move(value));
    response->set_errcode(ret);
    if(ret == 0)
      response->set_errmsg("success! : key has inserted\n");
    else
      response->set_errmsg("error! : key has existed\n");
    done->Run();
  }
  virtual void SearchKeyValue(::google::protobuf::RpcController* controller,
                       const ::fixbug::SearchOrDeleteRequest* request,
                       ::fixbug::SearchResponse* response,
                       ::google::protobuf::Closure* done)
  {
    int key = request->key();
    std::string value = skipList.search_element(key);
    auto result = response->mutable_result();
    auto kvPair = response->mutable_kvpair();
    if(value.empty())
    {
      
      result->set_errcode(1);
      result->set_errmsg("error! : key is not exist\n");
      kvPair->set_key(key);
      kvPair->set_value("");
    }
    else
    {
      result->set_errcode(0);
      result->set_errmsg("success! : key is exist\n");
      kvPair->set_key(key);
      kvPair->set_value(std::move(value));
    }
    done->Run();
  }
  virtual void DeleteKeyValue(::google::protobuf::RpcController* controller,
                       const ::fixbug::SearchOrDeleteRequest* request,
                       ::fixbug::ResultCode* response,
                       ::google::protobuf::Closure* done)
  {
    int key = request->key();
    skipList.delete_element(key);
    response->set_errcode(0);
    response->set_errmsg("success! : deleted\n");
    done->Run();
  }
  virtual void ShowAllKeyValue(::google::protobuf::RpcController* controller,
                       const ::google::protobuf::Empty* request,
                       ::fixbug::ShowAllResponse* response,
                       ::google::protobuf::Closure* done)
  {
    auto result = response->mutable_result();
    result->set_errcode(0);
    result->set_errmsg("order all key value\n");
    skipList.show_all_key_value(response);
    done->Run();
  }
};

int main(int argc, char **argv) 
{
  LOG_DEBUG("this is a debug!");
  LOG_INFO("this is a info!");
  LOG_ERROR("this is a error!");
  LOG_FATAL("this is a fatal!");
  // 调用框架的初始化操作
  MprpcApplication::Init(argc, argv);

  // provider是一个rpc网络服务对象。把UserService对象发布到rpc节点上
  MprpcProvider provider;
  provider.NotifyService(new KVService(6));

  // 启动一个rpc服务发布节点   Run以后，进程进入阻塞状态，等待远程的rpc调用请求
  provider.Run();
  return 0;
}