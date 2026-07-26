// Concept 8: Error codes vs exceptions
// Day 34 -- filesystem (C++17)
// Compile: g++ -std=c++17 -Wall -Wextra 08_error_codes_vs_exceptions.cpp -o 08_error_codes_vs_exceptions

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Error codes vs exceptions
static void demo() {
    std::cout << "Day 34 / Concept 8: Error codes vs exceptions\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "error_codes_vs_exceptions";
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
