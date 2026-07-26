// Concept 9: Experiment + read
// Day 194 -- Reading the standard (practical)
// Compile: g++ -std=c++17 -Wall -Wextra 09_experiment_read.cpp -o 09_experiment_read

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Experiment + read
static void demo() {
    std::cout << "Day 194 / Concept 9: Experiment + read\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "experiment_read";
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
