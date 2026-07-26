// Concept 3: Implementation sketch
// Day 136 -- Small Buffer Optimization
// Compile: g++ -std=c++17 -Wall -Wextra 03_implementation_sketch.cpp -o 03_implementation_sketch

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Implementation sketch
static void demo() {
    std::cout << "Day 136 / Concept 3: Implementation sketch\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "implementation_sketch";
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
