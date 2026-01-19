/*
Copy

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include <random> 
using namespace std;

int main(){
     // Part 4: Filling, Removing, and Reversing Elements
    
    vector<int> fill_vec = {1, 2, 3, 4};
    
    // fill
    fill(fill_vec.begin(), fill_vec.end(), 0);
    cout << "fill: ";
    for (int num : fill_vec) cout << num << " ";
    cout << endl;
    
    // fill_n
    fill_n(fill_vec.begin(), 2, 7);
    cout << "fill_n: ";
    for (int num : fill_vec) cout << num << " ";
    cout << endl;
    
    // generate
    int n = 0;
    vector<int> generate_vec(4);
    generate(generate_vec.begin(), generate_vec.end(), [&n]() { return n++; });
    cout << "generate: ";
    for (int num : generate_vec) cout << num << " ";
    cout << endl;
    
    // generate_n
    vector<int> generate_n_vec(5);
    int m = 10;
    generate_n(generate_n_vec.begin(), 3, [&m]() { return m++; });
    cout << "generate_n: ";
    for (int num : generate_n_vec) cout << num << " ";
    cout << endl;
    
    // remove
    vector<int> remove_vec = {1, 2, 3, 2, 4};
    auto new_end = remove(remove_vec.begin(), remove_vec.end(), 2);
    remove_vec.erase(new_end, remove_vec.end());
    cout << "remove: ";
    for (int num : remove_vec) cout << num << " ";
    cout << endl;
    
    // remove_if
    vector<int> remove_if_vec = {1, 2, 3, 4};
    auto new_end_if = remove_if(remove_if_vec.begin(), remove_if_vec.end(), [](int x) { return x % 2 == 0; });
    remove_if_vec.erase(new_end_if, remove_if_vec.end());
    cout << "remove_if: ";
    for (int num : remove_if_vec) cout << num << " ";
    cout << endl;
    
    // remove_copy
    vector<int> remove_copy_result;
    remove_copy(remove_vec.begin(), remove_vec.end(), back_inserter(remove_copy_result), 3);
    cout << "remove_copy: ";
    for (int num : remove_copy_result) cout << num << " ";
    cout << endl;
    
    // remove_copy_if
    vector<int> remove_copy_if_result;
    remove_copy_if(remove_vec.begin(), remove_vec.end(), back_inserter(remove_copy_if_result), [](int x) { return x == 1; });
    cout << "remove_copy_if: ";
    for (int num : remove_copy_if_result) cout << num << " ";
    cout << endl;
    
    // unique
    vector<int> unique_vec = {1, 1, 2, 3, 3, 4};
    auto unique_end = unique(unique_vec.begin(), unique_vec.end());
    unique_vec.erase(unique_end, unique_vec.end());
    cout << "unique: ";
    for (int num : unique_vec) cout << num << " ";
    cout << endl;
    
    // unique_copy
    vector<int> unique_copy_result;
    unique_copy(unique_vec.begin(), unique_vec.end(), back_inserter(unique_copy_result));
    cout << "unique_copy: ";
    for (int num : unique_copy_result) cout << num << " ";
    cout << endl;
    
    // reverse
    vector<int> reverse_vec = {1, 2, 3, 4};
    reverse(reverse_vec.begin(), reverse_vec.end());
    cout << "reverse: ";
    for (int num : reverse_vec) cout << num << " ";
    cout << endl;
    
    // reverse_copy
    vector<int> reverse_copy_result(4);
    reverse_copy(reverse_vec.begin(), reverse_vec.end(), reverse_copy_result.begin());
    cout << "reverse_copy: ";
    for (int num : reverse_copy_result) cout << num << " ";
    cout << endl;
    
    // rotate
    vector<int> rotate_vec = {1, 2, 3, 4};
    rotate(rotate_vec.begin(), rotate_vec.begin() + 2, rotate_vec.end());
    cout << "rotate: ";
    for (int num : rotate_vec) cout << num << " ";
    cout << endl;
    
    // rotate_copy
    vector<int> rotate_copy_result(4);
    rotate_copy(rotate_vec.begin(), rotate_vec.begin() + 1, rotate_vec.end(), rotate_copy_result.begin());
    cout << "rotate_copy: ";
    for (int num : rotate_copy_result) cout << num << " ";
    cout << endl;
    
    // shuffle
    vector<int> shuffle_vec = {1, 2, 3, 4};
    shuffle(shuffle_vec.begin(), shuffle_vec.end(), default_random_engine());
    cout << "shuffle: ";
    for (int num : shuffle_vec) cout << num << " ";
    cout << endl;
}