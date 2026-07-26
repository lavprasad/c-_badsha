// Concept 8: Graph catalog
// Day 192 -- C++ for interviews: coding patterns
// Compile: g++ -std=c++17 -Wall -Wextra 08_graph_catalog.cpp -o 08_graph_catalog

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Graph catalog
static void demo() {
    std::cout << "Day 192 / Concept 8: Graph catalog\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "graph_catalog";
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
