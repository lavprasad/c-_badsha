// Concept 2: vector reserve & capacity
// Compile: g++ -std=c++17 -Wall -Wextra 02_vector_reserve.cpp -o 02_vector_reserve

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    std::cout << "initial capacity: " << v.capacity() << '\n';

    v.reserve(100);
    std::cout << "after reserve(100): capacity=" << v.capacity()
              << " size=" << v.size() << '\n';

    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    std::cout << "after 10 push_back: capacity=" << v.capacity()
              << " size=" << v.size() << '\n';
    return 0;
}
