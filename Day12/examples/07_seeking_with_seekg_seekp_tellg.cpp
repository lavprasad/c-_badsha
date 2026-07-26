// Concept 7: Seeking with seekg/seekp/tellg
// Day 12 -- File I/O with fstream
// Compile: g++ -std=c++17 -Wall -Wextra 07_seeking_with_seekg_seekp_tellg.cpp -o 07_seeking_with_seekg_seekp_tellg

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Seeking with seekg/seekp/tellg
static void demo() {
    std::cout << "Day 12 / Concept 7: Seeking with seekg/seekp/tellg\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "seeking_with_seekg_seekp_tellg";
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
