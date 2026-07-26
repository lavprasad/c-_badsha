// Concept 10: One-definition rule (ODR)
// Day 18 -- Header / source split
// Compile: g++ -std=c++17 -Wall -Wextra 10_one_definition_rule_odr.cpp -o 10_one_definition_rule_odr

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: One-definition rule (ODR)
static void demo() {
    std::cout << "Day 18 / Concept 10: One-definition rule (ODR)\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "one_definition_rule_odr";
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
