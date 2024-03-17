set(SRC KVClient.cpp ../kv.pb.cc)

add_executable(client ${SRC})
target_link_libraries(client mprpc protobuf)