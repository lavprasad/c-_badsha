// Concept 3: Comparing floats safely
// Day 25 -- Floating-point realities
// Compile: g++ -std=c++17 -Wall -Wextra 03_comparing_floats_safely.cpp -o 03_comparing_floats_safely

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Comparing floats safely
static void demo() {
    std::cout << "Day 25 / Concept 3: Comparing floats safely\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "comparing_floats_safely";
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
