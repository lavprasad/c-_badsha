// Concept 6: function overloading
// Compile: g++ -std=c++17 -Wall -Wextra 06_overloading.cpp -o 06_overloading

#include <iostream>

int max_of(int a, int b) {
    return (a > b) ? a : b;
}

double max_of(double a, double b) {
    return (a > b) ? a : b;
}

int max_of(int a, int b, int c) {
    return max_of(max_of(a, b), c);
}

int main() {
    std::cout << "max(3, 7)       = " << max_of(3, 7) << '\n';
    std::cout << "max(3.5, 2.1)   = " << max_of(3.5, 2.1) << '\n';
    std::cout << "max(1, 9, 4)    = " << max_of(1, 9, 4) << '\n';
    return 0;
}
