// Concept 10: Optimize a hot loop
// Day 101 -- Optimization principles
// Compile: g++ -std=c++17 -Wall -Wextra 10_optimize_a_hot_loop.cpp -o 10_optimize_a_hot_loop

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Optimize a hot loop
static void demo() {
    std::cout << "Day 101 / Concept 10: Optimize a hot loop\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "optimize_a_hot_loop";
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
