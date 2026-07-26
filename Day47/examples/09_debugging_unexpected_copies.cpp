// Concept 9: Debugging unexpected copies
// Day 47 -- Move semantics advanced
// Compile: g++ -std=c++17 -Wall -Wextra 09_debugging_unexpected_copies.cpp -o 09_debugging_unexpected_copies

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Debugging unexpected copies
static void demo() {
    std::cout << "Day 47 / Concept 9: Debugging unexpected copies\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "debugging_unexpected_copies";
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
