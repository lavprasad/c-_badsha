// Concept 8: Iteration
// Day 115 -- std::span
// Compile: g++ -std=c++17 -Wall -Wextra 08_iteration.cpp -o 08_iteration

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Iteration
static void demo() {
    std::cout << "Day 115 / Concept 8: Iteration\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "iteration";
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
