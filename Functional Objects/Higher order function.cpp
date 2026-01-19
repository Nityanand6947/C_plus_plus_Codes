//Passing function as argument
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Higher-order function that takes another function as a parameter
void applyFunction(const vector<int>& vec, void (*func)(int)) {
    for (int v : vec) {
        func(v);
    }
}

// Sample function to use with applyFunction
void printSquare(int x) {
    cout << x * x << " ";
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    applyFunction(numbers, printSquare);  // Output: 1 4 9 16 25
    return 0;
}
