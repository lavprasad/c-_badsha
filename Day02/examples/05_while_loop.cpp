// Concept 5: the while loop
// Compile: g++ -std=c++17 -Wall -Wextra 05_while_loop.cpp -o 05_while_loop

#include <iostream>

int main() {
    int n = 100;
    int steps = 0;

    while (n > 1) {
        n /= 2;
        ++steps;
    }

    std::cout << "Halving 100 until <= 1 took " << steps << " steps\n";
    std::cout << "Final value: " << n << '\n';

    return 0;
}
