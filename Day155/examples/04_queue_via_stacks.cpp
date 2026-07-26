// Concept 4: Queue via stacks
// Day 155 -- Stacks & queues practice
// Compile: g++ -std=c++17 -Wall -Wextra 04_queue_via_stacks.cpp -o 04_queue_via_stacks

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Queue via stacks
static void demo() {
    std::cout << "Day 155 / Concept 4: Queue via stacks\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "queue_via_stacks";
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
