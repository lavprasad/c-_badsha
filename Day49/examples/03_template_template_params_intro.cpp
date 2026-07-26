// Concept 3: Template template params intro
// Day 49 -- Templates intermediate
// Compile: g++ -std=c++17 -Wall -Wextra 03_template_template_params_intro.cpp -o 03_template_template_params_intro

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Template template params intro
static void demo() {
    std::cout << "Day 49 / Concept 3: Template template params intro\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "template_template_params_intro";
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
