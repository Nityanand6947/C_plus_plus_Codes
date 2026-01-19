/*
The set difference of two sets is the set of elements that are present in the first set but not in the second set.
 More formally, for two sets A and B, the set difference is A - B
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
    // for difference
    vector<int> v3(10);

    // using set_difference() to compute difference
    // of 2 containers v1 and v2.
    auto it = set_difference(v1.begin(), v1.end(),
                             v2.begin(), v2.end(), v3.begin());

    // resizing new container
    v3.resize(it - v3.begin());

    // Displaying set difference
    cout << "Difference of two containers is : ";
    for (int &x : v3)
        cout << x << " ";
    cout << endl;

    return 0;
}
