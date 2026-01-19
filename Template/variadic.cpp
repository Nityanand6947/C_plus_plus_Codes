#include <iostream>

// Variadic function template
template <typename... Args>
auto sum(Args... args) {
    return (args + ...); // Fold expression (C++17)
}

int main() {
    std::cout << sum(1, 2, 3, 4, 5) << std::endl; // Output: 15
    std::cout << sum(1.5, 2.5, 3.5) << std::endl; // Output: 7.5
    return 0;
}
