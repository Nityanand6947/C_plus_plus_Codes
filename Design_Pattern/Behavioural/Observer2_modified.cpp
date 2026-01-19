#include <iostream>
#include <list>
using namespace std;

// Observer Interface(Observer)
class ISubscribe {
public:
    virtual void notify(string msg) = 0;
};

// ConcreteObserver
class User : public ISubscribe {
private:
    int userId;
public:
    User(int userId) {
        this->userId = userId;
    }

    void notify(string msg) override {
        cout << "User " << userId << " received message: " << msg << endl;
    }
};

// Subject Interface(Subject)
class IGroup {
public:
    virtual void subscribe(ISubscribe* user) = 0;
    virtual void unsubscribe(ISubscribe* user) = 0;
    virtual void notify(string msg) = 0;
};

// ConcreteSubject
class Group : public IGroup {
private:
    list<ISubscribe*> users;
public:
    void subscribe(ISubscribe* user) override {
        users.push_back(user);
    }

    void unsubscribe(ISubscribe* user) override {
        users.remove(user);
    }

    void notify(string msg) override {
        for (auto user : users) {
            user->notify(msg);
           // cout<<user<<endl;
        }
    }
};

int main() {
    IGroup* group = new Group();

    ISubscribe* user1 = new User(1);
    ISubscribe* user2 = new User(2);
    ISubscribe* user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("new message");

    group->unsubscribe(user1);
    group->notify("new updated message");

    // // Clean up
    // delete group;
    // delete user1;
    // delete user2;
    // delete user3;

    return 0;
}
