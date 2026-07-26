// Concept 7: Thread notes on statics
// Day 57 -- Static members
// Compile: g++ -std=c++17 -Wall -Wextra 07_thread_notes_on_statics.cpp -o 07_thread_notes_on_statics

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Thread notes on statics
static void demo() {
    std::cout << "Day 57 / Concept 7: Thread notes on statics\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "thread_notes_on_statics";
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
