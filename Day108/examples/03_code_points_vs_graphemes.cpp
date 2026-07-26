// Concept 3: Code points vs graphemes
// Day 108 -- String encoding & Unicode lite
// Compile: g++ -std=c++17 -Wall -Wextra 03_code_points_vs_graphemes.cpp -o 03_code_points_vs_graphemes

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Code points vs graphemes
static void demo() {
    std::cout << "Day 108 / Concept 3: Code points vs graphemes\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "code_points_vs_graphemes";
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
