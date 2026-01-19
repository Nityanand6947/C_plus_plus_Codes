/*
It is designed to search the first element of the queue based on maximum value or minimum value.
And elements are in non-increasing and non-decreasing order it the queue.
[IMP:]-  The top element is always greatest by default. 
Internally this priority is working on HEAP Data Strucutre.(Max-heap or Min-heap)

Functions used in this are :
    -empty()
    -size()
    -top()
    -push()
    -pop()
    -swap()
    -emplace()

*/

#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    priority_queue<int> pq;

    if(!pq.empty()){
        cout<<"This container is not empty "<<endl;
    }else{
        cout<<"This container is empty "<<endl;
    }

    pq.push(50);
    pq.push(11);
    pq.push(11);
    pq.push(0);
    pq.push(90);
    pq.push(1);
    pq.push(67);

    cout<<"The size of container is : "<<pq.size()<<endl;
    cout<<"The top element of the container is : "<<pq.top()<<endl;

    cout<<"The element of the priority queue are : "<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}