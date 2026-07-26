// Concept 9: Lifetimeing to string when needed
// Day 33 -- string_view (C++17)
// Compile: g++ -std=c++17 -Wall -Wextra 09_lifetimeing_to_string_when_needed.cpp -o 09_lifetimeing_to_string_when_needed

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Lifetimeing to string when needed
static void demo() {
    std::cout << "Day 33 / Concept 9: Lifetimeing to string when needed\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "lifetimeing_to_string_when_needed";
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
