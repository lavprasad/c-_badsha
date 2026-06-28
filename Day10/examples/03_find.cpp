// Concept 3: std::find — linear search
// Compile: g++ -std=c++17 -Wall -Wextra 03_find.cpp -o 03_find

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {3, 7, 2, 9, 5, 7};

    auto it = std::find(v.begin(), v.end(), 9);
    if (it != v.end()) {
        std::cout << "found 9 at index " << (it - v.begin()) << '\n';
    }

    it = std::find(v.begin(), v.end(), 42);
    if (it == v.end()) {
        std::cout << "42 not found\n";
    }
    return 0;
}
