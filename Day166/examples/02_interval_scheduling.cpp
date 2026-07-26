// Concept 2: Interval scheduling
// Day 166 -- Greedy algorithms
// Compile: g++ -std=c++17 -Wall -Wextra 02_interval_scheduling.cpp -o 02_interval_scheduling

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Interval scheduling
static void demo() {
    std::cout << "Day 166 / Concept 2: Interval scheduling\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "interval_scheduling";
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
