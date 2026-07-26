// Concept 2: Containers in constexpr (limits by standard)
// Day 129 -- constexpr programming
// Compile: g++ -std=c++17 -Wall -Wextra 02_containers_in_constexpr_limits_by_standa.cpp -o 02_containers_in_constexpr_limits_by_standa

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Containers in constexpr (limits by standard)
static void demo() {
    std::cout << "Day 129 / Concept 2: Containers in constexpr (limits by standard)\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "containers_in_constexpr_limits_by_standa";
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
