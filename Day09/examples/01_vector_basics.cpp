// Concept 1: std::vector — dynamic array
// Compile: g++ -std=c++17 -Wall -Wextra 01_vector_basics.cpp -o 01_vector_basics

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30};
    v.push_back(40);
    v.emplace_back(50);

    std::cout << "size=" << v.size() << " front=" << v.front()
              << " back=" << v.back() << '\n';

    for (int x : v) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}
