// Concept 3: Out-of-order bans
// Day 117 -- Designated initializers & aggregates
// Compile: g++ -std=c++17 -Wall -Wextra 03_out_of_order_bans.cpp -o 03_out_of_order_bans

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Out-of-order bans
static void demo() {
    std::cout << "Day 117 / Concept 3: Out-of-order bans\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "out_of_order_bans";
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
