#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int> result(vec.size());

    transform(vec.begin(),vec.end(),result.begin(),[](int x){ return x*2;});

    for(int val : result){
        cout<< val <<" ";
    }
}