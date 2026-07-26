// Concept 10: Manual visitor
// Day 134 -- Reflection wishlist & current tricks
// Compile: g++ -std=c++17 -Wall -Wextra 10_manual_visitor.cpp -o 10_manual_visitor

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Manual visitor
static void demo() {
    std::cout << "Day 134 / Concept 10: Manual visitor\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "manual_visitor";
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
