// Concept 2: Path separators
// Day 201 -- Cross-platform C++
// Compile: g++ -std=c++17 -Wall -Wextra 02_path_separators.cpp -o 02_path_separators

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Path separators
static void demo() {
    std::cout << "Day 201 / Concept 2: Path separators\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "path_separators";
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
