// Concept 2: iterator_traits
// Day 69 -- Mixin & traits
// Compile: g++ -std=c++17 -Wall -Wextra 02_iteratortraits.cpp -o 02_iteratortraits

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: iterator_traits
static void demo() {
    std::cout << "Day 69 / Concept 2: iterator_traits\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "iteratortraits";
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
