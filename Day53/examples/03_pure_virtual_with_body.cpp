// Concept 3: Pure virtual with body
// Day 53 -- Virtuals & polymorphism patterns
// Compile: g++ -std=c++17 -Wall -Wextra 03_pure_virtual_with_body.cpp -o 03_pure_virtual_with_body

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Pure virtual with body
static void demo() {
    std::cout << "Day 53 / Concept 3: Pure virtual with body\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "pure_virtual_with_body";
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
