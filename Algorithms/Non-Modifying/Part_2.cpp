#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <random>
using namespace std;

int main(){
      // Part 2: Finding Elements in a Range

    vector<int> find_vec = {1, 2, 3, 4, 5};

    // find: Find element with value 3
    auto it = find(find_vec.begin(), find_vec.end(), 3);
    if (it != find_vec.end()) cout << "find: Found 3 at position " << distance(find_vec.begin(), it) << endl;

    // find_if: Find first element greater than 3
    it = find_if(find_vec.begin(), find_vec.end(), [](int x) { return x > 3; });
    if (it != find_vec.end()) cout << "find_if: Found element > 3: " << *it << endl;

    // find_if_not: Find first element that is not greater than 3
    it = find_if_not(find_vec.begin(), find_vec.end(), [](int x) { return x > 3; });
    if (it != find_vec.end()) cout << "find_if_not: Found element <= 3: " << *it << endl;

    // find_end: Find last occurrence of subsequence {2, 3}
    vector<int> sub = {2, 3};
    auto end_it = find_end(find_vec.begin(), find_vec.end(), sub.begin(), sub.end());
    if (end_it != find_vec.end()) cout << "find_end: Found subsequence at position " << distance(find_vec.begin(), end_it) << endl;

    // find_first_of: Find first element from set {2, 4, 6}
    vector<int> set = {2, 4, 6};
    auto first_of_it = find_first_of(find_vec.begin(), find_vec.end(), set.begin(), set.end());
    if (first_of_it != find_vec.end()) cout << "find_first_of: Found element from set: " << *first_of_it << endl;

}