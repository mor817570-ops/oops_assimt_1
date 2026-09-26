#include <iostream>

class Calculator {
public:
    // Overloaded functions: same name, different parameters
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

class Animal {
public:
    virtual void speak() const {
        std::cout << "Animal makes a sound\n";
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    // Overrides Animal::speak()
    void speak() const override {
        std::cout << "Dog barks\n";
    }
};

int main() {
    Calculator calculator;
    std::cout << "Integer addition: " << calculator.add(3, 4) << '\n';
    std::cout << "Decimal addition: " << calculator.add(2.5, 1.5) << '\n';

    Dog dog;
    Animal& animal = dog;
    animal.speak(); // Calls Dog::speak() through virtual dispatch

    return 0;
}
