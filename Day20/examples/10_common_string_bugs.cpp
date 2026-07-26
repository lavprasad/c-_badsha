// Concept 10: Common string bugs
// Day 20 -- std::string mastery
// Compile: g++ -std=c++17 -Wall -Wextra 10_common_string_bugs.cpp -o 10_common_string_bugs

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Common string bugs
static void demo() {
    std::cout << "Day 20 / Concept 10: Common string bugs\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "common_string_bugs";
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
