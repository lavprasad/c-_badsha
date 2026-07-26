// Concept 9: Header size impact
// Day 58 -- Nested types & enums in classes
// Compile: g++ -std=c++17 -Wall -Wextra 09_header_size_impact.cpp -o 09_header_size_impact

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Header size impact
static void demo() {
    std::cout << "Day 58 / Concept 9: Header size impact\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "header_size_impact";
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
