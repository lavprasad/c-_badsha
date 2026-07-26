// Concept 9: C++17 parallel policies idea
// Day 89 -- Parallel algorithms mindset
// Compile: g++ -std=c++17 -Wall -Wextra 09_c_17_parallel_policies_idea.cpp -o 09_c_17_parallel_policies_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: C++17 parallel policies idea
static void demo() {
    std::cout << "Day 89 / Concept 9: C++17 parallel policies idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "c_17_parallel_policies_idea";
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
