// Concept 9: Flamegraph mindset
// Day 100 -- Profiling basics
// Compile: g++ -std=c++17 -Wall -Wextra 09_flamegraph_mindset.cpp -o 09_flamegraph_mindset

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Flamegraph mindset
static void demo() {
    std::cout << "Day 100 / Concept 9: Flamegraph mindset\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "flamegraph_mindset";
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
