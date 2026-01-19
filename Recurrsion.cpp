#include <iostream>

// Function to calculate factorial recursively
int factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
    return 0;
}
