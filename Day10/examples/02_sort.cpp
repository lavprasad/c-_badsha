// Concept 2: std::sort — ordering elements in-place
// Compile: g++ -std=c++17 -Wall -Wextra 02_sort.cpp -o 02_sort

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {5, 2, 8, 1, 9, 3};

    std::sort(v.begin(), v.end());
    std::cout << "ascending: ";
    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';

    std::sort(v.begin(), v.end(), std::greater<int>());
    std::cout << "descending: ";
    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
