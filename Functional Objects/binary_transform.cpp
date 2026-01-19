#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec1 = {1,2,3,4,5};
    // vector<int> vec2 = {10,20,30,40,50,60};
    vector<int> vec2(vec1.size());

    //vector<int> vec1 = {1,2,3,4,5}; give one extra then same value beacuse size is acc to vec1
    //vector<int> vec2 = {10,20,30,40,50,60};

    vector<int> result(vec1.size());

    // transform(vec1.begin(),vec1.end(),vec2.begin(),result.begin(),[](int x,int y){ return x+y;});
    // transform(vec1.begin(),vec1.end(),vec2.begin(),[](int x){return x;});
    transform(vec1.begin(),vec1.end(),vec2.begin(),[](int x){return x;});

    for(int val : vec2){
        cout<< val <<" ";
    }
}