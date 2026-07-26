// Concept 7: Over-abstracting smell
// Day 62 -- SOLID in C++
// Compile: g++ -std=c++17 -Wall -Wextra 07_over_abstracting_smell.cpp -o 07_over_abstracting_smell

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Over-abstracting smell
static void demo() {
    std::cout << "Day 62 / Concept 7: Over-abstracting smell\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "over_abstracting_smell";
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
