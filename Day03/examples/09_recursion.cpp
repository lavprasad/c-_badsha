// Concept 9: recursion (introduction)
// Compile: g++ -std=c++17 -Wall -Wextra 09_recursion.cpp -o 09_recursion

#include <iostream>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    for (int i = 0; i <= 6; ++i) {
        std::cout << i << "! = " << factorial(i) << '\n';
    }
    return 0;
}
