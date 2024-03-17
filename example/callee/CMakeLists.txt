set(SRC KVService.cpp ../kv.pb.cc)

add_executable(KvServer ${SRC})
target_link_libraries(KvServer mprpc protobuf)