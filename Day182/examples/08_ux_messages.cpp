// Concept 8: UX messages
// Day 182 -- Project: CLI text tools
// Compile: g++ -std=c++17 -Wall -Wextra 08_ux_messages.cpp -o 08_ux_messages

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: UX messages
static void demo() {
    std::cout << "Day 182 / Concept 8: UX messages\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "ux_messages";
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
