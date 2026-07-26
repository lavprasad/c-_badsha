// Concept 1: Latency vs throughput
// Day 145 -- Finance / low-latency mindset
// Compile: g++ -std=c++17 -Wall -Wextra 01_latency_vs_throughput.cpp -o 01_latency_vs_throughput

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Latency vs throughput
static void demo() {
    std::cout << "Day 145 / Concept 1: Latency vs throughput\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "latency_vs_throughput";
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
