// Concept 10: Fuzz a parser entry
// Day 141 -- Fuzzing mindset
// Compile: g++ -std=c++17 -Wall -Wextra 10_fuzz_a_parser_entry.cpp -o 10_fuzz_a_parser_entry

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Fuzz a parser entry
static void demo() {
    std::cout << "Day 141 / Concept 10: Fuzz a parser entry\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "fuzz_a_parser_entry";
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
