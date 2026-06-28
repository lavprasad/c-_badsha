// Concept 9: count_if and accumulate
// Compile: g++ -std=c++17 -Wall -Wextra 09_count_accumulate.cpp -o 09_count_accumulate

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int evens = static_cast<int>(std::count_if(v.begin(), v.end(),
                                                  [](int x) { return x % 2 == 0; }));
    int total = std::accumulate(v.begin(), v.end(), 0);
    int sum_evens = std::accumulate(v.begin(), v.end(), 0,
        [](int acc, int x) { return x % 2 == 0 ? acc + x : acc; });

    std::cout << "evens count: " << evens << '\n';
    std::cout << "total: " << total << '\n';
    std::cout << "sum of evens: " << sum_evens << '\n';
    return 0;
}
