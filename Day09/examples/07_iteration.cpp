// Concept 7: iteration patterns
// Compile: g++ -std=c++17 -Wall -Wextra 07_iteration.cpp -o 07_iteration

#include <iostream>
#include <map>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30, 40};

    std::cout << "range-for: ";
    for (const auto& x : v) std::cout << x << ' ';
    std::cout << '\n';

    std::cout << "index: ";
    for (std::size_t i = 0; i < v.size(); ++i) std::cout << v[i] << ' ';
    std::cout << '\n';

    std::cout << "iterator: ";
    for (auto it = v.begin(); it != v.end(); ++it) std::cout << *it << ' ';
    std::cout << '\n';

    std::map<char, int> freq{{'a', 3}, {'b', 1}, {'c', 2}};
    std::cout << "map structured bindings:\n";
    for (const auto& [ch, count] : freq) {
        std::cout << "  " << ch << " -> " << count << '\n';
    }
    return 0;
}
