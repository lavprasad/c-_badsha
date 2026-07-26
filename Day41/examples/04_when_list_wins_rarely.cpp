// Concept 4: When list wins (rarely)
// Day 41 -- Sequence containers deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 04_when_list_wins_rarely.cpp -o 04_when_list_wins_rarely

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: When list wins (rarely)
static void demo() {
    std::cout << "Day 41 / Concept 4: When list wins (rarely)\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "when_list_wins_rarely";
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
