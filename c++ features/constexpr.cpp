#include <iostream>

constexpr int retirementAge = 60;

constexpr bool isRetirementEligible(int age) {
    return age >= retirementAge;
}

int main() {
    int age = 102;

    if (isRetirementEligible(age)) {
        std::cout << "The person is eligible for retirement." << std::endl;
    } else {
        std::cout << "The person is not eligible for retirement." << std::endl;
    }

    return 0;
}
