// Concept 9: Casting across bases
// Day 54 -- Multiple inheritance
// Compile: g++ -std=c++17 -Wall -Wextra 09_casting_across_bases.cpp -o 09_casting_across_bases

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Casting across bases
static void demo() {
    std::cout << "Day 54 / Concept 9: Casting across bases\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "casting_across_bases";
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
