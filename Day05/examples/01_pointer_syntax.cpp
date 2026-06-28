// Concept 1: pointer syntax deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 01_pointer_syntax.cpp -o 01_pointer_syntax

#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int* pa = &a;
    int* pb = &b;

    std::cout << "a=" << a << " at " << pa << '\n';
    std::cout << "b=" << b << " at " << pb << '\n';

    int* copy = pa;
    *copy = 99;
    std::cout << "a after *copy=99: " << a << '\n';

    return 0;
}
