// Concept 3: Use after free
// Day 81 -- Undefined behaviour catalogue
// Compile: g++ -std=c++17 -Wall -Wextra 03_use_after_free.cpp -o 03_use_after_free

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Use after free
static void demo() {
    std::cout << "Day 81 / Concept 3: Use after free\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "use_after_free";
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
