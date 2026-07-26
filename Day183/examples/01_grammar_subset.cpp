// Concept 1: Grammar subset
// Day 183 -- Project: JSON-ish mini parser
// Compile: g++ -std=c++17 -Wall -Wextra 01_grammar_subset.cpp -o 01_grammar_subset

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Grammar subset
static void demo() {
    std::cout << "Day 183 / Concept 1: Grammar subset\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "grammar_subset";
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
