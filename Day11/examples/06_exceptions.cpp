// Concept 6: try / catch / throw — exception basics
// Compile: g++ -std=c++17 -Wall -Wextra 06_exceptions.cpp -o 06_exceptions

#include <iostream>
#include <stdexcept>
#include <string>

double divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("division by zero");
    }
    return a / b;
}

int main() {
    try {
        std::cout << divide(10, 2) << '\n';
        std::cout << divide(5, 0) << '\n';
    } catch (const std::runtime_error& e) {
        std::cerr << "caught: " << e.what() << '\n';
    }

    try {
        throw std::invalid_argument("bad input");
    } catch (const std::exception& e) {
        std::cerr << "caught base: " << e.what() << '\n';
    }
    return 0;
}
