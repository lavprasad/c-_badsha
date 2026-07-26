// Concept 3: Access to outer members
// Day 58 -- Nested types & enums in classes
// Compile: g++ -std=c++17 -Wall -Wextra 03_access_to_outer_members.cpp -o 03_access_to_outer_members

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Access to outer members
static void demo() {
    std::cout << "Day 58 / Concept 3: Access to outer members\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "access_to_outer_members";
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
