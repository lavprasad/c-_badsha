// Concept 6: Strangle pattern
// Day 200 -- Legacy modernization
// Compile: g++ -std=c++17 -Wall -Wextra 06_strangle_pattern.cpp -o 06_strangle_pattern

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Strangle pattern
static void demo() {
    std::cout << "Day 200 / Concept 6: Strangle pattern\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "strangle_pattern";
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
