#include <iostream>

template<typename T>
class Container{
    public:
    void run(){
        std::cout<<"Primary Template"<<std::endl;
    }
};

// Full specialization for a specific type without a primary template
template <>
class Container<int> {
public:
    void run() {
        std::cout << "Specialized container for int." << std::endl;
    }
};

int main() {
    Container<char> intContainer;
    intContainer.run();  // Output: Specialized container for int.
    return 0;
}
