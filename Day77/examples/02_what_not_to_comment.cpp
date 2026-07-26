// Concept 2: What not to comment
// Day 77 -- Documentation & comments
// Compile: g++ -std=c++17 -Wall -Wextra 02_what_not_to_comment.cpp -o 02_what_not_to_comment

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: What not to comment
static void demo() {
    std::cout << "Day 77 / Concept 2: What not to comment\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "what_not_to_comment";
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
