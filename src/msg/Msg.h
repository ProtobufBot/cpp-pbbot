#pragma once

#include <string>
#include "../../idl/onebot_base.pb.h"

using namespace onebot;

using namespace std;
using namespace google::protobuf;

class Msg {
public:
    vector<onebot::Message> messageList;

    Msg();

    ~Msg();

    friend Msg operator+(const Msg &m1, const Msg &m2);
};

class At : public Msg {
public:
    At(int64 qq);
};

class Poke : public Msg {
public:
    Poke(int64 qq);
};

class Text : public Msg {
public:
    Text(string text);
};

class Image : public Msg {
public:
    Image(string url);
};

class Face : public Msg {
public:
    Face(int id);
};


class AtAll : public Msg {
public:
    AtAll();
};


class Tts : public Msg {
public:
    Tts(string text);
};