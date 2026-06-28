// Concept 3: pass by reference
// Compile: g++ -std=c++17 -Wall -Wextra 03_pass_by_reference.cpp -o 03_pass_by_reference

#include <iostream>

void swap_values(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    std::cout << "before: x=" << x << ", y=" << y << '\n';
    swap_values(x, y);
    std::cout << "after:  x=" << x << ", y=" << y << '\n';
    return 0;
}
