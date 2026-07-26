// Concept 8: CI matrix
// Day 201 -- Cross-platform C++
// Compile: g++ -std=c++17 -Wall -Wextra 08_ci_matrix.cpp -o 08_ci_matrix

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: CI matrix
static void demo() {
    std::cout << "Day 201 / Concept 8: CI matrix\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "ci_matrix";
    std::cout << "tag=" << tag << " size=" << tag.size() << '\n';

    // 3) Leave a clear extension point for your own experiments.
    auto describe = [](const std::string& s) {
        return s + " -- extend this demo";
    };
    std::cout << describe("ok") << '\n';
}

int main() {
    demo();
    return 0;
}
