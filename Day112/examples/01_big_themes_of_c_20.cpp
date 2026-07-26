// Concept 1: Big themes of C++20
// Day 112 -- C++20 overview
// Compile: g++ -std=c++17 -Wall -Wextra 01_big_themes_of_c_20.cpp -o 01_big_themes_of_c_20

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Big themes of C++20
static void demo() {
    std::cout << "Day 112 / Concept 1: Big themes of C++20\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "big_themes_of_c_20";
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
