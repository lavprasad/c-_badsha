// Concept 7: Ownership across boundary
// Day 110 -- C interop
// Compile: g++ -std=c++17 -Wall -Wextra 07_ownership_across_boundary.cpp -o 07_ownership_across_boundary

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Ownership across boundary
static void demo() {
    std::cout << "Day 110 / Concept 7: Ownership across boundary\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "ownership_across_boundary";
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
