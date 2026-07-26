// Concept 9: Measuring memory
// Day 98 -- OS memory & virtual memory
// Compile: g++ -std=c++17 -Wall -Wextra 09_measuring_memory.cpp -o 09_measuring_memory

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Measuring memory
static void demo() {
    std::cout << "Day 98 / Concept 9: Measuring memory\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "measuring_memory";
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
