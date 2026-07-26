// Concept 10: Choosing the right container
// Day 40 -- Associative containers deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 10_choosing_the_right_container.cpp -o 10_choosing_the_right_container

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Choosing the right container
static void demo() {
    std::cout << "Day 40 / Concept 10: Choosing the right container\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "choosing_the_right_container";
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
