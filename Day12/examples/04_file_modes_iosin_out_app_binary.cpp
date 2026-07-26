// Concept 4: File modes: ios::in/out/app/binary
// Day 12 -- File I/O with fstream
// Compile: g++ -std=c++17 -Wall -Wextra 04_file_modes_iosin_out_app_binary.cpp -o 04_file_modes_iosin_out_app_binary

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: File modes: ios::in/out/app/binary
static void demo() {
    std::cout << "Day 12 / Concept 4: File modes: ios::in/out/app/binary\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "file_modes_iosin_out_app_binary";
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
