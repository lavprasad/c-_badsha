// Concept 8: Default member init
// Day 117 -- Designated initializers & aggregates
// Compile: g++ -std=c++17 -Wall -Wextra 08_default_member_init.cpp -o 08_default_member_init

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Default member init
static void demo() {
    std::cout << "Day 117 / Concept 8: Default member init\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "default_member_init";
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
