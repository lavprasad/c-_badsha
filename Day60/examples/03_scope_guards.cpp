// Concept 3: Scope guards
// Day 60 -- RAII patterns
// Compile: g++ -std=c++17 -Wall -Wextra 03_scope_guards.cpp -o 03_scope_guards

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Scope guards
static void demo() {
    std::cout << "Day 60 / Concept 3: Scope guards\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "scope_guards";
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
