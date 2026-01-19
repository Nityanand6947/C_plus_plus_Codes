#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};

    std::cout << "Names in the list:\n";
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
