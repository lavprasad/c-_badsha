// Concept 6: references — syntax and rules
// Compile: g++ -std=c++17 -Wall -Wextra 06_references.cpp -o 06_references

#include <iostream>

void double_value(int& n) {
    n *= 2;
}

int main() {
    int x = 21;
    int& alias = x;

    alias = 42;
    std::cout << "x via name:  " << x << '\n';
    std::cout << "x via alias: " << alias << '\n';

    double_value(x);
    std::cout << "after double_value: " << x << '\n';

    return 0;
}
