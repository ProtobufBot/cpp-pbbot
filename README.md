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

## 支持的类型

### Event（被动接受）

代码在 [event_handler.cpp](https://github.com/ProtobufBot/cpp-pbbot/blob/main/src/event_handler/event_handler.cpp)，建议直接基于这个修改

- [x] 私聊消息 handlePrivateMessageEvent
- [x] 群聊消息 handleGroupMessageEvent
- [x] 群文件上传通知 handleGroupUploadNoticeEvent
- [x] 管理员变动通知 handleGroupAdminNoticeEvent
- [x] 群成员减少通知 handleGroupDecreaseNoticeEvent
- [x] 群成员增加通知 handleGroupIncreaseNoticeEvent
- [x] 群成员被禁言通知 handleGroupBanNoticeEvent
- [x] 好友已添加通知 handleFriendAddNoticeEvent
- [x] 群消息撤回通知 handleGroupRecallNoticeEvent
- [x] 好友撤回通知 handleFriendRecallNoticeEvent
- [x] 加好友请求 handleFriendRequestEvent
- [x] 加群请求 handleGroupRequestEvent

### API（主动执行）

代码在 [Bot.cpp](https://github.com/ProtobufBot/cpp-pbbot/blob/main/src/bot/Bot.cpp)

- [x] 发送私聊消息 sendPrivateMsg
- [x] 发送群消息 sendGroupMsg
- [x] 撤回消息 deleteMsg
- [x] 群踢人 setGroupKick
- [x] 群禁言 setGroupBan
- [x] 全群禁言 setGroupWholeBan
- [x] 设置成员名片 setGroupCard
- [x] 退群 setGroupLeave
- [x] 处理加好友请求 setFriendAddRequest
- [x] 处理加群请求 setGroupAddRequest
- [x] 获取好友列表 getFriendList
- [x] 获取陌生人信息 getStrangerInfo
- [x] 获取群列表 getGroupList
- [x] 获取群信息 getGroupInfo
- [x] 获取群成员信息 getGroupMemberInfo
- [x] 获取群成员列表 getGroupMemberList
