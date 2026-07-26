// Concept 9: Token extract
// Day 96 -- Regular expressions
// Compile: g++ -std=c++17 -Wall -Wextra 09_token_extract.cpp -o 09_token_extract

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Token extract
static void demo() {
    std::cout << "Day 96 / Concept 9: Token extract\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "token_extract";
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
