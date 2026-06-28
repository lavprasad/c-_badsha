// Concept 8: inline functions
// Compile: g++ -std=c++17 -Wall -Wextra 08_inline.cpp -o 08_inline

#include <iostream>

inline int clamp(int value, int lo, int hi) {
    if (value < lo) return lo;
    if (value > hi) return hi;
    return value;
}

int main() {
    std::cout << "clamp(15, 0, 10) = " << clamp(15, 0, 10) << '\n';
    std::cout << "clamp(-3, 0, 10)  = " << clamp(-3, 0, 10) << '\n';
    std::cout << "clamp(5, 0, 10)   = " << clamp(5, 0, 10) << '\n';
    return 0;
}
