// Concept 9: Integer ↔ float conversions
// Day 25 -- Floating-point realities
// Compile: g++ -std=c++17 -Wall -Wextra 09_integer_float_conversions.cpp -o 09_integer_float_conversions

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Integer ↔ float conversions
static void demo() {
    std::cout << "Day 25 / Concept 9: Integer ↔ float conversions\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "integer_float_conversions";
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
