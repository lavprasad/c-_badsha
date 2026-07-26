// Concept 2: Self-check mains
// Day 74 -- Testing mindset (no framework)
// Compile: g++ -std=c++17 -Wall -Wextra 02_self_check_mains.cpp -o 02_self_check_mains

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Self-check mains
static void demo() {
    std::cout << "Day 74 / Concept 2: Self-check mains\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "self_check_mains";
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
