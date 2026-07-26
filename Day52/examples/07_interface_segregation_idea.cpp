// Concept 7: Interface segregation idea
// Day 52 -- Inheritance design
// Compile: g++ -std=c++17 -Wall -Wextra 07_interface_segregation_idea.cpp -o 07_interface_segregation_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Interface segregation idea
static void demo() {
    std::cout << "Day 52 / Concept 7: Interface segregation idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "interface_segregation_idea";
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
