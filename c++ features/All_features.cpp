#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;


//strongly typed enum for user defined data
enum class Role {
    Manager,
    Developer,
    Designer
};

//tuples used to store heterogenous values
using Employee = tuple<string, int, Role>; // Name, Age, Role


//Use of constexpr for the fixed value to use in code.
constexpr int retirementAge = 65;

constexpr bool isRetirementEligible(int age) {
    return age >= retirementAge;
}


//Ranged based loops
void printEmployees(const vector<Employee>& employees) {
    for (const auto& [name, age, role] : employees) {
        cout << "Name: " << name
                  << ", Age: " << age
                  << ", Role: " << static_cast<int>(role) << endl; // Casting for demonstration
    }
}

vector<Employee> filterRetirees(const vector<Employee>& employees) {
    vector<Employee> retirees;

    copy_if(employees.begin(), employees.end(), back_inserter(retirees),
                 [](const Employee& emp) { //lambda is used here to [](){}
                     return isRetirementEligible(get<1>(emp));
                 });

    return retirees;
}

int main() {
    //instead of tuples used vectors.
    vector<Employee> employees = {
        {"Alice", 30, Role::Developer},
        {"Bob", 65, Role::Manager},
        {"Charlie", 40, Role::Designer},
        {"David", 70, Role::Developer}
    };

    cout << "All Employees:\n";
    printEmployees(employees);

    auto retirees = filterRetirees(employees);
    cout << "\nRetirees:\n";
    printEmployees(retirees);

    return 0;
}
