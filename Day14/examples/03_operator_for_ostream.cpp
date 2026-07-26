// Concept 3: operator<< for ostream
// Day 14 -- Operator overloading basics
// Compile: g++ -std=c++17 -Wall -Wextra 03_operator_for_ostream.cpp -o 03_operator_for_ostream

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: operator<< for ostream
static void demo() {
    std::cout << "Day 14 / Concept 3: operator<< for ostream\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "operator_for_ostream";
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
