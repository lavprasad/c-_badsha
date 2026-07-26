// Concept 4: Read-mostly patterns
// Day 90 -- Concurrent data structures lite
// Compile: g++ -std=c++17 -Wall -Wextra 04_read_mostly_patterns.cpp -o 04_read_mostly_patterns

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Read-mostly patterns
static void demo() {
    std::cout << "Day 90 / Concept 4: Read-mostly patterns\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "read_mostly_patterns";
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
