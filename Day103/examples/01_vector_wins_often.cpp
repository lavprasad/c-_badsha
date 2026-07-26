// Concept 1: vector wins often
// Day 103 -- Cache-friendly containers
// Compile: g++ -std=c++17 -Wall -Wextra 01_vector_wins_often.cpp -o 01_vector_wins_often

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: vector wins often
static void demo() {
    std::cout << "Day 103 / Concept 1: vector wins often\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "vector_wins_often";
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
