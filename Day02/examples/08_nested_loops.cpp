// Concept 8: nested loops
// Compile: g++ -std=c++17 -Wall -Wextra 08_nested_loops.cpp -o 08_nested_loops

#include <iostream>

int main() {
    const int size = 4;

    std::cout << "Multiplication table (1.." << size << "):\n";
    for (int row = 1; row <= size; ++row) {
        for (int col = 1; col <= size; ++col) {
            std::cout << row * col << '\t';
        }
        std::cout << '\n';
    }

    return 0;
}
