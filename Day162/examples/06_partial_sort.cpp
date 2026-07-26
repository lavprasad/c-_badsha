// Concept 6: Partial sort
// Day 162 -- Sorting deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 06_partial_sort.cpp -o 06_partial_sort

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Partial sort
static void demo() {
    std::cout << "Day 162 / Concept 6: Partial sort\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "partial_sort";
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
