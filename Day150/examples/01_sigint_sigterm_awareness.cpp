// Concept 1: SIGINT/SIGTERM awareness
// Day 150 -- Graceful shutdown & signals
// Compile: g++ -std=c++17 -Wall -Wextra 01_sigint_sigterm_awareness.cpp -o 01_sigint_sigterm_awareness

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: SIGINT/SIGTERM awareness
static void demo() {
    std::cout << "Day 150 / Concept 1: SIGINT/SIGTERM awareness\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "sigint_sigterm_awareness";
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
