// Concept 1: Opening files with ifstream/ofstream
// Day 12 -- File I/O with fstream
// Compile: g++ -std=c++17 -Wall -Wextra 01_opening_files_with_ifstream_ofstream.cpp -o 01_opening_files_with_ifstream_ofstream

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Opening files with ifstream/ofstream
static void demo() {
    std::cout << "Day 12 / Concept 1: Opening files with ifstream/ofstream\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "opening_files_with_ifstream_ofstream";
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
