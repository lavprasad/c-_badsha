// Concept 10: A refactor walkthrough
// Day 76 -- Refactoring C++ safely
// Compile: g++ -std=c++17 -Wall -Wextra 10_a_refactor_walkthrough.cpp -o 10_a_refactor_walkthrough

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: A refactor walkthrough
static void demo() {
    std::cout << "Day 76 / Concept 10: A refactor walkthrough\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "a_refactor_walkthrough";
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
