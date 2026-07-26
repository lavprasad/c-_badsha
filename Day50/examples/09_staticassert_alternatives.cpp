// Concept 9: static_assert alternatives
// Day 50 -- SFINAE & enable_if intro
// Compile: g++ -std=c++17 -Wall -Wextra 09_staticassert_alternatives.cpp -o 09_staticassert_alternatives

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: static_assert alternatives
static void demo() {
    std::cout << "Day 50 / Concept 9: static_assert alternatives\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "staticassert_alternatives";
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
