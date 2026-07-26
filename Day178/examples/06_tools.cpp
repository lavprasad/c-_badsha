// Concept 6: Tools
// Day 178 -- Memory leak hunting
// Compile: g++ -std=c++17 -Wall -Wextra 06_tools.cpp -o 06_tools

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Tools
static void demo() {
    std::cout << "Day 178 / Concept 6: Tools\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "tools";
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
