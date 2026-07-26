// Concept 8: Sanitizer builds
// Day 79 -- Build systems lite
// Compile: g++ -std=c++17 -Wall -Wextra 08_sanitizer_builds.cpp -o 08_sanitizer_builds

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Sanitizer builds
static void demo() {
    std::cout << "Day 79 / Concept 8: Sanitizer builds\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "sanitizer_builds";
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
