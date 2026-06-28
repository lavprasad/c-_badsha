// Concept 1: function templates — generic functions
// Compile: g++ -std=c++17 -Wall -Wextra 01_function_template.cpp -o 01_function_template

#include <iostream>
#include <string>

template<typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << maximum(3, 7) << '\n';
    std::cout << maximum(3.14, 2.71) << '\n';
    std::cout << maximum(std::string("apple"), std::string("banana")) << '\n';
    return 0;
}
