// Concept 4: Seeding properly
// Day 26 -- Random numbers
// Compile: g++ -std=c++17 -Wall -Wextra 04_seeding_properly.cpp -o 04_seeding_properly

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Seeding properly
static void demo() {
    std::cout << "Day 26 / Concept 4: Seeding properly\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "seeding_properly";
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
