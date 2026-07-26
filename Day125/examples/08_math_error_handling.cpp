// Concept 8: Math error handling
// Day 125 -- Numbers & math updates
// Compile: g++ -std=c++17 -Wall -Wextra 08_math_error_handling.cpp -o 08_math_error_handling

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Math error handling
static void demo() {
    std::cout << "Day 125 / Concept 8: Math error handling\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "math_error_handling";
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
