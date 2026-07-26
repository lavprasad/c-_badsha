// Concept 3: Copy constructor details
// Day 15 -- Copy control deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 03_copy_constructor_details.cpp -o 03_copy_constructor_details

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Copy constructor details
static void demo() {
    std::cout << "Day 15 / Concept 3: Copy constructor details\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "copy_constructor_details";
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
