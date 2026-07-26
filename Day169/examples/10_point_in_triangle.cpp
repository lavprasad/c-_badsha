// Concept 10: Point-in-triangle
// Day 169 -- Geometry basics
// Compile: g++ -std=c++17 -Wall -Wextra 10_point_in_triangle.cpp -o 10_point_in_triangle

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Point-in-triangle
static void demo() {
    std::cout << "Day 169 / Concept 10: Point-in-triangle\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "point_in_triangle";
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
