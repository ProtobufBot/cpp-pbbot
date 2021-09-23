#pragma once

#include <drogon/WebSocketController.h>
#include <google/protobuf/any.h>

using namespace drogon;
using namespace google::protobuf;

class WebSocketHandler : public drogon::WebSocketController<WebSocketHandler> {
public:
    void handleNewMessage(const WebSocketConnectionPtr &,
                          std::string &&,
                          const WebSocketMessageType &) override;


    void handleNewConnection(const HttpRequestPtr &,
                             const WebSocketConnectionPtr &) override;

    void handleConnectionClosed(const WebSocketConnectionPtr &) override;

    static void initPathRouting() {
        registerSelf__("/ws/cq/", {});
    }
};