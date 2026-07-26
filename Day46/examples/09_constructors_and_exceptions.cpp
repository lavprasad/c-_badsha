// Concept 9: Constructors and exceptions
// Day 46 -- Exceptions advanced
// Compile: g++ -std=c++17 -Wall -Wextra 09_constructors_and_exceptions.cpp -o 09_constructors_and_exceptions

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Constructors and exceptions
static void demo() {
    std::cout << "Day 46 / Concept 9: Constructors and exceptions\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "constructors_and_exceptions";
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
