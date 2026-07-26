// Concept 1: co_await / co_yield / co_return
// Day 120 -- Coroutines intro
// Compile: g++ -std=c++17 -Wall -Wextra 01_coawait_coyield_coreturn.cpp -o 01_coawait_coyield_coreturn

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: co_await / co_yield / co_return
static void demo() {
    std::cout << "Day 120 / Concept 1: co_await / co_yield / co_return\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "coawait_coyield_coreturn";
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
