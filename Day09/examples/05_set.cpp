// Concept 5: std::set — sorted unique elements
// Compile: g++ -std=c++17 -Wall -Wextra 05_set.cpp -o 05_set

#include <iostream>
#include <set>

int main() {
    std::set<int> s = {5, 1, 3, 3, 9, 1, 7};

    std::cout << "set (sorted, unique): ";
    for (int x : s) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    std::cout << "contains 3? " << (s.count(3) > 0 ? "yes" : "no") << '\n';
    std::cout << "contains 4? " << (s.count(4) > 0 ? "yes" : "no") << '\n';
    return 0;
}
