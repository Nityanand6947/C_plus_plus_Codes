#include<iostream>
#include<vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int> v;

    public:
    Queue(){
        this->back = -1;
        this->front = -1;
    }

    void enqueue(int data){
        this->v.push_back(data);
        this->back++;
    }

    void dequeue(){
        if(this->front == this->back){
        this->front = -1;
        this->back = -1;
        }else{
            this->front++;
        }
    }

    int getFront(){
        if(this->front = -1) return -1;
        return this->v[this->front];
    }

    bool isEmpty(){
        return this->front = -1;
    }
};

int main(){
    Queue qu;
    qu.enqueue(23);
    qu.enqueue(43);
    qu.enqueue(13);
    qu.enqueue(9);
    qu.enqueue(3);

    while(!qu.isEmpty()){
        cout<<qu.getFront()<<" ";
        qu.dequeue();
    }
}

