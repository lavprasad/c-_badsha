// Concept 3: virtual functions & dynamic dispatch
// Compile: g++ -std=c++17 -Wall -Wextra 03_virtual_functions.cpp -o 03_virtual_functions

#include <iostream>

class Animal {
public:
    virtual void speak() const {
        std::cout << "...\n";
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow!\n";
    }
};

int main() {
    Dog d;
    Cat c;
    Animal* animals[] = {&d, &c};

    for (Animal* a : animals) {
        a->speak();   // dynamic dispatch — correct sound for each
    }
    return 0;
}
