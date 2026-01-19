#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6};
    vector<int> evenNumbers;

    copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers),
                 [](int num) { return num % 2 == 0; });

    cout << "Even Numbers:\n";
    for (const auto& num : evenNumbers) {
        cout << num << endl;
    }

    return 0;
}
