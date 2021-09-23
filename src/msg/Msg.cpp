#include "Msg.h"

#include <utility>


Msg::Msg() {
    messageList = vector<onebot::Message>();
}

Msg::~Msg() = default;

Msg operator+(const Msg &m1, const Msg &m2) {
    Msg m = Msg();
    m.messageList.insert(m.messageList.end(), m1.messageList.begin(), m1.messageList.end());
    m.messageList.insert(m.messageList.end(), m2.messageList.begin(), m2.messageList.end());
    return m;
}

At::At(int64 qq) {
    auto m = onebot::Message();
    m.set_type("at");
    (*m.mutable_data())["qq"] = to_string(qq);
    this->messageList.push_back(m);
}

Poke::Poke(int64 qq) {
    auto m = onebot::Message();
    m.set_type("poke");
    (*m.mutable_data())["qq"] = to_string(qq);
    this->messageList.push_back(m);
}

Text::Text(string text) {
    auto m = onebot::Message();
    m.set_type("text");
    (*m.mutable_data())["text"] = std::move(text);
    this->messageList.push_back(m);
}

Image::Image(string url) {
    auto m = onebot::Message();
    m.set_type("image");
    (*m.mutable_data())["url"] = std::move(url);
    this->messageList.push_back(m);
}

Face::Face(int id) {
    auto m = onebot::Message();
    m.set_type("face");
    (*m.mutable_data())["id"] = to_string(id);
    this->messageList.push_back(m);
}

AtAll::AtAll() {
    auto m = onebot::Message();
    m.set_type("at");
    (*m.mutable_data())["qq"] = "all";
    this->messageList.push_back(m);
}

Tts::Tts(string text) {
    auto m = onebot::Message();
    m.set_type("tts");
    (*m.mutable_data())["text"] = std::move(text);
    this->messageList.push_back(m);
}