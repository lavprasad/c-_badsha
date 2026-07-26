// Concept 10: Count UTF-8 code points naive
// Day 108 -- String encoding & Unicode lite
// Compile: g++ -std=c++17 -Wall -Wextra 10_count_utf_8_code_points_naive.cpp -o 10_count_utf_8_code_points_naive

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Count UTF-8 code points naive
static void demo() {
    std::cout << "Day 108 / Concept 10: Count UTF-8 code points naive\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "count_utf_8_code_points_naive";
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
