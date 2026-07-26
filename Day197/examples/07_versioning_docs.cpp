// Concept 7: Versioning docs
// Day 197 -- Documentation site for a lib
// Compile: g++ -std=c++17 -Wall -Wextra 07_versioning_docs.cpp -o 07_versioning_docs

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Versioning docs
static void demo() {
    std::cout << "Day 197 / Concept 7: Versioning docs\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "versioning_docs";
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
