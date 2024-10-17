#include "Message.h"
bool Message::WriteMess()
{
    ofstream file_writer("Messages.txt");


    if (!file_writer.is_open()) {
        cout << "Could not open   file!" << '\n';
        return false;
    }


    file_writer << _text << ' '
        << _sender << ' '
        << _receiver << endl;
                return true;
}
bool Message::ReadMess()
{
    ifstream file_reader("Messages.txt");


    if (!file_reader.is_open()) {
        cout << "Could not open   file!" << '\n';
        return false;
    }


    file_reader >> _text &&
        file_reader >> _sender &&
        file_reader >> _receiver;

        return true;
}
void Message::getMass()
{
    cout << _sender << " -> " << _receiver << endl
        << _text << endl;
}