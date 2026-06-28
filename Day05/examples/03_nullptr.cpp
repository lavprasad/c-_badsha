// Concept 3: nullptr
// Compile: g++ -std=c++17 -Wall -Wextra 03_nullptr.cpp -o 03_nullptr

#include <iostream>

void print_if_valid(const int* p) {
    if (p == nullptr) {
        std::cout << "pointer is null — nothing to print\n";
    } else {
        std::cout << "value = " << *p << '\n';
    }
}

int main() {
    int x = 7;
    int* valid = &x;
    int* empty = nullptr;

    print_if_valid(valid);
    print_if_valid(empty);

    return 0;
}
