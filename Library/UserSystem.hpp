#include <iostream>

#include <string>
#include<Vector>
using namespace std;
class User {
public:
    int Id;
    bool IsOnline;
    string Name;
    User() {
        IsOnline = false;
    }

    string ToString() {
        return to_string(Id) + " " + Name;
    }

};
class UserSystem {
public:
    static int Uid;
    std::vector<User> users;
    UserSystem() {
        users =  vector<User>();
    }
    User& CreateUser(string name) {

        auto u = User();
        u.Id = ++Uid;
        u.Name = name;
        users.push_back(u);
        return users.back();
    }
    void Login(User& user) {
        user.IsOnline = true;
    }
    ~UserSystem()
    {
     
    }
};

int UserSystem::Uid = 0;