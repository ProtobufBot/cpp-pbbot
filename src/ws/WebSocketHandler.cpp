#include "WebSocketHandler.h"
#include "map"
#include "../../idl/onebot_frame.pb.h"
#include "../event_handler/event_handler.h"

using namespace std;
using namespace google::protobuf;
using namespace onebot;
using namespace EventHandler;

map<int64, shared_ptr<Bot>> botMap;

void WebSocketHandler::handleNewMessage(const WebSocketConnectionPtr &wsConnPtr,
                                        std::string &&message,
                                        const WebSocketMessageType &msgType) {
    int64 botId = wsConnPtr->getContext<int64>().operator*();
    if (botId == 0) {
        return;
    }
    if (msgType != WebSocketMessageType::Binary) {
        return;
    }
    // TODO 使用线程池或者协程
    thread t([=]() {
        auto frame = make_shared<onebot::Frame>(onebot::Frame());
        frame->ParseFromString(message);
        auto bot = botMap[botId];
        try {
            switch (frame->data_case()) {
                case Frame::DataCase::kPrivateMessageEvent:
                    handlePrivateMessageEvent(bot, frame->private_message_event());
                    break;
                case Frame::DataCase::kGroupMessageEvent:
                    handleGroupMessageEvent(bot, frame->group_message_event());
                    break;
                case Frame::DataCase::kGroupUploadNoticeEvent:
                    handleGroupUploadNoticeEvent(bot, frame->group_upload_notice_event());
                    break;
                case Frame::DataCase::kGroupAdminNoticeEvent:
                    handleGroupAdminNoticeEvent(bot, frame->group_admin_notice_event());
                    break;
                case Frame::DataCase::kGroupDecreaseNoticeEvent:
                    handleGroupDecreaseNoticeEvent(bot, frame->group_decrease_notice_event());
                    break;
                case Frame::DataCase::kGroupIncreaseNoticeEvent:
                    handleGroupIncreaseNoticeEvent(bot, frame->group_increase_notice_event());
                    break;
                case Frame::DataCase::kGroupBanNoticeEvent:
                    handleGroupBanNoticeEvent(bot, frame->group_ban_notice_event());
                    break;
                case Frame::DataCase::kFriendAddNoticeEvent:
                    handleFriendAddNoticeEvent(bot, frame->friend_add_notice_event());
                    break;
                case Frame::DataCase::kGroupRecallNoticeEvent:
                    handleGroupRecallNoticeEvent(bot, frame->group_recall_notice_event());
                    break;
                case Frame::DataCase::kFriendRecallNoticeEvent:
                    handleFriendRecallNoticeEvent(bot, frame->friend_recall_notice_event());
                    break;
                case Frame::DataCase::kFriendRequestEvent:
                    handleFriendRequestEvent(bot, frame->friend_request_event());
                    break;
                case Frame::DataCase::kGroupRequestEvent:
                    handleGroupRequestEvent(bot, frame->group_request_event());
                    break;
                default:
                    auto echo = frame->echo();
                    cout << "api resp" << endl;
                    cout << "echo: " << echo << endl;
                    if (!bot->promiseMap->contains(echo)) {
                        cout << "not found" << endl;
                        return;
                    }
                    cout << "promise found" << endl;
                    auto prom = bot->promiseMap->find(frame->echo())->second;
                    prom->set_value(frame);
            }
        } catch (...) {
            cout << "failed to handle message" << endl;
        }
    });
    t.detach();

    cout << "start" << endl;

}

void WebSocketHandler::handleNewConnection(const HttpRequestPtr &req, const WebSocketConnectionPtr &wsConnPtr) {
    string xSelfId = req->getHeader("x-self-id");
    int64 botId = 0;
    try {
        botId = stoll(xSelfId);
    } catch (...) {
        cout << "error" << endl;
        return;
    }
    cout << "connect: " << botId << endl;

    wsConnPtr->setContext(std::make_shared<int64>(botId));

    auto bot = make_shared<Bot>(Bot(botId, wsConnPtr));
    botMap[botId] = bot;
}

void WebSocketHandler::handleConnectionClosed(const WebSocketConnectionPtr &wsConnPtr) {
    int64 botId = wsConnPtr->getContext<int64>().operator*();
    if (botId == 0) {
        return;
    }
    botMap.erase(botId);
    cout << "disconnect: " << botId << endl;
}
