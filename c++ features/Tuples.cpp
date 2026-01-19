#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    using Employee = tuple<string, int, string,double>; // Name, Age, Role,salary

    Employee emp = make_tuple("Alice", 30, "Developer",35000.0);

    cout << "Name: " << get<0>(emp) << ", Age: " << get<1>(emp)
              << ", Role: " << get<2>(emp) <<",Salary: "<<get<3>(emp)<<endl;

    return 0;
}
