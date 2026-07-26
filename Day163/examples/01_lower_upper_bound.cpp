// Concept 1: Lower/upper bound
// Day 163 -- Binary search mastery
// Compile: g++ -std=c++17 -Wall -Wextra 01_lower_upper_bound.cpp -o 01_lower_upper_bound

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Lower/upper bound
static void demo() {
    std::cout << "Day 163 / Concept 1: Lower/upper bound\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "lower_upper_bound";
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
