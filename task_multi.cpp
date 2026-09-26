#include <iostream>

class A {
public:
    void show() {
        std::cout << "A::show()\n";
    }
};

class B {
public:
    void show() {
        std::cout << "B::show()\n";
    }
};

class C : public A, public B {
};

int main() {
    C obj;

    // obj.show(); // Error: ambiguous — C inherits show() from both A and B

    obj.A::show(); // Resolve ambiguity by specifying the base class
    obj.B::show();

    return 0;
}
