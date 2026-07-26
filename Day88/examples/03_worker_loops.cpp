// Concept 3: Worker loops
// Day 88 -- Thread pools idea
// Compile: g++ -std=c++17 -Wall -Wextra 03_worker_loops.cpp -o 03_worker_loops

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Worker loops
static void demo() {
    std::cout << "Day 88 / Concept 3: Worker loops\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "worker_loops";
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
