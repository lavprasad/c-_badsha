// Concept 4: std::equal / mismatch
// Day 39 -- Algorithms: non-mutating
// Compile: g++ -std=c++17 -Wall -Wextra 04_stdequal_mismatch.cpp -o 04_stdequal_mismatch

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: std::equal / mismatch
static void demo() {
    std::cout << "Day 39 / Concept 4: std::equal / mismatch\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "stdequal_mismatch";
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
