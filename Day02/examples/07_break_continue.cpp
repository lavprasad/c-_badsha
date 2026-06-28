// Concept 7: break and continue
// Compile: g++ -std=c++17 -Wall -Wextra 07_break_continue.cpp -o 07_break_continue

#include <iostream>

int main() {
    std::cout << "Odd numbers 1..10 (skip evens with continue):\n";
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        std::cout << i << ' ';
    }
    std::cout << '\n';

    std::cout << "First multiple of 7 above 50 (break early):\n";
    for (int n = 51; ; ++n) {
        if (n % 7 == 0) {
            std::cout << n << '\n';
            break;
        }
    }

    return 0;
}
