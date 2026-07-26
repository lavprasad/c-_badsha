// Concept 9: Tests for compat
// Day 179 -- API breakage & compatibility
// Compile: g++ -std=c++17 -Wall -Wextra 09_tests_for_compat.cpp -o 09_tests_for_compat

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Tests for compat
static void demo() {
    std::cout << "Day 179 / Concept 9: Tests for compat\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "tests_for_compat";
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
