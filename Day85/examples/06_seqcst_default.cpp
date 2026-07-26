// Concept 6: seq_cst default
// Day 85 -- atomics basics
// Compile: g++ -std=c++17 -Wall -Wextra 06_seqcst_default.cpp -o 06_seqcst_default

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: seq_cst default
static void demo() {
    std::cout << "Day 85 / Concept 6: seq_cst default\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "seqcst_default";
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
