// Concept 2: multiple template parameters & overloading
// Compile: g++ -std=c++17 -Wall -Wextra 02_template_overload.cpp -o 02_template_overload

#include <iostream>

template<typename T, typename U>
void print_sum(T a, U b) {
    std::cout << a << " + " << b << " = " << (a + b) << '\n';
}

void print_sum(int a, int b) {
    std::cout << "[int overload] " << a + b << '\n';
}

int main() {
    print_sum(1, 2);       // non-template wins for two ints
    print_sum(1, 2.5);     // template: T=int, U=double
    print_sum(3.14, 2.0);  // template: T=double, U=double
    return 0;
}
