// 18.12.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <filesystem>
#include <iostream>
#include "User.h"
#include "Message.h"

int main()
{
    
    User user1("", "", "");
    User user2("Ivan", "Ivan", "123");
    
    if(!user1.ReadUserData())
    { 
        user1.setUser ("Oleg", "OlegG", "123");
        user1.WriteUserData();
    }
    
        Message m("Proba_pera", user1.getName(), user2.getName());
        m.WriteMess();
        m.ReadMess();
        user1.ShowResult(m);
        return 0;
}

