// Concept 8: Leap seconds awareness
// Day 122 -- Calendar & timezone (C++20)
// Compile: g++ -std=c++17 -Wall -Wextra 08_leap_seconds_awareness.cpp -o 08_leap_seconds_awareness

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Leap seconds awareness
static void demo() {
    std::cout << "Day 122 / Concept 8: Leap seconds awareness\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "leap_seconds_awareness";
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
