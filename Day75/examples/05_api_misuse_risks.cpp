// Concept 5: API misuse risks
// Day 75 -- Code review checklist for C++
// Compile: g++ -std=c++17 -Wall -Wextra 05_api_misuse_risks.cpp -o 05_api_misuse_risks

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: API misuse risks
static void demo() {
    std::cout << "Day 75 / Concept 5: API misuse risks\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "api_misuse_risks";
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
