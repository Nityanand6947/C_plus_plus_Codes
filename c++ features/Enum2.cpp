#include <iostream>

enum class Role {
    Manager,
    Developer,
    Designer
};

int main() {
    Role employeeRole = Role::Developer;

    if (employeeRole == Role::Developer) {
        std::cout << "The employee is a Developer." << std::endl;
    }else{
        std::cout << "The employee is a Manager." << std::endl;
    }

    return 0;
}
