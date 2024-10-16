#pragma once
 #include <fstream>
 #include <iostream>
using namespace std;

class Message {
    string _text;
    string _sender;
    string _receiver;
public:
    Message(string text, string sender, string receiver) :_text(text), _sender(sender), _receiver(receiver) {};
    bool WriteMess();
    bool ReadMess();
    void getMass();
};