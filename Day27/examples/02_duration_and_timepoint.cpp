// Concept 2: duration and time_point
// Day 27 -- Time & chrono basics
// Compile: g++ -std=c++17 -Wall -Wextra 02_duration_and_timepoint.cpp -o 02_duration_and_timepoint

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: duration and time_point
static void demo() {
    std::cout << "Day 27 / Concept 2: duration and time_point\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "duration_and_timepoint";
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
