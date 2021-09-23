#include "event_handler.h"

using namespace std;
using namespace google::protobuf;


namespace EventHandler {

    void handlePrivateMessageEvent(const shared_ptr<Bot> &bot,
                                   const PrivateMessageEvent &event) {
        auto resp = bot->sendPrivateMsg(875543533l, "1", false);
        cout << resp->message_id() << endl;
    }

    void handleGroupMessageEvent(const shared_ptr<Bot> &bot,
                                 const GroupMessageEvent &event) {
        // 如果消息内容是 "hi"，发送语音 "hello"，5秒后撤回
        if ("hi" == event.raw_message()) {
            auto msg = Tts("hello");
            auto resp = bot->sendGroupMsg(event.group_id(), msg, false);
            this_thread::sleep_for(5000ms);
            bot->deleteMsg(resp->message_id());
        }
    }

    void handleGroupUploadNoticeEvent(const shared_ptr<Bot> &bot,
                                      const GroupUploadNoticeEvent &event) {

    }

    void handleGroupAdminNoticeEvent(const shared_ptr<Bot> &bot,
                                     const GroupAdminNoticeEvent &event) {

    }

    void handleGroupDecreaseNoticeEvent(const shared_ptr<Bot> &bot,
                                        const GroupDecreaseNoticeEvent &event) {

    }

    void handleGroupIncreaseNoticeEvent(const shared_ptr<Bot> &bot,
                                        const GroupIncreaseNoticeEvent &event) {

    }

    void handleGroupBanNoticeEvent(const shared_ptr<Bot> &bot,
                                   const GroupBanNoticeEvent &event) {

    }

    void handleFriendAddNoticeEvent(const shared_ptr<Bot> &bot,
                                    const FriendAddNoticeEvent &event) {

    }

    void handleGroupRecallNoticeEvent(const shared_ptr<Bot> &bot,
                                      const GroupRecallNoticeEvent &event) {

    }

    void handleFriendRecallNoticeEvent(const shared_ptr<Bot> &bot,
                                       const FriendRecallNoticeEvent &event) {

    }

    void handleFriendRequestEvent(const shared_ptr<Bot> &bot,
                                  const FriendRequestEvent &event) {

    }

    void handleGroupRequestEvent(const shared_ptr<Bot> &bot,
                                 const GroupRequestEvent &event) {

    }

}