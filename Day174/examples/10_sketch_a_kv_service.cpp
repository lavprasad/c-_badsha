// Concept 10: Sketch a KV service
// Day 174 -- System design lite for C++ services
// Compile: g++ -std=c++17 -Wall -Wextra 10_sketch_a_kv_service.cpp -o 10_sketch_a_kv_service

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Sketch a KV service
static void demo() {
    std::cout << "Day 174 / Concept 10: Sketch a KV service\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "sketch_a_kv_service";
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
