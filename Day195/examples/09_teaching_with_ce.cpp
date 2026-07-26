// Concept 9: Teaching with CE
// Day 195 -- Compiler explorer workflows
// Compile: g++ -std=c++17 -Wall -Wextra 09_teaching_with_ce.cpp -o 09_teaching_with_ce

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Teaching with CE
static void demo() {
    std::cout << "Day 195 / Concept 9: Teaching with CE\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "teaching_with_ce";
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
