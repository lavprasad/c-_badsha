// Concept 9: Fatal vs error
// Day 73 -- Logging & diagnostics design
// Compile: g++ -std=c++17 -Wall -Wextra 09_fatal_vs_error.cpp -o 09_fatal_vs_error

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Fatal vs error
static void demo() {
    std::cout << "Day 73 / Concept 9: Fatal vs error\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "fatal_vs_error";
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
