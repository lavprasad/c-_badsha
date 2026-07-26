// Concept 3: ODR with inline
// Day 138 -- Inlining & linkage
// Compile: g++ -std=c++17 -Wall -Wextra 03_odr_with_inline.cpp -o 03_odr_with_inline

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: ODR with inline
static void demo() {
    std::cout << "Day 138 / Concept 3: ODR with inline\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "odr_with_inline";
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
