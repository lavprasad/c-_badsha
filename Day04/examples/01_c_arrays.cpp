// Concept 1: C-style arrays
// Compile: g++ -std=c++17 -Wall -Wextra 01_c_arrays.cpp -o 01_c_arrays

#include <iostream>

int main() {
    int scores[5] = {90, 85, 72, 88, 95};

    std::cout << "Scores: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << scores[i] << ' ';
    }
    std::cout << '\n';

    scores[0] = 100;
    std::cout << "Updated first score: " << scores[0] << '\n';

    return 0;
}
