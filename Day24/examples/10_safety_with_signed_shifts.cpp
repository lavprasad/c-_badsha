// Concept 10: Safety with signed shifts
// Day 24 -- Bit manipulation
// Compile: g++ -std=c++17 -Wall -Wextra 10_safety_with_signed_shifts.cpp -o 10_safety_with_signed_shifts

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Safety with signed shifts
static void demo() {
    std::cout << "Day 24 / Concept 10: Safety with signed shifts\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "safety_with_signed_shifts";
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
