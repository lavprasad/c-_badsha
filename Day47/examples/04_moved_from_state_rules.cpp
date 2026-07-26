// Concept 4: Moved-from state rules
// Day 47 -- Move semantics advanced
// Compile: g++ -std=c++17 -Wall -Wextra 04_moved_from_state_rules.cpp -o 04_moved_from_state_rules

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Moved-from state rules
static void demo() {
    std::cout << "Day 47 / Concept 4: Moved-from state rules\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "moved_from_state_rules";
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
