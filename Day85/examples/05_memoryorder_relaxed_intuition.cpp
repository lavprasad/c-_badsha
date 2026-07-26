// Concept 5: memory_order relaxed intuition
// Day 85 -- atomics basics
// Compile: g++ -std=c++17 -Wall -Wextra 05_memoryorder_relaxed_intuition.cpp -o 05_memoryorder_relaxed_intuition

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: memory_order relaxed intuition
static void demo() {
    std::cout << "Day 85 / Concept 5: memory_order relaxed intuition\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "memoryorder_relaxed_intuition";
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
