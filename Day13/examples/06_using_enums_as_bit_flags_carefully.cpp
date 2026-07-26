// Concept 6: Using enums as bit flags carefully
// Day 13 -- Enums & enum class
// Compile: g++ -std=c++17 -Wall -Wextra 06_using_enums_as_bit_flags_carefully.cpp -o 06_using_enums_as_bit_flags_carefully

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Using enums as bit flags carefully
static void demo() {
    std::cout << "Day 13 / Concept 6: Using enums as bit flags carefully\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "using_enums_as_bit_flags_carefully";
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
