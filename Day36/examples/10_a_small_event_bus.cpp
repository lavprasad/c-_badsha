// Concept 10: A small event bus
// Day 36 -- std::function & callables
// Compile: g++ -std=c++17 -Wall -Wextra 10_a_small_event_bus.cpp -o 10_a_small_event_bus

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: A small event bus
static void demo() {
    std::cout << "Day 36 / Concept 10: A small event bus\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "a_small_event_bus";
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
