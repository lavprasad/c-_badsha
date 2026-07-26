// Concept 7: User-defined literals intro
// Day 55 -- Operator overloading advanced
// Compile: g++ -std=c++17 -Wall -Wextra 07_user_defined_literals_intro.cpp -o 07_user_defined_literals_intro

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: User-defined literals intro
static void demo() {
    std::cout << "Day 55 / Concept 7: User-defined literals intro\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "user_defined_literals_intro";
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
