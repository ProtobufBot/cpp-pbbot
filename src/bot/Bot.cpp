#include "Bot.h"

#include <memory>
#include <utility>
#include <chrono>

using namespace std;
atomic_int32_t seq = 0;

Bot::Bot(const Bot &a) {
    this->conn = a.conn;
    this->selfId = a.selfId;
    this->promiseMap = a.promiseMap;
}

Bot::Bot(int64 selfId, WebSocketConnectionPtr connection) : conn(std::move(connection)) {
    this->selfId = selfId;
    this->promiseMap = make_shared<PromiseMap>(PromiseMap());
}

Bot::~Bot() {
    printf("~\n");
}

shared_ptr<onebot::Frame> Bot::sendAndWait(shared_ptr<onebot::Frame> reqFrame) {
    string echo = to_string(seq++);
    *reqFrame->mutable_echo() = echo;
    auto promisePtr = make_shared<promise<shared_ptr<onebot::Frame>>>();
    (*this->promiseMap)[echo] = promisePtr;
    auto reqData = reqFrame->SerializeAsString();
    conn_mtx.lock();
    this->conn->send(reqData, WebSocketMessageType::Binary);
    conn_mtx.unlock();
    auto respFuture = promisePtr->get_future();
    respFuture.wait_for(60000ms);
    this->promiseMap->erase(echo);
    return respFuture.get();
}

shared_ptr<SendPrivateMsgResp> Bot::sendPrivateMsg(int64 user_id, const string &message, bool auto_escape) {
    return sendPrivateMsg(user_id, Text(message), auto_escape);
}

shared_ptr<SendPrivateMsgResp> Bot::sendPrivateMsg(int64 user_id, const Msg &msg, bool auto_escape) {
    auto req = new SendPrivateMsgReq(); // 不用delete，frame自动delete
    req->set_user_id(user_id);
    req->set_auto_escape(auto_escape);
    *req->mutable_message() = {msg.messageList.begin(), msg.messageList.end()};

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSendPrivateMsgReq);
    reqFrame->set_allocated_send_private_msg_req(req);
    auto respFrame = sendAndWait(reqFrame);
    auto resp = make_shared<SendPrivateMsgResp>(respFrame->send_private_msg_resp());
    return resp;
}


shared_ptr<SendGroupMsgResp> Bot::sendGroupMsg(int64 group_id, const string &message, bool auto_escape) {
    return sendGroupMsg(group_id, Text(message), auto_escape);
}

shared_ptr<SendGroupMsgResp> Bot::sendGroupMsg(int64 group_id, const Msg &msg, bool auto_escape) {
    auto req = new SendGroupMsgReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_auto_escape(auto_escape);
    *req->mutable_message() = {msg.messageList.begin(), msg.messageList.end()};

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSendGroupMsgReq);
    reqFrame->set_allocated_send_group_msg_req(req);
    return make_shared<SendGroupMsgResp>(sendAndWait(reqFrame)->send_group_msg_resp());
}

shared_ptr<DeleteMsgResp> Bot::deleteMsg(int message_id) {
    auto req = new DeleteMsgReq(); // 不用delete，frame自动delete
    req->set_message_id(message_id);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TDeleteMsgReq);
    reqFrame->set_allocated_delete_msg_req(req);
    return make_shared<DeleteMsgResp>(sendAndWait(reqFrame)->delete_msg_resp());
}

shared_ptr<GetMsgResp> Bot::getMsg(int message_id) {
    auto req = new GetMsgReq(); // 不用delete，frame自动delete
    req->set_message_id(message_id);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetMsgReq);
    reqFrame->set_allocated_get_msg_req(req);
    return make_shared<GetMsgResp>(sendAndWait(reqFrame)->get_msg_resp());
}

shared_ptr<SetGroupKickResp> Bot::setGroupKick(int64 group_id, int64 user_id, bool reject_add_request) {
    auto req = new SetGroupKickReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_user_id(user_id);
    req->set_reject_add_request(reject_add_request);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSetGroupKickReq);
    reqFrame->set_allocated_set_group_kick_req(req);
    return make_shared<SetGroupKickResp>(sendAndWait(reqFrame)->set_group_kick_resp());
}

shared_ptr<SetGroupBanResp> Bot::setGroupBan(int64 group_id, int64 user_id, int duration) {
    auto req = new SetGroupBanReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_user_id(user_id);
    req->set_duration(duration);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSetGroupBanReq);
    reqFrame->set_allocated_set_group_ban_req(req);
    return make_shared<SetGroupBanResp>(sendAndWait(reqFrame)->set_group_ban_resp());
}

shared_ptr<SetGroupWholeBanResp> Bot::setGroupWholeBan(int64 group_id, bool enable) {
    auto req = new SetGroupWholeBanReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_enable(enable);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSetGroupWholeBanReq);
    reqFrame->set_allocated_set_group_whole_ban_req(req);
    return make_shared<SetGroupWholeBanResp>(sendAndWait(reqFrame)->set_group_whole_ban_resp());
}

shared_ptr<SetGroupCardResp> Bot::setGroupCard(int64 group_id, int64 user_id, string card) {
    auto req = new SetGroupCardReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_user_id(user_id);
    req->set_card(card);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSetGroupCardReq);
    reqFrame->set_allocated_set_group_card_req(req);
    return make_shared<SetGroupCardResp>(sendAndWait(reqFrame)->set_group_card_resp());
}

shared_ptr<SetGroupLeaveResp> Bot::setGroupLeave(int64 group_id, bool is_dismiss) {
    auto req = new SetGroupLeaveReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_is_dismiss(is_dismiss);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSetGroupLeaveReq);
    reqFrame->set_allocated_set_group_leave_req(req);
    return make_shared<SetGroupLeaveResp>(sendAndWait(reqFrame)->set_group_leave_resp());
}

shared_ptr<SetFriendAddRequestResp> Bot::setFriendAddRequest(string flag, bool approve, string remark) {
    auto req = new SetFriendAddRequestReq(); // 不用delete，frame自动delete
    req->set_flag(flag);
    req->set_approve(approve);
    req->set_remark(remark);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TSetFriendAddRequestReq);
    reqFrame->set_allocated_set_friend_add_request_req(req);
    return make_shared<SetFriendAddRequestResp>(sendAndWait(reqFrame)->set_friend_add_request_resp());
}

shared_ptr<GetLoginInfoResp> Bot::getLoginInfo() {
    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetLoginInfoReq);
    reqFrame->set_allocated_get_login_info_req(new GetLoginInfoReq());
    return make_shared<GetLoginInfoResp>(sendAndWait(reqFrame)->get_login_info_resp());
}

shared_ptr<GetStrangerInfoResp> Bot::getStrangerInfo(int64 user_id) {
    auto req = new GetStrangerInfoReq(); // 不用delete，frame自动delete
    req->set_user_id(user_id);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetStrangerInfoReq);
    reqFrame->set_allocated_get_stranger_info_req(req);
    return make_shared<GetStrangerInfoResp>(sendAndWait(reqFrame)->get_stranger_info_resp());
}

shared_ptr<GetFriendListResp> Bot::getFriendList() {
    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetFriendListReq);
    reqFrame->set_allocated_get_friend_list_req(new GetFriendListReq());
    return make_shared<GetFriendListResp>(sendAndWait(reqFrame)->get_friend_list_resp());
}

shared_ptr<GetGroupListResp> Bot::getGroupList() {
    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetGroupListReq);
    reqFrame->set_allocated_get_group_list_req(new GetGroupListReq());
    return make_shared<GetGroupListResp>(sendAndWait(reqFrame)->get_group_list_resp());
}

shared_ptr<GetGroupInfoResp> Bot::getGroupInfo(int64 group_id, bool no_cache) {
    auto req = new GetGroupInfoReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_no_cache(no_cache);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetGroupInfoReq);
    reqFrame->set_allocated_get_group_info_req(req);
    return make_shared<GetGroupInfoResp>(sendAndWait(reqFrame)->get_group_info_resp());
}

shared_ptr<GetGroupMemberInfoResp> Bot::getGroupMemberInfo(int64 group_id, int64 user_id, bool no_cache) {
    auto req = new GetGroupMemberInfoReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);
    req->set_user_id(user_id);
    req->set_no_cache(no_cache);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetGroupMemberInfoReq);
    reqFrame->set_allocated_get_group_member_info_req(req);
    return make_shared<GetGroupMemberInfoResp>(sendAndWait(reqFrame)->get_group_member_info_resp());
}

shared_ptr<GetGroupMemberListResp> Bot::getGroupMemberList(int64 group_id) {
    auto req = new GetGroupMemberListReq(); // 不用delete，frame自动delete
    req->set_group_id(group_id);

    auto reqFrame = make_shared<onebot::Frame>(onebot::Frame());
    reqFrame->set_frame_type(Frame_FrameType_TGetGroupMemberListReq);
    reqFrame->set_allocated_get_group_member_list_req(req);
    return make_shared<GetGroupMemberListResp>(sendAndWait(reqFrame)->get_group_member_list_resp());
}
