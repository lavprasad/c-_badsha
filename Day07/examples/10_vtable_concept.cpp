// Concept 10: the vtable concept — sizeof & dynamic dispatch
// Compile: g++ -std=c++17 -Wall -Wextra 10_vtable_concept.cpp -o 10_vtable_concept

#include <iostream>

struct NoVirtual {
    int x;
    void foo() {}
};

struct WithVirtual {
    int x;
    virtual void foo() {}
    virtual ~WithVirtual() = default;
};

class Base {
public:
    virtual void a() { std::cout << "Base::a\n"; }
    virtual void b() { std::cout << "Base::b\n"; }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void a() override { std::cout << "Derived::a\n"; }
};

void call_through_base(Base* p) {
    p->a();   // one vtable lookup, then indirect call
    p->b();
}

int main() {
    std::cout << "sizeof(NoVirtual)    = " << sizeof(NoVirtual)    << '\n';
    std::cout << "sizeof(WithVirtual)  = " << sizeof(WithVirtual)  << '\n';
    std::cout << "  (WithVirtual is larger due to hidden vptr)\n\n";

    Derived d;
    Base* p = &d;
    call_through_base(p);
    return 0;
}
