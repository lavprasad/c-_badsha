// Concept 2: Definitions in .cpp
// Day 18 -- Header / source split
// Compile: g++ -std=c++17 -Wall -Wextra 02_definitions_in_cpp.cpp -o 02_definitions_in_cpp

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Definitions in .cpp
static void demo() {
    std::cout << "Day 18 / Concept 2: Definitions in .cpp\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "definitions_in_cpp";
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
