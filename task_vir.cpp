#include <iostream>

class Animal {
public:
    virtual void speak() const {
        std::cout << "Animal makes a sound\n";
    }

    virtual ~Animal() {
        std::cout << "Animal destructor\n";
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Dog barks\n";
    }

    ~Dog() override {
        std::cout << "Dog destructor\n";
    }
};

int main() {
    Animal* animal = new Dog();

    animal->speak(); // Calls Dog::speak() because speak() is virtual

    delete animal;   // Calls Dog::~Dog(), then Animal::~Animal()
    return 0;
}
