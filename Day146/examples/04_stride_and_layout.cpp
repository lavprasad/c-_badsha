// Concept 4: Stride and layout
// Day 146 -- Scientific computing C++
// Compile: g++ -std=c++17 -Wall -Wextra 04_stride_and_layout.cpp -o 04_stride_and_layout

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Stride and layout
static void demo() {
    std::cout << "Day 146 / Concept 4: Stride and layout\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "stride_and_layout";
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
