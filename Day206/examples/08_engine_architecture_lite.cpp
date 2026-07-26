// Concept 8: Engine architecture lite
// Day 206 -- Graphics pipeline awareness
// Compile: g++ -std=c++17 -Wall -Wextra 08_engine_architecture_lite.cpp -o 08_engine_architecture_lite

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Engine architecture lite
static void demo() {
    std::cout << "Day 206 / Concept 8: Engine architecture lite\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "engine_architecture_lite";
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
