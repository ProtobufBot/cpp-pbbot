#pragma once

#include <drogon/WebSocketController.h>
#include "../../idl/onebot_frame.pb.h"
#include "../../idl/onebot_event.pb.h"
#include "../bot/Bot.h"

using namespace std;
using namespace onebot;
using namespace drogon;
using namespace google::protobuf;

namespace EventHandler {
    void handlePrivateMessageEvent(const shared_ptr<Bot>& bot,
                                   const PrivateMessageEvent &event);

    void handleGroupMessageEvent(const shared_ptr<Bot> &bot,
                                 const GroupMessageEvent &event);

    void handleGroupUploadNoticeEvent(const shared_ptr<Bot> &bot,
                                      const GroupUploadNoticeEvent &event);

    void handleGroupAdminNoticeEvent(const shared_ptr<Bot> &bot,
                                     const GroupAdminNoticeEvent &event);

    void handleGroupDecreaseNoticeEvent(const shared_ptr<Bot> &bot,
                                        const GroupDecreaseNoticeEvent &event);

    void handleGroupIncreaseNoticeEvent(const shared_ptr<Bot> &bot,
                                        const GroupIncreaseNoticeEvent &event);

    void handleGroupBanNoticeEvent(const shared_ptr<Bot> &bot,
                                   const GroupBanNoticeEvent &event);

    void handleFriendAddNoticeEvent(const shared_ptr<Bot> &bot,
                                    const FriendAddNoticeEvent &event);

    void handleGroupRecallNoticeEvent(const shared_ptr<Bot> &bot,
                                      const GroupRecallNoticeEvent &event);

    void handleFriendRecallNoticeEvent(const shared_ptr<Bot> &bot,
                                       const FriendRecallNoticeEvent &event);

    void handleFriendRequestEvent(const shared_ptr<Bot> &bot,
                                  const FriendRequestEvent &event);

    void handleGroupRequestEvent(const shared_ptr<Bot> &bot,
                                 const GroupRequestEvent &event);
}

