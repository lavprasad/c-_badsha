// Concept 4: emplace_back vs push_back
// Day 19 -- std::array & std::vector mastery
// Compile: g++ -std=c++17 -Wall -Wextra 04_emplaceback_vs_pushback.cpp -o 04_emplaceback_vs_pushback

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: emplace_back vs push_back
static void demo() {
    std::cout << "Day 19 / Concept 4: emplace_back vs push_back\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "emplaceback_vs_pushback";
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
