#ifndef __io__
#define __io__

#include<iostream>
#endif
using namespace std;


#include "object.cpp"

class ToyFactory{
    public:
        static Toy* createToy(int type){
            Toy *toy = NULL;

            switch(type){
                case 1:{
                    toy = new Car;
                    int value;
                    bool flag = true;
                    while(flag){
                        switch(value){
                        case 1:{
                            toy->prepareParts();
                            break;
                        }
                        case 2:{
                            toy->combineParts();
                            break;
                        }
                        case 3:{
                            toy->assembleParts();
                            break;
                        }
                        case 4:{
                            toy->applyLabel();
                            break;
                        }
                        case 5 :{
                            flag = false;
                            break;
                        }
                        default:{
                            cout<<"Wrong input"<<endl;
                        }
                    }
                    }
                    
                    break;
                }
                case 2:{
                    toy = new Bike;
                    break;
                }
                case 3:{
                    toy = new Plane;
                    break;
                }
                default :{
                    cout<<"Invalid toy type please re-enter type "<<endl;
                    return NULL;
                }
            }

            toy->prepareParts();
            toy->combineParts();
            toy->assembleParts();
            toy->applyLabel();

            return toy;
        }
};