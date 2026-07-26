// Concept 7: DP on trees idea
// Day 165 -- DP patterns
// Compile: g++ -std=c++17 -Wall -Wextra 07_dp_on_trees_idea.cpp -o 07_dp_on_trees_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: DP on trees idea
static void demo() {
    std::cout << "Day 165 / Concept 7: DP on trees idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "dp_on_trees_idea";
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
