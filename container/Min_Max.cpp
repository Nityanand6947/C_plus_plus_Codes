// C++ program to illustrate the use of
// std::min_element()
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(int a, int b)
{
    return a < b;
}

int main()
{
    vector<int> v = {2, 1, 17, 10};

    // Min element in vector
    cout << "Min element is : " << *min_element(v.begin(), v.end())
         << endl;

    // Max element in vector
    cout << "Max element is : " << *max_element(v.begin(), v.end());

    pair<int, int> mnmx;
    mnmx = minmax({2, 5, 1, 6, 3});

    // printing minimum and maximum values.
    cout << "\n\nThe minimum value obtained is : ";
    cout << mnmx.first;
    cout << "\nThe maximum value obtained is : ";
    cout << mnmx.second;

    return 0;
}
