// Concept 4: std::remove / remove_if
// Day 38 -- Algorithms: mutating
// Compile: g++ -std=c++17 -Wall -Wextra 04_stdremove_removeif.cpp -o 04_stdremove_removeif

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: std::remove / remove_if
static void demo() {
    std::cout << "Day 38 / Concept 4: std::remove / remove_if\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "stdremove_removeif";
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
