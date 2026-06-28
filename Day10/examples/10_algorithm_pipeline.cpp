// Concept 10: algorithm pipeline — sort, unique, transform
// Compile: g++ -std=c++17 -Wall -Wextra 10_algorithm_pipeline.cpp -o 10_algorithm_pipeline

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> data = {5, 2, 8, 2, 1, 9, 5, 3, 1, 7};

    std::sort(data.begin(), data.end());
    data.erase(std::unique(data.begin(), data.end()), data.end());

    std::cout << "deduplicated sorted: ";
    for (int x : data) std::cout << x << ' ';
    std::cout << '\n';

    std::vector<int> doubled;
    std::transform(data.begin(), data.end(), std::back_inserter(doubled),
                   [](int x) { return x * 2; });

    std::cout << "doubled: ";
    for (int x : doubled) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
