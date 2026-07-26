// Concept 8: noexcept move importance
// Day 47 -- Move semantics advanced
// Compile: g++ -std=c++17 -Wall -Wextra 08_noexcept_move_importance.cpp -o 08_noexcept_move_importance

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: noexcept move importance
static void demo() {
    std::cout << "Day 47 / Concept 8: noexcept move importance\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "noexcept_move_importance";
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
