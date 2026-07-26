// Concept 8: Cold vs hot paths
// Day 99 -- Caching & locality
// Compile: g++ -std=c++17 -Wall -Wextra 08_cold_vs_hot_paths.cpp -o 08_cold_vs_hot_paths

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Cold vs hot paths
static void demo() {
    std::cout << "Day 99 / Concept 8: Cold vs hot paths\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "cold_vs_hot_paths";
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
