#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};

    // Insert 3 copies of 99 at the second position (index 1)
    /*
    position: An iterator that specifies where to insert the new elements.
    count: The number of times to insert the specified value.
    value: The value to be inserted

    syntax: container.insert(position, count, value);

    */
    // vec.insert(vec.begin() + 1, 3, 99);
    vec.insert(vec.begin() + 3, 3, 99);

    // Print the vector
    for (int num : vec)
    {
        cout << num << " "; // Output: 1 99 99 99 2 3 4
    }

    return 0;
}
