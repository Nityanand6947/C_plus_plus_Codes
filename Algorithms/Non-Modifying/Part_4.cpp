#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <random>
using namespace std;

int main(){
     // Part 4: Permutation, Search, and Subsequence

    vector<int> find_vec = {1, 2, 3, 4, 5};
    vector<int> compare_vec = {1, 2, 3, 6, 5};
    
    // is_permutation: Check if one range is a permutation of another
    bool is_perm = is_permutation(find_vec.begin(), find_vec.end(), compare_vec.begin());
    cout << "is_permutation: " << (is_perm ? "Yes" : "No") << endl;

    // search: Search for subsequence {2, 3}
    vector<int> search_sub = {2, 3};
    auto search_it = search(find_vec.begin(), find_vec.end(), search_sub.begin(), search_sub.end());
    if (search_it != find_vec.end()) cout << "search: Found subsequence starting at position " << distance(find_vec.begin(), search_it) << endl;

    // search_n: Search for 2 consecutive elements with value 3
    auto search_n_it = search_n(find_vec.begin(), find_vec.end(), 2, 3);
    if (search_n_it != find_vec.end()) cout << "search_n: Found 2 consecutive 3's starting at position " << distance(find_vec.begin(), search_n_it) << endl;

}