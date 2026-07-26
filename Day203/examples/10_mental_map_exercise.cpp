// Concept 10: Mental map exercise
// Day 203 -- GPU compute awareness
// Compile: g++ -std=c++17 -Wall -Wextra 10_mental_map_exercise.cpp -o 10_mental_map_exercise

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Mental map exercise
static void demo() {
    std::cout << "Day 203 / Concept 10: Mental map exercise\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "mental_map_exercise";
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
