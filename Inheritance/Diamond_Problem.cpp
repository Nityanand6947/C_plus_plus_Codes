#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.B::show(); // Error: Ambiguity as both B and C have inherited from A

    return 0;
}
