// Concept 9: Avoiding proxies
// Day 135 -- Proxy & reference types
// Compile: g++ -std=c++17 -Wall -Wextra 09_avoiding_proxies.cpp -o 09_avoiding_proxies

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Avoiding proxies
static void demo() {
    std::cout << "Day 135 / Concept 9: Avoiding proxies\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "avoiding_proxies";
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
