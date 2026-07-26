// Concept 8: README for a mini project
// Day 29 -- Structuring larger programs
// Compile: g++ -std=c++17 -Wall -Wextra 08_readme_for_a_mini_project.cpp -o 08_readme_for_a_mini_project

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: README for a mini project
static void demo() {
    std::cout << "Day 29 / Concept 8: README for a mini project\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "readme_for_a_mini_project";
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
