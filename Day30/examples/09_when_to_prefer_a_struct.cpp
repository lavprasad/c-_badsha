// Concept 9: When to prefer a struct
// Day 30 -- std::pair & std::tuple
// Compile: g++ -std=c++17 -Wall -Wextra 09_when_to_prefer_a_struct.cpp -o 09_when_to_prefer_a_struct

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: When to prefer a struct
static void demo() {
    std::cout << "Day 30 / Concept 9: When to prefer a struct\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "when_to_prefer_a_struct";
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
