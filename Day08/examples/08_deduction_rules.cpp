// Concept 8: template argument deduction rules (basics)
// Compile: g++ -std=c++17 -Wall -Wextra 08_deduction_rules.cpp -o 08_deduction_rules

#include <iostream>

template<typename T>
void show(T val) {
    std::cout << "by value: " << val << '\n';
}

template<typename T>
void show_ref(const T& val) {
    std::cout << "by const ref: " << val << '\n';
}

template<typename T>
void pair_same(T a, T b) {
    std::cout << a << ", " << b << " (same T)\n";
}

int main() {
    int x = 42;
    show(x);           // T = int
    show_ref(x);       // T = int (reference collapsed)
    pair_same(1, 2);   // T = int

    show(3.14);        // T = double
    // pair_same(1, 2.0);  // would fail: T = int vs T = double
    return 0;
}
