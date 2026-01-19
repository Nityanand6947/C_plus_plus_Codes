#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {1, 3, 5, 2, 4, 6,9,12};

    // Split the vector into two sorted subranges
    /*
    Here first-middle(soted stated) then middle-last(parallel sorted started) and
     then when both are sorted first-last sorted
    */
    inplace_merge(vec.begin(), vec.begin() + 3, vec.end());

    // Output the result
    for (int num : vec) {
        cout << num << " ";
    }

    return 0;
}
