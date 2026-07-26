// Concept 5: tie for unpacking
// Day 30 -- std::pair & std::tuple
// Compile: g++ -std=c++17 -Wall -Wextra 05_tie_for_unpacking.cpp -o 05_tie_for_unpacking

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: tie for unpacking
static void demo() {
    std::cout << "Day 30 / Concept 5: tie for unpacking\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "tie_for_unpacking";
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
