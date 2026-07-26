// Concept 5: Copy-on-write maps
// Day 90 -- Concurrent data structures lite
// Compile: g++ -std=c++17 -Wall -Wextra 05_copy_on_write_maps.cpp -o 05_copy_on_write_maps

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Copy-on-write maps
static void demo() {
    std::cout << "Day 90 / Concept 5: Copy-on-write maps\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "copy_on_write_maps";
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
