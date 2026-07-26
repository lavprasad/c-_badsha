// Concept 3: Writing formatted output
// Day 12 -- File I/O with fstream
// Compile: g++ -std=c++17 -Wall -Wextra 03_writing_formatted_output.cpp -o 03_writing_formatted_output

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Writing formatted output
static void demo() {
    std::cout << "Day 12 / Concept 3: Writing formatted output\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "writing_formatted_output";
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
