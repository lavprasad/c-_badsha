// Concept 3: Testing a bit
// Day 24 -- Bit manipulation
// Compile: g++ -std=c++17 -Wall -Wextra 03_testing_a_bit.cpp -o 03_testing_a_bit

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Testing a bit
static void demo() {
    std::cout << "Day 24 / Concept 3: Testing a bit\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "testing_a_bit";
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
