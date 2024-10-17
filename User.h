#pragma once
#include <fstream>
#include <iostream>

#include "Message.h"

 

using namespace std;
//namespace fs =  filesystem;
class User {
    string _name;
    string _login;
    string _pass;

    void setPermission(string fileName);
public:
	User(string name, string login, string pass) :_name(name), _login(login), _pass(pass) {};
	 
	bool WriteUserData( );
	bool ReadUserData( );
	string getName();
	void setUser(string name, string login, string pass);
	void ShowResult(Message& m);
};


 

 


 