// Concept 9: Capture init (C++14)
// Day 35 -- Lambda mastery
// Compile: g++ -std=c++17 -Wall -Wextra 09_capture_init_c_14.cpp -o 09_capture_init_c_14

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Capture init (C++14)
static void demo() {
    std::cout << "Day 35 / Concept 9: Capture init (C++14)\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "capture_init_c_14";
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
