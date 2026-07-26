// Concept 3: if constexpr preview
// Day 51 -- constexpr & compile-time checks bridge
// Compile: g++ -std=c++17 -Wall -Wextra 03_if_constexpr_preview.cpp -o 03_if_constexpr_preview

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: if constexpr preview
static void demo() {
    std::cout << "Day 51 / Concept 3: if constexpr preview\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "if_constexpr_preview";
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
