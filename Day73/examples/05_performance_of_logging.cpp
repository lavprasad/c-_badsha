// Concept 5: Performance of logging
// Day 73 -- Logging & diagnostics design
// Compile: g++ -std=c++17 -Wall -Wextra 05_performance_of_logging.cpp -o 05_performance_of_logging

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Performance of logging
static void demo() {
    std::cout << "Day 73 / Concept 5: Performance of logging\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "performance_of_logging";
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
