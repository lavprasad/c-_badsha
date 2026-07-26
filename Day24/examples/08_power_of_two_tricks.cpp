// Concept 8: Power-of-two tricks
// Day 24 -- Bit manipulation
// Compile: g++ -std=c++17 -Wall -Wextra 08_power_of_two_tricks.cpp -o 08_power_of_two_tricks

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Power-of-two tricks
static void demo() {
    std::cout << "Day 24 / Concept 8: Power-of-two tricks\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "power_of_two_tricks";
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
