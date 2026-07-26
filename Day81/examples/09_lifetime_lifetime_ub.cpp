// Concept 9: Lifetime lifetime UB
// Day 81 -- Undefined behaviour catalogue
// Compile: g++ -std=c++17 -Wall -Wextra 09_lifetime_lifetime_ub.cpp -o 09_lifetime_lifetime_ub

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Lifetime lifetime UB
static void demo() {
    std::cout << "Day 81 / Concept 9: Lifetime lifetime UB\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "lifetime_lifetime_ub";
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
