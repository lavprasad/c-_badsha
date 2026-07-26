// Concept 10: Mental model checklist
// Day 43 -- Memory model lite
// Compile: g++ -std=c++17 -Wall -Wextra 10_mental_model_checklist.cpp -o 10_mental_model_checklist

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Mental model checklist
static void demo() {
    std::cout << "Day 43 / Concept 10: Mental model checklist\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "mental_model_checklist";
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
