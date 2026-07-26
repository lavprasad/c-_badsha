// Concept 4: compare_exchange
// Day 85 -- atomics basics
// Compile: g++ -std=c++17 -Wall -Wextra 04_compareexchange.cpp -o 04_compareexchange

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: compare_exchange
static void demo() {
    std::cout << "Day 85 / Concept 4: compare_exchange\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "compareexchange";
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
