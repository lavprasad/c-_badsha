// Concept 1: Substitution failure idea
// Day 50 -- SFINAE & enable_if intro
// Compile: g++ -std=c++17 -Wall -Wextra 01_substitution_failure_idea.cpp -o 01_substitution_failure_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Substitution failure idea
static void demo() {
    std::cout << "Day 50 / Concept 1: Substitution failure idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "substitution_failure_idea";
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
