// Concept 10: Refactoring to composition
// Day 52 -- Inheritance design
// Compile: g++ -std=c++17 -Wall -Wextra 10_refactoring_to_composition.cpp -o 10_refactoring_to_composition

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Refactoring to composition
static void demo() {
    std::cout << "Day 52 / Concept 10: Refactoring to composition\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "refactoring_to_composition";
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
