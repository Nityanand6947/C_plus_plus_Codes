/*
Copy

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   // Part 1: Copying and Moving Elements
    
    vector<int> source = {1, 2, 3, 4};
    vector<int> destination(4);
    
    // copy
    copy(source.begin(), source.end(), destination.begin());
    cout << "copy: ";
    for (int num : destination) cout << num << " ";
    cout << endl;
    
    // copy_n
    vector<int> destination_n(2);
    copy_n(source.begin(), 2, destination_n.begin());
    cout << "copy_n: ";
    for (int num : destination_n) cout << num << " ";
    cout << endl;
    
    // copy_if
    vector<int> destination_if;
    copy_if(source.begin(), source.end(), back_inserter(destination_if), [](int x) { return x % 2 == 0; });
    cout << "copy_if: ";
    for (int num : destination_if) cout << num << " ";
    cout << endl;
    
    // copy_backward
    vector<int> destination_backward(4);
    copy_backward(source.begin(), source.end(), destination_backward.end());
    cout << "copy_backward: ";
    for (int num : destination_backward) cout << num << " ";
    cout << endl;
    
    // move
    vector<int> destination_move;
    move(source.begin(), source.end(), back_inserter(destination_move));
    cout << "move: ";
    for (int num : destination_move) cout << num << " ";
    cout << endl;
    
    // move_backward
    vector<int> destination_move_backward(4);
    move_backward(source.begin(), source.end(), destination_move_backward.end());
    cout << "move_backward: ";
    for (int num : destination_move_backward) cout << num << " ";
    cout << endl;
}   
