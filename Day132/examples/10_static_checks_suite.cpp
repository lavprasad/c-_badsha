// Concept 10: Static checks suite
// Day 132 -- Type traits library tour
// Compile: g++ -std=c++17 -Wall -Wextra 10_static_checks_suite.cpp -o 10_static_checks_suite

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Static checks suite
static void demo() {
    std::cout << "Day 132 / Concept 10: Static checks suite\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "static_checks_suite";
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
