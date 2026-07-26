// Concept 10: Practice set B
// Day 155 -- Stacks & queues practice
// Compile: g++ -std=c++17 -Wall -Wextra 10_practice_set_b.cpp -o 10_practice_set_b

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Practice set B
static void demo() {
    std::cout << "Day 155 / Concept 10: Practice set B\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "practice_set_b";
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
