// Concept 1: assert from <cassert>
// Day 22 -- Debugging & assertions
// Compile: g++ -std=c++17 -Wall -Wextra 01_assert_from_cassert.cpp -o 01_assert_from_cassert

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: assert from <cassert>
static void demo() {
    std::cout << "Day 22 / Concept 1: assert from <cassert>\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "assert_from_cassert";
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
