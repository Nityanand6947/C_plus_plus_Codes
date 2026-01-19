/*
Here we are customising the priority_queue according to the min heap
*/
#include<iostream>
#include<queue>
using namespace std;

struct comparison{
    bool operator()(string x,string y){
        return x<y;
    }
};

int main(){

    // priority_queue<int, vector<int>,greater<int> > cus;
    priority_queue<string, vector<string>,comparison> cus;

    if(!cus.empty()){
        cout<<"This container is not empty "<<endl;
    }else{
        cout<<"This container is empty "<<endl;
    }

    // cus.push(50);
    // cus.push(11);
    // cus.push(29);
    // cus.push(45);
    // cus.push(90);
    // cus.push(1);
    // cus.push(67);

    cus.push("Nitya");
    cus.push("Aatya");
    cus.push("zitya");
    cus.push("Katya");
    cus.push("Pitya");

    cout<<"The size of container is : "<<cus.size()<<endl;
    cout<<"The top element of the container is : "<<cus.top()<<endl;

    cout<<"The element of the priority queue are : "<<endl;
    while(!cus.empty()){
        cout<<cus.top()<<" ";
        cus.pop();
    }

}