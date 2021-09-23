#pragma once

#include "../../idl/onebot_api.pb.h"
#include "../../idl/onebot_frame.pb.h"
#include "drogon/WebSocketController.h"
#include "../msg/Msg.h"

using namespace onebot;
using namespace std;
using namespace google::protobuf;
using namespace drogon;
typedef map<string, shared_ptr<promise<shared_ptr<onebot::Frame>>>> PromiseMap;

class Bot {
public:
    int64 selfId;
    WebSocketConnectionPtr conn;
    shared_ptr<PromiseMap> promiseMap;

    Bot(const Bot &a);

    Bot(int64, WebSocketConnectionPtr conn);

    ~Bot();

    shared_ptr<onebot::Frame> sendAndWait(shared_ptr<onebot::Frame>);

    shared_ptr<SendPrivateMsgResp> sendPrivateMsg(int64 user_id, const string &message, bool auto_escape = false);

    shared_ptr<SendPrivateMsgResp> sendPrivateMsg(int64 user_id, const Msg &msg, bool auto_escape = false);

    shared_ptr<SendGroupMsgResp> sendGroupMsg(int64 group_id, const string &message, bool auto_escape);

    shared_ptr<SendGroupMsgResp> sendGroupMsg(int64 group_id, const Msg &msg, bool auto_escape);

    shared_ptr<DeleteMsgResp> deleteMsg(int message_id);

    shared_ptr<GetMsgResp> getMsg(int message_id);

    shared_ptr<SetGroupKickResp> setGroupKick(int64 group_id, int64 user_id, bool reject_add_request);

    shared_ptr<SetGroupBanResp> setGroupBan(int64 group_id, int64 user_id, int duration);

    shared_ptr<SetGroupWholeBanResp> setGroupWholeBan(int64 group_id, bool enable);

    shared_ptr<SetGroupCardResp> setGroupCard(int64 group_id, int64 user_id, string card);

    shared_ptr<SetGroupLeaveResp> setGroupLeave(int64 group_id, bool is_dismiss);

    shared_ptr<SetFriendAddRequestResp> setFriendAddRequest(string flag, bool approve, string remark);

    shared_ptr<GetLoginInfoResp> getLoginInfo();

    shared_ptr<GetStrangerInfoResp> getStrangerInfo(int64 user_id);

    shared_ptr<GetFriendListResp> getFriendList();

    shared_ptr<GetGroupListResp> getGroupList();

    shared_ptr<GetGroupInfoResp> getGroupInfo(int64 group_id, bool no_cache);

    shared_ptr<GetGroupMemberInfoResp> getGroupMemberInfo(int64 group_id, int64 user_id, bool no_cache);

    shared_ptr<GetGroupMemberListResp> getGroupMemberList(int64 group_id);

private:
    mutex conn_mtx;
};


