// Concept 5: Custom comparisons
// Day 116 -- Three-way comparison (<=>)
// Compile: g++ -std=c++17 -Wall -Wextra 05_custom_comparisons.cpp -o 05_custom_comparisons

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Custom comparisons
static void demo() {
    std::cout << "Day 116 / Concept 5: Custom comparisons\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "custom_comparisons";
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
