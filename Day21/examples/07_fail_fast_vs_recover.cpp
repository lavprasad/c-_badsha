// Concept 7: Fail-fast vs recover
// Day 21 -- Error handling without exceptions
// Compile: g++ -std=c++17 -Wall -Wextra 07_fail_fast_vs_recover.cpp -o 07_fail_fast_vs_recover

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Fail-fast vs recover
static void demo() {
    std::cout << "Day 21 / Concept 7: Fail-fast vs recover\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "fail_fast_vs_recover";
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
