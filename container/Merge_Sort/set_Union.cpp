/*
Union works on sorted array
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
    // for union
    vector<int> v3(10);

    // using set_union() to compute union of 2
    // containers v1 and v2 and store result in v3
    auto it = set_union(v1.begin(), v1.end(), v2.begin(),
                        v2.end(), v3.begin());

    // resizing new container
    v3.resize(it - v3.begin());

    // Displaying set union
    cout << "Union of two containers is : ";
    for (int &x : v3)
        cout << x << " ";
    cout << endl;

    return 0;
}
