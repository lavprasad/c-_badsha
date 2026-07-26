// Concept 2: Instruction selection idea
// Day 208 -- Compilers backend lite
// Compile: g++ -std=c++17 -Wall -Wextra 02_instruction_selection_idea.cpp -o 02_instruction_selection_idea

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Instruction selection idea
static void demo() {
    std::cout << "Day 208 / Concept 2: Instruction selection idea\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "instruction_selection_idea";
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
