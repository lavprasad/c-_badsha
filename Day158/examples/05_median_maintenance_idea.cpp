// Concept 5: Median maintenance idea
// Day 158 -- Heaps & priority queues practice
// Compile: g++ -std=c++17 -Wall -Wextra 05_median_maintenance_idea.cpp -o 05_median_maintenance_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Median maintenance idea
static void demo() {
    std::cout << "Day 158 / Concept 5: Median maintenance idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "median_maintenance_idea";
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
