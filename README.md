# Protobuf C++ SDK

使用C++开发 [ProtobufBot](https://github.com/protobufbot/protobufbot) QQ机器人，推荐配合 [GMC](https://github.com/protobufbot/go-Mirai-Client/releases) 使用

## 环境

- [drogon](https://github.com/an-tao/drogon)
- [protobuf](https://github.com/protocolbuffers/protobuf/tree/master/cmake)

推荐使用 [vcpkg](https://github.com/microsoft/vcpkg) 作为包管理工具

```shell
$ git clone https://github.com/microsoft/vcpkg
$ cd vcpkg
$ ./vcpkg/bootstrap-vcpkg.sh
$ ./vcpkg/vcpkg install protobuf
$ ./vcpkg/vcpkg install drogon
```

### Cmake

```shell
> cmake -B [build directory] -S . -DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake
> cmake --build [build directory]
```

## 开发

修改 [src/event_handler/event_handler.cpp](https://github.com/ProtobufBot/cpp-pbbot/blob/main/src/event_handler/event_handler.cpp)

如果有问题欢迎提issue和pr

## 流程介绍

1. 启动WebSocket Server

2. 接受binary消息，使用protobuf解析，开新线程，交给`event_handler.cpp`处理

3. 发送消息保存promise在map，接收到相同echo的response后 完成promise，继续处理
