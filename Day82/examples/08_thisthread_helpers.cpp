// Concept 8: this_thread helpers
// Day 82 -- Threads basics
// Compile: g++ -std=c++17 -Wall -Wextra 08_thisthread_helpers.cpp -o 08_thisthread_helpers

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: this_thread helpers
static void demo() {
    std::cout << "Day 82 / Concept 8: this_thread helpers\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "thisthread_helpers";
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
