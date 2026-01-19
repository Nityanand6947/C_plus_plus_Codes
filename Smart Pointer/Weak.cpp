#include<iostream>
#include<string>
#include<memory>
using namespace std;


class Entity{
public:
    Entity(){
    cout<<"Created Entity"<<endl;
    }

    ~Entity(){
    cout<<"Destroyed Entity"<<endl;
    }
    void print(){
    cout<<"I'm from entity"<<endl;
    }

};

int main(){
{ //It will not count the references
    weak_ptr<Entity> entity;
   {
       shared_ptr<Entity> entity2 = make_shared<Entity>();
       entity = entity2;
   }
   }



}
