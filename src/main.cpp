#include <iostream>
#include <drogon/HttpAppFramework.h>
#include "ws/WebSocketHandler.h"

using namespace std;

int main() {
    cout << "Waiting for Go-Mirai-Client to connect. (https://github.com/ProtobufBot/Go-Mirai-Client/releases)" << endl;
    drogon::app()
            .addListener("0.0.0.0", 8081)
            .run();
    return 0;
}
