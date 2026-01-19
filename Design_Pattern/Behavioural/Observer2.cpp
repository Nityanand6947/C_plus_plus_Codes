#include<iostream>
#include<list>
using namespace std;

//Observer
class ISubscribe{
    public:
        virtual void notify(string msg) = 0;
};

class User : public ISubscribe{
    private: int userId;
    public:
    User(int userId){
        this->userId = userId;
    }
    void notify(string msg){
        cout<<"User "<<userId<<" received "<<msg<<endl;;
    }
};
class Group{
    private:
        list<ISubscribe*> users;
        public:
            void subscribe(ISubscribe* user){
                users.push_back(user);
            }
            void unsubscribe(ISubscribe* user){
                users.remove(user);
            }
            void notify(string msg){
                for(auto user:users){
                    user->notify(msg);
                }
            }
};

int main(){
    Group* group = new Group();

    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("new message");

    group->unsubscribe(user1);
    group->notify("new updated message");
}