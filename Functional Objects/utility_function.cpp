#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2 = {10,20,30,40,50,60};

    //vector<int> vec1 = {1,2,3,4,5}; give one extra then same value beacuse size is acc to vec1
    //vector<int> vec2 = {10,20,30,40,50,60};

    vector<int> result(vec1.size());

    transform(vec1.begin(),vec1.end(),vec2.begin(),result.begin(),plus<int>());

    for(int val : result){
        cout<< val <<" ";
    }

    cout<<"\n";
    transform(vec2.begin(),vec2.end(),vec1.begin(),result.begin(),minus<int>());

    for(int val : result){
        cout<< val <<" ";
    }
}