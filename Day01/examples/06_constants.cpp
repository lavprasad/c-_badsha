// Concept 6: const vs constexpr vs #define
// Compile: g++ -std=c++17 -Wall -Wextra 06_constants.cpp -o 06_constants

#include <iostream>

#define MAX_OLD 100                 // text substitution, no type, global
const     int  MAX_RUN = 200;       // const at runtime
constexpr int  MAX_CMP = 300;       // available at compile time

constexpr int square(int n) { return n * n; }

int main() {
    int arr1[MAX_OLD];   // fine, but MAX_OLD has no type/scope safety
    int arr2[MAX_CMP];   // OK: array size needs a constant expression
    // int arr3[MAX_RUN]; // pre-C++14: would be VLA (a GCC extension); avoid

    constexpr int s = square(7);    // computed at COMPILE time

    std::cout << "MAX_OLD = " << MAX_OLD << '\n';
    std::cout << "MAX_RUN = " << MAX_RUN << '\n';
    std::cout << "MAX_CMP = " << MAX_CMP << '\n';
    std::cout << "square(7) at compile time = " << s << '\n';
    std::cout << "sizeof(arr1) = " << sizeof(arr1) << '\n';
    std::cout << "sizeof(arr2) = " << sizeof(arr2) << '\n';
    return 0;
}
