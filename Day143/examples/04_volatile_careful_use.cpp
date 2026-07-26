// Concept 4: volatile careful use
// Day 143 -- Embedded / freestanding mindset
// Compile: g++ -std=c++17 -Wall -Wextra 04_volatile_careful_use.cpp -o 04_volatile_careful_use

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: volatile careful use
static void demo() {
    std::cout << "Day 143 / Concept 4: volatile careful use\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "volatile_careful_use";
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
