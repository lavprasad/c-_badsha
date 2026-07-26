// Concept 8: Liskov substitution intuition
// Day 52 -- Inheritance design
// Compile: g++ -std=c++17 -Wall -Wextra 08_liskov_substitution_intuition.cpp -o 08_liskov_substitution_intuition

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Liskov substitution intuition
static void demo() {
    std::cout << "Day 52 / Concept 8: Liskov substitution intuition\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "liskov_substitution_intuition";
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
