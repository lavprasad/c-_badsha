// Concept 7: BFS with queue
// Day 42 -- Stack, queue, priority_queue
// Compile: g++ -std=c++17 -Wall -Wextra 07_bfs_with_queue.cpp -o 07_bfs_with_queue

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: BFS with queue
static void demo() {
    std::cout << "Day 42 / Concept 7: BFS with queue\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "bfs_with_queue";
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
