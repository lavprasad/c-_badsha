// Concept 1: Themes of C++23
// Day 126 -- C++23 overview
// Compile: g++ -std=c++17 -Wall -Wextra 01_themes_of_c_23.cpp -o 01_themes_of_c_23

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Themes of C++23
static void demo() {
    std::cout << "Day 126 / Concept 1: Themes of C++23\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "themes_of_c_23";
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
