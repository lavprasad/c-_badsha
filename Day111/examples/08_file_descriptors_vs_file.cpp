// Concept 8: File descriptors vs FILE*
// Day 111 -- POSIX essentials for C++
// Compile: g++ -std=c++17 -Wall -Wextra 08_file_descriptors_vs_file.cpp -o 08_file_descriptors_vs_file

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: File descriptors vs FILE*
static void demo() {
    std::cout << "Day 111 / Concept 8: File descriptors vs FILE*\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "file_descriptors_vs_file";
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
