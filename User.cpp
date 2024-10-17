#include "User.h"
#include <filesystem>
 namespace fs = std::filesystem;
bool User::WriteUserData( )
{
    string fileName = "users.txt";
    setPermission(fileName);
    ofstream file_writer(fileName);
    
     
    if (!file_writer.is_open()) {
        cout << "Could not open "<<fileName<< " file!" << endl;
        return false;
    }
   
     
   if ( file_writer << _name << ' '
        << _login << ' '
        << _pass  << endl)
       file_writer.close();
    return true;

}

bool User::ReadUserData( )
{
    string fileName = "users.txt";
    setPermission(fileName);
    ifstream file_reader(fileName);

    if (!file_reader.is_open()) {
        cout << "Could not open " << fileName << " file!" << endl;
        return false;
    }
    


    if (file_reader >> _name &&
        file_reader >> _login &&
        file_reader >> _pass)
        file_reader.close();
        return true;
}
void User::setPermission(string fileName)
{
   
    fs::permissions(
         fileName,
        fs::perms::group_all | fs::perms::others_all,
        fs::perm_options::remove);
    fs::permissions(
        fileName,
        fs::perms::owner_read |  fs::perms::owner_write,
        fs::perm_options::add
    );
}
string User::getName()
{
    return _name;
}
void User::setUser(string name, string login, string pass)
{
    _name = name;
    _login = login;
    _pass = pass;

}
void User::ShowResult(Message& m)
{
    cout << _name << ' '
        << _login << ' '
        << _pass << endl;
    m.getMass();
}