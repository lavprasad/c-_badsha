// Concept 5: Load balance
// Day 89 -- Parallel algorithms mindset
// Compile: g++ -std=c++17 -Wall -Wextra 05_load_balance.cpp -o 05_load_balance

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Load balance
static void demo() {
    std::cout << "Day 89 / Concept 5: Load balance\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "load_balance";
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
