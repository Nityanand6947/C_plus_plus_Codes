/*
-The liskov Subsitution Principle(LSP) states that an object of a child class must be able to replace an object of the parent class without breaking the application.
-
*/
#include <iostream>

// Base class
class Bird {
public:
    virtual void fly() const {
        std::cout << "The bird is flying!" << std::endl;
    }
};

// Derived class
class Sparrow : public Bird {
public:
    void fly() const override {
        std::cout << "The sparrow is flying!" << std::endl;
    }
};

// Another derived class
class Penguin : public Bird {
public:
    void fly() const override {
        // Penguins cannot fly, so this would violate LSP if used in the same context
        throw std::runtime_error("Penguins cannot fly!");
    }
};

void makeBirdFly(const Bird& bird) {
    bird.fly();
}

int main() {
    Sparrow sparrow;
    Penguin penguin;

    makeBirdFly(sparrow); // This works fine

    // The following line would throw an error
    //makeBirdFly(penguin); 

    return 0;
}

/*
#include<iostream>

class Employee{
    public:
     virtual int calculateSalary(){
        return 10000;
    }

    virtual int calculateBonus(){
        return 100000;
    }
};

class PermanentEmployee:public Employee{
    public:
    int calculateSalary()override{
        return 200000;
    }
};
class ContractualEmployee:public Employee(){
    public:
    int calculateSalary() override{
        return 15000;
    }
    int calculateBonus() override{
        throw new NotImplementedException();
    }
};
*/