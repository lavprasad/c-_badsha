// Concept 9: Return value design
// Day 61 -- Value semantics vs reference semantics
// Compile: g++ -std=c++17 -Wall -Wextra 09_return_value_design.cpp -o 09_return_value_design

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Return value design
static void demo() {
    std::cout << "Day 61 / Concept 9: Return value design\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "return_value_design";
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
