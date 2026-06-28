// Concept 8: range-for with algorithms — copy_if + back_inserter
// Compile: g++ -std=c++17 -Wall -Wextra 08_range_for_algorithms.cpp -o 08_range_for_algorithms

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> evens;

    std::copy_if(data.begin(), data.end(), std::back_inserter(evens),
                 [](int x) { return x % 2 == 0; });

    std::cout << "evens: ";
    for (int x : evens) std::cout << x << ' ';
    std::cout << '\n';

    std::cout << "original: ";
    for (int x : data) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
