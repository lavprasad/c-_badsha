// Concept 8: object slicing — derived copied into base
// Compile: g++ -std=c++17 -Wall -Wextra 08_slicing.cpp -o 08_slicing

#include <iostream>

class Base {
public:
    virtual void tag() const { std::cout << "Base\n"; }
    virtual ~Base() = default;
};

class Derived : public Base {
    int extra = 42;
public:
    void tag() const override { std::cout << "Derived (extra=" << extra << ")\n"; }
};

int main() {
    Derived d;
    Base b = d;          // SLICING — Derived part discarded
    b.tag();             // prints "Base"

    Base& ref = d;       // no slicing
    ref.tag();           // prints "Derived (extra=42)"

    Base* ptr = &d;      // no slicing
    ptr->tag();          // prints "Derived (extra=42)"
    return 0;
}
