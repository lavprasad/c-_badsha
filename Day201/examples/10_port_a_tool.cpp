// Concept 10: Port a tool
// Day 201 -- Cross-platform C++
// Compile: g++ -std=c++17 -Wall -Wextra 10_port_a_tool.cpp -o 10_port_a_tool

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Port a tool
static void demo() {
    std::cout << "Day 201 / Concept 10: Port a tool\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "port_a_tool";
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
