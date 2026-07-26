// Concept 7: Observing with get / *
// Day 44 -- unique_ptr mastery
// Compile: g++ -std=c++17 -Wall -Wextra 07_observing_with_get.cpp -o 07_observing_with_get

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Observing with get / *
static void demo() {
    std::cout << "Day 44 / Concept 7: Observing with get / *\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "observing_with_get";
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
