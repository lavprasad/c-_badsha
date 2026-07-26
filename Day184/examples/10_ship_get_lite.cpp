// Concept 10: Ship get-lite
// Day 184 -- Project: HTTP client lite (sockets)
// Compile: g++ -std=c++17 -Wall -Wextra 10_ship_get_lite.cpp -o 10_ship_get_lite

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Ship get-lite
static void demo() {
    std::cout << "Day 184 / Concept 10: Ship get-lite\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "ship_get_lite";
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
