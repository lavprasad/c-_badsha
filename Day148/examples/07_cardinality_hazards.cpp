// Concept 7: Cardinality hazards
// Day 148 -- Observability for C++ services
// Compile: g++ -std=c++17 -Wall -Wextra 07_cardinality_hazards.cpp -o 07_cardinality_hazards

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Cardinality hazards
static void demo() {
    std::cout << "Day 148 / Concept 7: Cardinality hazards\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "cardinality_hazards";
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
