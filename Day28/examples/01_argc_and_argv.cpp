// Concept 1: argc and argv
// Day 28 -- Command-line args
// Compile: g++ -std=c++17 -Wall -Wextra 01_argc_and_argv.cpp -o 01_argc_and_argv

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: argc and argv
static void demo() {
    std::cout << "Day 28 / Concept 1: argc and argv\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "argc_and_argv";
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
