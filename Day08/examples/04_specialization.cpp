// Concept 4: template specialization (intro)
// Compile: g++ -std=c++17 -Wall -Wextra 04_specialization.cpp -o 04_specialization

#include <iostream>

template<typename T>
class Printer {
public:
    static void print(T v) {
        std::cout << "value: " << v << '\n';
    }
};

template<>
class Printer<bool> {
public:
    static void print(bool v) {
        std::cout << "bool: " << (v ? "true" : "false") << '\n';
    }
};

int main() {
    Printer<int>::print(42);
    Printer<double>::print(3.14);
    Printer<bool>::print(true);
    return 0;
}
