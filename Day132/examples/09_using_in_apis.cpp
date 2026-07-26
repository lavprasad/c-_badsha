// Concept 9: Using in APIs
// Day 132 -- Type traits library tour
// Compile: g++ -std=c++17 -Wall -Wextra 09_using_in_apis.cpp -o 09_using_in_apis

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Using in APIs
static void demo() {
    std::cout << "Day 132 / Concept 9: Using in APIs\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "using_in_apis";
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
