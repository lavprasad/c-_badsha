// Concept 8: Scope honesty
// Day 211 -- Capstone: portfolio polish
// Compile: g++ -std=c++17 -Wall -Wextra 08_scope_honesty.cpp -o 08_scope_honesty

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Scope honesty
static void demo() {
    std::cout << "Day 211 / Concept 8: Scope honesty\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "scope_honesty";
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
