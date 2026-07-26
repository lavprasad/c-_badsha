// Concept 8: Iteration order guarantees
// Day 40 -- Associative containers deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 08_iteration_order_guarantees.cpp -o 08_iteration_order_guarantees

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Iteration order guarantees
static void demo() {
    std::cout << "Day 40 / Concept 8: Iteration order guarantees\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "iteration_order_guarantees";
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
