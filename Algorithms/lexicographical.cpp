#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Test vector for permutations
    vector<int> vec = {1, 2, 3};

    // 1. lexicographical_compare: Compare two ranges lexicographically
    vector<int> vec2 = {1, 2, 4};
    bool is_less = lexicographical_compare(vec.begin(), vec.end(), vec2.begin(), vec2.end());
    cout << "lexicographical_compare: Is vec < vec2? " << (is_less ? "Yes" : "No") << endl;

    // 2. next_permutation: Transform to next permutation
    cout << "next_permutation (original): ";
    for (int num : vec) cout << num << " ";
    cout << endl;
    
    next_permutation(vec.begin(), vec.end());
    cout << "next_permutation (next): ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 3. prev_permutation: Transform to previous permutation
    cout << "prev_permutation (current): ";
    for (int num : vec) cout << num << " ";
    cout << endl;
    
    prev_permutation(vec.begin(), vec.end());
    cout << "prev_permutation (previous): ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    return 0;
}
