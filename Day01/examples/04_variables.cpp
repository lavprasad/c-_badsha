// Concept 4: variables & primitive data types
// Compile: g++ -std=c++17 -Wall -Wextra 04_variables.cpp -o 04_variables

#include <iostream>

int main() {
    int    a = 42;
    double pi = 3.14159;
    char   letter = 'L';
    bool   isReady = true;

    int b(7);          // direct init
    int c{9};          // brace init (preferred in modern C++)
    int d{};           // value-init -> 0

    std::cout << "a       = " << a       << '\n';
    std::cout << "pi      = " << pi      << '\n';
    std::cout << "letter  = " << letter  << '\n';
    std::cout << "isReady = " << std::boolalpha << isReady << '\n';
    std::cout << "b c d   = " << b << ' ' << c << ' ' << d << '\n';

    // int x;            // <- DON'T do this and then read x; UB.
    // std::cout << x;
    return 0;
}
