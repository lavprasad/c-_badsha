// Concept 2: pass by value
// Compile: g++ -std=c++17 -Wall -Wextra 02_pass_by_value.cpp -o 02_pass_by_value

#include <iostream>

void try_to_change(int x) {
    x = 99;
    std::cout << "  inside function: x = " << x << '\n';
}

int main() {
    int n = 5;
    std::cout << "before call: n = " << n << '\n';
    try_to_change(n);
    std::cout << "after call:  n = " << n << '\n';
    return 0;
}
