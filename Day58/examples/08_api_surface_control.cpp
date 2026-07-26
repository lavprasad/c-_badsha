// Concept 8: API surface control
// Day 58 -- Nested types & enums in classes
// Compile: g++ -std=c++17 -Wall -Wextra 08_api_surface_control.cpp -o 08_api_surface_control

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: API surface control
static void demo() {
    std::cout << "Day 58 / Concept 8: API surface control\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "api_surface_control";
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
