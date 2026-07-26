// Concept 10: Ship thread_pool
// Day 185 -- Project: Thread pool library
// Compile: g++ -std=c++17 -Wall -Wextra 10_ship_threadpool.cpp -o 10_ship_threadpool

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Ship thread_pool
static void demo() {
    std::cout << "Day 185 / Concept 10: Ship thread_pool\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "ship_threadpool";
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
