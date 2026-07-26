// Concept 4: Pages and buffers
// Day 147 -- Database-ish in process
// Compile: g++ -std=c++17 -Wall -Wextra 04_pages_and_buffers.cpp -o 04_pages_and_buffers

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Pages and buffers
static void demo() {
    std::cout << "Day 147 / Concept 4: Pages and buffers\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "pages_and_buffers";
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
