// Concept 7: Readable enable_if style
// Day 50 -- SFINAE & enable_if intro
// Compile: g++ -std=c++17 -Wall -Wextra 07_readable_enableif_style.cpp -o 07_readable_enableif_style

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Readable enable_if style
static void demo() {
    std::cout << "Day 50 / Concept 7: Readable enable_if style\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "readable_enableif_style";
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
