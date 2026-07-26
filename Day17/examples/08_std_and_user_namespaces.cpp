// Concept 8: std:: and user namespaces
// Day 17 -- Namespaces deep dive
// Compile: g++ -std=c++17 -Wall -Wextra 08_std_and_user_namespaces.cpp -o 08_std_and_user_namespaces

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: std:: and user namespaces
static void demo() {
    std::cout << "Day 17 / Concept 8: std:: and user namespaces\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "std_and_user_namespaces";
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
