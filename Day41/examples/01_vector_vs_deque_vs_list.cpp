// Concept 1: vector vs deque vs list
// Day 41 -- Sequence containers deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 01_vector_vs_deque_vs_list.cpp -o 01_vector_vs_deque_vs_list

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: vector vs deque vs list
static void demo() {
    std::cout << "Day 41 / Concept 1: vector vs deque vs list\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "vector_vs_deque_vs_list";
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
