// Concept 2: access specifiers in inheritance
// Compile: g++ -std=c++17 -Wall -Wextra 02_access_inheritance.cpp -o 02_access_inheritance

#include <iostream>

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class PublicDerived : public Base {
public:
    void show() const {
        std::cout << pub << ' ' << prot << '\n';   // pub & prot accessible
        // std::cout << priv;   // ERROR: private in Base
    }
};

class ProtectedDerived : protected Base {
public:
    void show() const {
        std::cout << pub << ' ' << prot << '\n';
    }
};

int main() {
    PublicDerived pd;
    std::cout << pd.pub << '\n';   // OK — still public
    pd.show();

    ProtectedDerived rd;
    // std::cout << rd.pub << '\n';   // ERROR: pub is protected in ProtectedDerived
    rd.show();
    return 0;
}
