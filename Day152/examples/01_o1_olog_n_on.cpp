// Concept 1: O(1)/O(log n)/O(n)
// Day 152 -- Complexity & Big-O practice
// Compile: g++ -std=c++17 -Wall -Wextra 01_o1_olog_n_on.cpp -o 01_o1_olog_n_on

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: O(1)/O(log n)/O(n)
static void demo() {
    std::cout << "Day 152 / Concept 1: O(1)/O(log n)/O(n)\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "o1_olog_n_on";
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
