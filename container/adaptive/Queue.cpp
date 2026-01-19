/*
Functions used in this :
    -empty()
    -size()
    -swap();
    -emplace();
    -front();
    -back();
    -push()
    -pop()
*/
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> qu;

    if(qu.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    qu.emplace(20);
    qu.emplace(20);
    qu.emplace(20);
    qu.push(45);
    qu.push(405);
    qu.push(405);//

    cout<<"The size is : "<<qu.size()<<endl;
    cout<<"The front is : "<<qu.front()<<endl;
    cout<<"The back is : "<<qu.back()<<endl;

     while(!qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }

}