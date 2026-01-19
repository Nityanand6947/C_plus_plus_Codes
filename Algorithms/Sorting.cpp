#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Test vector
    vector<int> vec = {10,10, 20, 5, 30, 15, 25};

    // 1. sort: Sort elements in ascending order
    sort(vec.begin(), vec.end());
    cout << "sort: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 2. stable_sort: Sort elements but preserve the relative order of equal elements
    vector<int> stable_vec = {10,10, 20, 5, 30, 15, 25};
    stable_sort(stable_vec.begin(), stable_vec.end());
    cout << "stable_sort: ";
    for (int num : stable_vec) cout << num << " ";
    cout << endl;

    // 3. partial_sort: Partially sort so that the first 3 elements are in correct order
    vector<int> partial_vec = {10, 20, 5, 30, 15, 25};
    partial_sort(partial_vec.begin(), partial_vec.begin() + 3, partial_vec.end());
    cout << "partial_sort: ";
    for (int num : partial_vec) cout << num << " ";
    cout << endl;

    // 4. partial_sort_copy: Copy and partially sort the range
    vector<int> partial_copy_vec = {10, 20, 5, 30, 15, 25};
    vector<int> partial_copy_result(3);  // Copying top 3 sorted elements
    partial_sort_copy(partial_copy_vec.begin(), partial_copy_vec.end(), partial_copy_result.begin(), partial_copy_result.end());
    cout << "partial_sort_copy: ";
    for (int num : partial_copy_result) cout << num << " ";
    cout << endl;

    // 5. is_sorted: Check if the range is sorted
    bool sorted = is_sorted(vec.begin(), vec.end());
    cout << "is_sorted: " << (sorted ? "Yes" : "No") << endl;

    // 6. is_sorted_until: Find first element that breaks the sorted order
    auto sorted_until_it = is_sorted_until(vec.begin(), vec.end());
    if (sorted_until_it != vec.end()) {
        cout << "is_sorted_until: First unsorted element is " << *sorted_until_it << endl;
    } else {
        cout << "is_sorted_until: The entire range is sorted." << endl;
    }

    // 7. nth_element: Partially sort so that the 3rd smallest element is in its correct position
    vector<int> nth_vec = {10, 20, 5, 30, 15, 25};
    nth_element(nth_vec.begin(), nth_vec.begin() + 2, nth_vec.end());
    cout << "nth_element (3rd smallest element): ";
    for (int num : nth_vec) cout << num << " ";
    cout << endl;

    return 0;
}
