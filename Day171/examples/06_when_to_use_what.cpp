// Concept 6: When to use what
// Day 171 -- Advanced data structures lite
// Compile: g++ -std=c++17 -Wall -Wextra 06_when_to_use_what.cpp -o 06_when_to_use_what

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: When to use what
static void demo() {
    std::cout << "Day 171 / Concept 6: When to use what\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "when_to_use_what";
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
