// Concept 8: Integer division surprises
// Day 107 -- Integer pitfalls advanced
// Compile: g++ -std=c++17 -Wall -Wextra 08_integer_division_surprises.cpp -o 08_integer_division_surprises

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Integer division surprises
static void demo() {
    std::cout << "Day 107 / Concept 8: Integer division surprises\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "integer_division_surprises";
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
