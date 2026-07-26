// Concept 4: Semantic analysis
// Day 207 -- Compilers frontend lite
// Compile: g++ -std=c++17 -Wall -Wextra 04_semantic_analysis.cpp -o 04_semantic_analysis

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Semantic analysis
static void demo() {
    std::cout << "Day 207 / Concept 4: Semantic analysis\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "semantic_analysis";
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
