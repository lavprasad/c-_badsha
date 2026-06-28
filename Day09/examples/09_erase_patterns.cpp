// Concept 9: erase patterns
// Compile: g++ -std=c++17 -Wall -Wextra 09_erase_patterns.cpp -o 09_erase_patterns

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 2, 4, 2, 5};

    v.erase(std::remove(v.begin(), v.end(), 2), v.end());
    std::cout << "after erase-remove 2: ";
    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';

    std::set<int> s = {1, 2, 3, 4, 5, 6};
    for (auto it = s.begin(); it != s.end(); ) {
        if (*it % 2 == 0) {
            it = s.erase(it);
        } else {
            ++it;
        }
    }
    std::cout << "set after removing evens: ";
    for (int x : s) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
