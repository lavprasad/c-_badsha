// Concept 10: Elision demo
// Day 137 -- Copy elision & ABI
// Compile: g++ -std=c++17 -Wall -Wextra 10_elision_demo.cpp -o 10_elision_demo

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Elision demo
static void demo() {
    std::cout << "Day 137 / Concept 10: Elision demo\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "elision_demo";
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
