// Concept 2: join vs detach
// Day 82 -- Threads basics
// Compile: g++ -std=c++17 -Wall -Wextra 02_join_vs_detach.cpp -o 02_join_vs_detach

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: join vs detach
static void demo() {
    std::cout << "Day 82 / Concept 2: join vs detach\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "join_vs_detach";
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
