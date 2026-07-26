// Concept 9: Rolling hash uses
// Day 156 -- Hashing practice
// Compile: g++ -std=c++17 -Wall -Wextra 09_rolling_hash_uses.cpp -o 09_rolling_hash_uses

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Rolling hash uses
static void demo() {
    std::cout << "Day 156 / Concept 9: Rolling hash uses\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "rolling_hash_uses";
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
