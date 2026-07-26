// Concept 10: Case study: string
// Day 61 -- Value semantics vs reference semantics
// Compile: g++ -std=c++17 -Wall -Wextra 10_case_study_string.cpp -o 10_case_study_string

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Case study: string
static void demo() {
    std::cout << "Day 61 / Concept 10: Case study: string\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "case_study_string";
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
