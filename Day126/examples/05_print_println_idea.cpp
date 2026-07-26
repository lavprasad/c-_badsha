// Concept 5: print / println idea
// Day 126 -- C++23 overview
// Compile: g++ -std=c++17 -Wall -Wextra 05_print_println_idea.cpp -o 05_print_println_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: print / println idea
static void demo() {
    std::cout << "Day 126 / Concept 5: print / println idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "print_println_idea";
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
