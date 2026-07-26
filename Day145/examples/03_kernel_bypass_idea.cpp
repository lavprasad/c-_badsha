// Concept 3: Kernel bypass idea
// Day 145 -- Finance / low-latency mindset
// Compile: g++ -std=c++17 -Wall -Wextra 03_kernel_bypass_idea.cpp -o 03_kernel_bypass_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Kernel bypass idea
static void demo() {
    std::cout << "Day 145 / Concept 3: Kernel bypass idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "kernel_bypass_idea";
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
