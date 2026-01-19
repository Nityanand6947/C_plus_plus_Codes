
//Solution to the diamond problem using virtual keyword...:)

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.show();  // Calls A's show method unambiguously

    return 0;
}





