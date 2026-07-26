// Concept 4: std::get and structured bindings
// Day 30 -- std::pair & std::tuple
// Compile: g++ -std=c++17 -Wall -Wextra 04_stdget_and_structured_bindings.cpp -o 04_stdget_and_structured_bindings

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: std::get and structured bindings
static void demo() {
    std::cout << "Day 30 / Concept 4: std::get and structured bindings\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "stdget_and_structured_bindings";
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
