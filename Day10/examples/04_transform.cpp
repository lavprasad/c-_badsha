// Concept 4: std::transform — map one range to another
// Compile: g++ -std=c++17 -Wall -Wextra 04_transform.cpp -o 04_transform

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::vector<int> dst;

    std::transform(src.begin(), src.end(), std::back_inserter(dst),
                   [](int x) { return x * x; });

    std::cout << "squares: ";
    for (int x : dst) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
