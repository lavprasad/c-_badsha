// Concept 7: Sorting as preprocess
// Day 166 -- Greedy algorithms
// Compile: g++ -std=c++17 -Wall -Wextra 07_sorting_as_preprocess.cpp -o 07_sorting_as_preprocess

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Sorting as preprocess
static void demo() {
    std::cout << "Day 166 / Concept 7: Sorting as preprocess\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "sorting_as_preprocess";
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
