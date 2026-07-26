// Concept 4: Space complexity
// Day 152 -- Complexity & Big-O practice
// Compile: g++ -std=c++17 -Wall -Wextra 04_space_complexity.cpp -o 04_space_complexity

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Space complexity
static void demo() {
    std::cout << "Day 152 / Concept 4: Space complexity\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "space_complexity";
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
