// Concept 10: Fix a use-after-free
// Day 139 -- Sanitizers & tooling
// Compile: g++ -std=c++17 -Wall -Wextra 10_fix_a_use_after_free.cpp -o 10_fix_a_use_after_free

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Fix a use-after-free
static void demo() {
    std::cout << "Day 139 / Concept 10: Fix a use-after-free\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "fix_a_use_after_free";
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
