#include <iostream>
#include <vector>
#include <algorithm>  // For make_heap, pop_heap, push_heap, sort_heap
using namespace std;

int main() {
    // Example vector to be sorted
    vector<int> arr = {100, 30, 50, 20, 40, 70, 60};
    vector<int> arr2 = {100, 30, 50, 20, 40, 70, 60};

    //=====================================For ascending order================================

    // Step 1: Build a max-heap from the input data
    make_heap(arr.begin(), arr.end());

    // Step 2: Sort the heap (by repeatedly popping the largest element)
    sort_heap(arr.begin(), arr.end());

    //==========================For descending order==========================================
    make_heap(arr2.begin(), arr2.end(), greater<int>());

    // Step 2: Sort the heap (by repeatedly popping the smallest element)
    sort_heap(arr2.begin(), arr2.end(), greater<int>());


    // Step 3: Print the sorted array
    cout << "Sorted array using heap sort in ascending : "<<endl;
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Sorted array using heap sort in descending : "<<endl;
    for (int x : arr2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
