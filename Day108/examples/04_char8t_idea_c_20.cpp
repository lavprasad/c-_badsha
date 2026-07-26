// Concept 4: char8_t idea (C++20)
// Day 108 -- String encoding & Unicode lite
// Compile: g++ -std=c++17 -Wall -Wextra 04_char8t_idea_c_20.cpp -o 04_char8t_idea_c_20

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: char8_t idea (C++20)
static void demo() {
    std::cout << "Day 108 / Concept 4: char8_t idea (C++20)\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "char8t_idea_c_20";
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
