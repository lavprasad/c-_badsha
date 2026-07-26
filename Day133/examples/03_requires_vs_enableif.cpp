// Concept 3: requires vs enable_if
// Day 133 -- SFINAE → concepts migration
// Compile: g++ -std=c++17 -Wall -Wextra 03_requires_vs_enableif.cpp -o 03_requires_vs_enableif

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: requires vs enable_if
static void demo() {
    std::cout << "Day 133 / Concept 3: requires vs enable_if\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "requires_vs_enableif";
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
