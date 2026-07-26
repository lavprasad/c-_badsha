// Concept 5: Passing large objects
// Day 137 -- Copy elision & ABI
// Compile: g++ -std=c++17 -Wall -Wextra 05_passing_large_objects.cpp -o 05_passing_large_objects

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Passing large objects
static void demo() {
    std::cout << "Day 137 / Concept 5: Passing large objects\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "passing_large_objects";
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
