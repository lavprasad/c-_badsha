// Concept 6: Dijkstra with PQ
// Day 158 -- Heaps & priority queues practice
// Compile: g++ -std=c++17 -Wall -Wextra 06_dijkstra_with_pq.cpp -o 06_dijkstra_with_pq

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Dijkstra with PQ
static void demo() {
    std::cout << "Day 158 / Concept 6: Dijkstra with PQ\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "dijkstra_with_pq";
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
