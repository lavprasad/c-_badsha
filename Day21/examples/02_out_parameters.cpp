// Concept 2: Out-parameters
// Day 21 -- Error handling without exceptions
// Compile: g++ -std=c++17 -Wall -Wextra 02_out_parameters.cpp -o 02_out_parameters

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Out-parameters
static void demo() {
    std::cout << "Day 21 / Concept 2: Out-parameters\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "out_parameters";
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
