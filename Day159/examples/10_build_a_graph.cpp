// Concept 10: Build a graph
// Day 159 -- Graphs basics
// Compile: g++ -std=c++17 -Wall -Wextra 10_build_a_graph.cpp -o 10_build_a_graph

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Build a graph
static void demo() {
    std::cout << "Day 159 / Concept 10: Build a graph\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "build_a_graph";
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
