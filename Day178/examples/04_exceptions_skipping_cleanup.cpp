// Concept 4: Exceptions skipping cleanup
// Day 178 -- Memory leak hunting
// Compile: g++ -std=c++17 -Wall -Wextra 04_exceptions_skipping_cleanup.cpp -o 04_exceptions_skipping_cleanup

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Exceptions skipping cleanup
static void demo() {
    std::cout << "Day 178 / Concept 4: Exceptions skipping cleanup\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "exceptions_skipping_cleanup";
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
