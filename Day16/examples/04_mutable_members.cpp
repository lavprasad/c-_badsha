// Concept 4: mutable members
// Day 16 -- const correctness
// Compile: g++ -std=c++17 -Wall -Wextra 04_mutable_members.cpp -o 04_mutable_members

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: mutable members
static void demo() {
    std::cout << "Day 16 / Concept 4: mutable members\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "mutable_members";
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
