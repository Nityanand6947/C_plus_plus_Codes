#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Sorted input ranges
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {3, 4, 5, 6, 7};

    // 1. merge: Merges two sorted ranges into a sorted range
    vector<int> merged_vec;
    merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(merged_vec));
    cout << "merge: ";
    for (int num : merged_vec) cout << num << " ";
    cout << endl;

    // 2. inplace_merge: Merges two consecutive sorted ranges in-place
    vector<int> inplace_vec = {1, 2, 3, 4, 5, 6, 7};
    inplace_merge(inplace_vec.begin(), inplace_vec.begin() + 5, inplace_vec.end());
    cout << "inplace_merge: ";
    for (int num : inplace_vec) cout << num << " ";
    cout << endl;

    // 3. includes: Check if vec2 is included in vec1
    bool result_includes = includes(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
    cout << "includes: Is vec2 included in vec1? " << (result_includes ? "Yes" : "No") << endl;

    // 4. set_union: Union of two sorted ranges (unique elements from both ranges)
    vector<int> set_union_vec;
    set_union(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(set_union_vec));
    cout << "set_union: ";
    for (int num : set_union_vec) cout << num << " ";
    cout << endl;

    // 5. set_intersection: Intersection of two sorted ranges (common elements)
    vector<int> set_intersection_vec;
    set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(set_intersection_vec));
    cout << "set_intersection: ";
    for (int num : set_intersection_vec) cout << num << " ";
    cout << endl;

    // 6. set_difference: Difference of two sorted ranges (elements in vec1 but not in vec2)
    vector<int> set_difference_vec;
    set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(set_difference_vec));
    cout << "set_difference: ";
    for (int num : set_difference_vec) cout << num << " ";
    cout << endl;

    // 7. set_symmetric_difference: Symmetric difference of two sorted ranges (elements in either range but not both)
    vector<int> set_symmetric_difference_vec;
    set_symmetric_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(set_symmetric_difference_vec));
    cout << "set_symmetric_difference: ";
    for (int num : set_symmetric_difference_vec) cout << num << " ";
    cout << endl;

    return 0;
}
