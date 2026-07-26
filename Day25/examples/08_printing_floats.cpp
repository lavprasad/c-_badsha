// Concept 8: Printing floats
// Day 25 -- Floating-point realities
// Compile: g++ -std=c++17 -Wall -Wextra 08_printing_floats.cpp -o 08_printing_floats

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Printing floats
static void demo() {
    std::cout << "Day 25 / Concept 8: Printing floats\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "printing_floats";
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
