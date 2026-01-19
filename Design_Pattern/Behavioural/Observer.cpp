#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Car{
    int position;
    vector<class Observer*> observerlist;
public:
    int getPosition(){
        return position;
    }
    void setPosition(int newPosition){
        position = newPosition;
        notify();
    }
    void attach(Observer *obs){
        observerlist.push_back(obs);
    }
    void detach(Observer *obs){
        observerlist.erase(remove(observerlist.begin(),observerlist.end(),obs),observerlist.end());
    }
    void notify();
};
class Observer{
    Car* car;
    public:
        Observer(Car* car){
            this->car = car;
            car->attach(this);
        }
        virtual void update() = 0;
    protected:
        Car* getCar(){
            return car;
        }
};
void Car::notify(){
    for(int i=0;i<observerlist.size();++i){
        observerlist[i]->update();
    }
}
class LeftObserver : public Observer{
    public:
        LeftObserver(Car* car):Observer(car){}
        void update(){
            int pos = getCar()->getPosition();
            if(pos<0){
                cout<<"left side"<<endl;
            }
        }
};
class RightObserver : public Observer{
    public:
        RightObserver(Car* car):Observer(car){}
        void update(){
            int pos = getCar()->getPosition();
            if(pos>0){
                cout<<"left side"<<endl;
            }
        }
};
class MiddleObserver : public Observer{
    public:
        MiddleObserver(Car* car):Observer(car){}
        void update(){
            int pos = getCar()->getPosition();
            if(pos==0){
                cout<<"running in middle"<<endl;
            }
        }
};

int main(){
    Car* car = new Car();


    LeftObserver leftObserver(car);
    RightObserver rightObserver(car);
    MiddleObserver middleObserver(car);

    cout<<"Hit left right button to drive a car in your city!!! and press Esc to close"<<endl;

    char pressedButton;
    bool breakLoop = false;

    while(breakLoop == false){
        cin>>pressedButton;

        switch (pressedButton)
        {
        case 108:{ //l --> pressed for left side
            car->setPosition(-1);
            break;
        }
        case 99:{//c -->  pressed for center side
            car->setPosition(0);
            break;
        }
        case 114:{//r --> pressed for right side
            car->setPosition(1);
            break;
        }
        case 98:{// b --> pressed for break
            breakLoop=true;
            break;
        }
        default:{
            cout<<"Please drive carefully"<<endl;
            break;
        }
        }
    }
    cout<<" BYE... :) "<<endl;
}