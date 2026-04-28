// Concept 9: implicit vs explicit conversion (casts)
// Compile: g++ -std=c++17 -Wall -Wextra 09_casts.cpp -o 09_casts

#include <iostream>

int main() {
    int    a = 7, b = 2;

    double r1 = a / b;                              // 3.0 -- int division first
    double r2 = (double)a / b;                      // 3.5 -- C-style (avoid)
    double r3 = static_cast<double>(a) / b;         // 3.5 -- preferred

    std::cout << "r1 (int div, then convert) = " << r1 << '\n';
    std::cout << "r2 (C-style cast)          = " << r2 << '\n';
    std::cout << "r3 (static_cast)           = " << r3 << '\n';

    double pi = 3.99;
    int    n  = static_cast<int>(pi);    // 3 -- truncation toward zero
    std::cout << "static_cast<int>(3.99) = " << n << '\n';

    char ch = 'A';
    int  code = ch;                       // implicit char -> int
    std::cout << "code of 'A' = " << code << '\n';
    return 0;
}
