// Concept 3: Memoization
// Day 164 -- Dynamic programming intro
// Compile: g++ -std=c++17 -Wall -Wextra 03_memoization.cpp -o 03_memoization

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Memoization
static void demo() {
    std::cout << "Day 164 / Concept 3: Memoization\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "memoization";
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
