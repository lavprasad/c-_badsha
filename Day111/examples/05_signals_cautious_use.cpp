// Concept 5: signals cautious use
// Day 111 -- POSIX essentials for C++
// Compile: g++ -std=c++17 -Wall -Wextra 05_signals_cautious_use.cpp -o 05_signals_cautious_use

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: signals cautious use
static void demo() {
    std::cout << "Day 111 / Concept 5: signals cautious use\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "signals_cautious_use";
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
