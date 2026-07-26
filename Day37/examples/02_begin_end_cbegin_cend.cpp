// Concept 2: begin/end/cbegin/cend
// Day 37 -- Iterators deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 02_begin_end_cbegin_cend.cpp -o 02_begin_end_cbegin_cend

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: begin/end/cbegin/cend
static void demo() {
    std::cout << "Day 37 / Concept 2: begin/end/cbegin/cend\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "begin_end_cbegin_cend";
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
