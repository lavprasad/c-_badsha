// Concept 6: Hot/cold split
// Day 144 -- Game-dev C++ patterns
// Compile: g++ -std=c++17 -Wall -Wextra 06_hot_cold_split.cpp -o 06_hot_cold_split

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Hot/cold split
static void demo() {
    std::cout << "Day 144 / Concept 6: Hot/cold split\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "hot_cold_split";
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
