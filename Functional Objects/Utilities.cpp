#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int addOne(int x) {
    return x + 3;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<int> result(vec.size());

    //Using std::transform with std::plus
    std::transform(vec.begin(), vec.end(), result.begin(), std::bind2nd(std::plus<int>(), 10));
    for (int n : result) std::cout << n << " "; // Outputs: 2 3 4 5
    std::cout << std::endl;

    
    // Using std::ptr_fun to convert function pointer to function object
    std::transform(vec.begin(), vec.end(), result.begin(), std::ptr_fun(addOne));
    for (int n : result) std::cout << n << " "; // Outputs: 2 3 4 5
    std::cout << std::endl;

    return 0;
}
