// Concept 1: iterators — begin() / end()
// Compile: g++ -std=c++17 -Wall -Wextra 01_iterators.cpp -o 01_iterators

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30, 40, 50};

    std::cout << "iterator walk: ";
    for (auto it = std::begin(v); it != std::end(v); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';

    std::cout << "distance: " << (std::end(v) - std::begin(v)) << '\n';
    return 0;
}
