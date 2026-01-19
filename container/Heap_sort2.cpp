// C++ program to demonstrate the use of push_heap()
// function
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &vc)
{
    for (auto i : vc)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vc = {100, 30, 50, 20, 40, 70, 60};

    make_heap(vc.begin(), vc.end());
    cout << "Initial Heap: ";
    print(vc);

    vc.push_back(50);
    cout << "Heap just after push_back(): ";
    print(vc);
    push_heap(vc.begin(), vc.end());
    cout << "Heap after push_heap(): ";
    print(vc);
    /*
            100
         /    \
       50      70
      /  \    /  \
    40   30  50   60
   /
 20

    */
    // sort_heap(vc.begin(), vc.end());
    // cout << "Heap after sort_heap(): ";
    // print(vc);
    pop_heap(vc.begin(), vc.end());
    cout << "Heap after pop_heap(): ";
    print(vc);
    vc.pop_back();
    cout << "Heap after pop_back(): ";
    print(vc);
    // Checking if container is heap
    // using is_heap()
    is_heap(vc.begin(), vc.end())
        ? cout << "The container is heap "
        : cout << "The container is not heap"; // ternary operator
    cout << endl;

    return 0;
}
