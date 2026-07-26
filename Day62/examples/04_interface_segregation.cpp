// Concept 4: Interface segregation
// Day 62 -- SOLID in C++
// Compile: g++ -std=c++17 -Wall -Wextra 04_interface_segregation.cpp -o 04_interface_segregation

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Interface segregation
static void demo() {
    std::cout << "Day 62 / Concept 4: Interface segregation\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "interface_segregation";
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
