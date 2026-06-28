// Concept 2: the ternary operator ? :
// Compile: g++ -std=c++17 -Wall -Wextra 02_ternary.cpp -o 02_ternary

#include <iostream>

int main() {
    int a = -7;
    int b = 12;

    int max_val = (a > b) ? a : b;
    int abs_a   = (a >= 0) ? a : -a;

    std::cout << "max(" << a << ", " << b << ") = " << max_val << '\n';
    std::cout << "|" << a << "| = " << abs_a << '\n';

    return 0;
}
