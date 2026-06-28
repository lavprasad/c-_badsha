// Concept 2: address-of (&) and dereference (*)
// Compile: g++ -std=c++17 -Wall -Wextra 02_addr_deref.cpp -o 02_addr_deref

#include <iostream>

int main() {
    int x = 42;
    int* p = &x;

    std::cout << "x   = " << x << '\n';
    std::cout << "&x  = " << &x << '\n';
    std::cout << "p   = " << p << '\n';
    std::cout << "*p  = " << *p << '\n';

    *p = 100;
    std::cout << "x after *p=100: " << x << '\n';

    return 0;
}
