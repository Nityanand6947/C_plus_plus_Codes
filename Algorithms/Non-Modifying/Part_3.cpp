#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <random>
using namespace std;

int main(){
    // Part 3: Counting and Matching Elements

    vector<int> find_vec = {1, 2, 3, 4, 5};

    // adjacent_find: Find first pair of adjacent equal elements
    vector<int> adj_vec = {1, 2, 2, 3, 4};
    auto adj_it = adjacent_find(adj_vec.begin(), adj_vec.end());
    if (adj_it != adj_vec.end()) cout << "adjacent_find: Found adjacent duplicate: " << *adj_it << endl;

    // count: Count occurrences of 2
    int count_2 = count(find_vec.begin(), find_vec.end(), 2);
    cout << "count: Found " << count_2 << " occurrences of 2" << endl;

    // count_if: Count elements greater than 3
    int count_gt_3 = count_if(find_vec.begin(), find_vec.end(), [](int x) { return x > 3; });
    cout << "count_if: Found " << count_gt_3 << " elements greater than 3" << endl;

    // mismatch: Find where two ranges first differ
    vector<int> compare_vec = {1, 2, 3, 6, 5};
    auto mismatch_it = mismatch(find_vec.begin(), find_vec.end(), compare_vec.begin());
    if (mismatch_it.first != find_vec.end())
        cout << "mismatch: First difference at position " << distance(find_vec.begin(), mismatch_it.first) << endl;

    // equal: Check if two ranges are equal
    bool are_equal = equal(find_vec.begin(), find_vec.end(), compare_vec.begin());
    cout << "equal: Ranges are " << (are_equal ? "equal" : "not equal") << endl;

}