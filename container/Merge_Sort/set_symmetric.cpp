/*
The set symmetric difference of two sets is the set of elements that are in either of the sets, but not in both.
 More formally, for two sets A and B, the symmetric difference is (A - B) ∪ (B - A)
*/
#include <iostream>
#include <algorithm> // for merge operations
#include <vector>    // for vector
using namespace std;
int main()
{
    // Initializing 1st vector
    vector<int> v1 = {1, 3, 4, 5, 20, 30};

    // Initializing 2nd vector
    vector<int> v2 = {1, 5, 6, 7, 25, 30};

    // Declaring resultant vector
    // for symmetric_difference
    vector<int> v4(10);

    // using set_symmetric_difference() to compute
    // symmetric_difference/ of 2 containers
    auto it1 = set_symmetric_difference(v1.begin(),
                                        v1.end(), v2.begin(), v2.end(), v4.begin());

    // resizing new container
    v4.resize(it1 - v4.begin());

    // Displaying set symmetric_difference
    cout << "symmetric_difference of two containers is : ";
    for (int &x : v4)
        cout << x << " ";
    cout << endl;

    return 0;
}
