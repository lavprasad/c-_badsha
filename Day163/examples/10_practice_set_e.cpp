// Concept 10: Practice set E
// Day 163 -- Binary search mastery
// Compile: g++ -std=c++17 -Wall -Wextra 10_practice_set_e.cpp -o 10_practice_set_e

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Practice set E
static void demo() {
    std::cout << "Day 163 / Concept 10: Practice set E\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "practice_set_e";
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
