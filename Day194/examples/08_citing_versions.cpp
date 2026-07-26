// Concept 8: Citing versions
// Day 194 -- Reading the standard (practical)
// Compile: g++ -std=c++17 -Wall -Wextra 08_citing_versions.cpp -o 08_citing_versions

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Citing versions
static void demo() {
    std::cout << "Day 194 / Concept 8: Citing versions\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "citing_versions";
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
