// Concept 9: Limits in C++17
// Day 51 -- constexpr & compile-time checks bridge
// Compile: g++ -std=c++17 -Wall -Wextra 09_limits_in_c_17.cpp -o 09_limits_in_c_17

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Limits in C++17
static void demo() {
    std::cout << "Day 51 / Concept 9: Limits in C++17\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "limits_in_c_17";
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
