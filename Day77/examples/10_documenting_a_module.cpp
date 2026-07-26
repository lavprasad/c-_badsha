// Concept 10: Documenting a module
// Day 77 -- Documentation & comments
// Compile: g++ -std=c++17 -Wall -Wextra 10_documenting_a_module.cpp -o 10_documenting_a_module

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Documenting a module
static void demo() {
    std::cout << "Day 77 / Concept 10: Documenting a module\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "documenting_a_module";
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
