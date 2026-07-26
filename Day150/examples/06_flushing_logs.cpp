// Concept 6: Flushing logs
// Day 150 -- Graceful shutdown & signals
// Compile: g++ -std=c++17 -Wall -Wextra 06_flushing_logs.cpp -o 06_flushing_logs

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Flushing logs
static void demo() {
    std::cout << "Day 150 / Concept 6: Flushing logs\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "flushing_logs";
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
