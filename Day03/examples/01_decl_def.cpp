// Concept 1: declarations vs definitions
// Compile: g++ -std=c++17 -Wall -Wextra 01_decl_def.cpp -o 01_decl_def

#include <iostream>

int multiply(int a, int b);   // declaration only

int main() {
    std::cout << "3 * 7 = " << multiply(3, 7) << '\n';
    return 0;
}

int multiply(int a, int b) {  // definition
    return a * b;
}
