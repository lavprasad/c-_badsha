// Concept 8: Null-termination caution
// Day 33 -- string_view (C++17)
// Compile: g++ -std=c++17 -Wall -Wextra 08_null_termination_caution.cpp -o 08_null_termination_caution

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Null-termination caution
static void demo() {
    std::cout << "Day 33 / Concept 8: Null-termination caution\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "null_termination_caution";
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
