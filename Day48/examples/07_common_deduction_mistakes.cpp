// Concept 7: Common deduction mistakes
// Day 48 -- References collapsing & forwarding
// Compile: g++ -std=c++17 -Wall -Wextra 07_common_deduction_mistakes.cpp -o 07_common_deduction_mistakes

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Common deduction mistakes
static void demo() {
    std::cout << "Day 48 / Concept 7: Common deduction mistakes\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "common_deduction_mistakes";
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
