// Concept 5: lambda expressions — anonymous function objects
// Compile: g++ -std=c++17 -Wall -Wextra 05_lambdas.cpp -o 05_lambdas

#include <iostream>

int main() {
    auto add = [](int a, int b) { return a + b; };
    auto square = [](int x) -> int { return x * x; };

    std::cout << add(3, 4) << '\n';
    std::cout << square(5) << '\n';

    int factor = 10;
    auto scale = [factor](int x) { return x * factor; };
    std::cout << scale(7) << '\n';
    return 0;
}
