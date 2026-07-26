// Concept 2: Atomic stop flags
// Day 150 -- Graceful shutdown & signals
// Compile: g++ -std=c++17 -Wall -Wextra 02_atomic_stop_flags.cpp -o 02_atomic_stop_flags

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Atomic stop flags
static void demo() {
    std::cout << "Day 150 / Concept 2: Atomic stop flags\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "atomic_stop_flags";
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
