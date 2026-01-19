#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Test sorted vector
    vector<int> sorted_vec = {1, 2, 3, 3, 4, 5, 6, 7, 8, 9};

    // 1. lower_bound: Find the first position where 3 can be inserted (not less than 3)
    auto lb = lower_bound(sorted_vec.begin(), sorted_vec.end(), 3);
    cout << "lower_bound: Element 3 can be inserted at position " << distance(sorted_vec.begin(), lb) << endl;

    // 2. upper_bound: Find the first position where 3 can be inserted (greater than 3)
    auto ub = upper_bound(sorted_vec.begin(), sorted_vec.end(), 3);
    cout << "upper_bound: Element greater than 3 can be inserted at position " << distance(sorted_vec.begin(), ub) << endl;

    // 3. equal_range: Get the range of elements equal to 3
    auto range = equal_range(sorted_vec.begin(), sorted_vec.end(), 3);
    cout << "equal_range: Elements equal to 3 are in the range [";
    for (auto it = range.first; it != range.second; ++it)
        cout << *it << " ";
    cout << "]" << endl;

    // 4. binary_search: Check if 5 exists in the sorted sequence
    bool found = binary_search(sorted_vec.begin(), sorted_vec.end(), 5);
    cout << "binary_search: Is 5 in the sequence? " << (found ? "Yes" : "No") << endl;

    return 0;
}
