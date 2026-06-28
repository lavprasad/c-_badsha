// Concept 1: if, else if, and else
// Compile: g++ -std=c++17 -Wall -Wextra 01_if_else.cpp -o 01_if_else

#include <iostream>

int main() {
    int score = 85;

    if (score >= 90) {
        std::cout << "Grade: A\n";
    } else if (score >= 80) {
        std::cout << "Grade: B\n";
    } else if (score >= 70) {
        std::cout << "Grade: C\n";
    } else {
        std::cout << "Grade: below C\n";
    }

    return 0;
}
