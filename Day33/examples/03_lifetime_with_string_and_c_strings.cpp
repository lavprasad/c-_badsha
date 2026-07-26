// Concept 3: Lifetime with string and C-strings
// Day 33 -- string_view (C++17)
// Compile: g++ -std=c++17 -Wall -Wextra 03_lifetime_with_string_and_c_strings.cpp -o 03_lifetime_with_string_and_c_strings

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Lifetime with string and C-strings
static void demo() {
    std::cout << "Day 33 / Concept 3: Lifetime with string and C-strings\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "lifetime_with_string_and_c_strings";
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
