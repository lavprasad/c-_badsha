// Concept 6: Owning vs borrowing
// Day 114 -- Ranges basics
// Compile: g++ -std=c++17 -Wall -Wextra 06_owning_vs_borrowing.cpp -o 06_owning_vs_borrowing

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Owning vs borrowing
static void demo() {
    std::cout << "Day 114 / Concept 6: Owning vs borrowing\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "owning_vs_borrowing";
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
