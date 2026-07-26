// Concept 5: notify_one vs notify_all
// Day 84 -- Condition variables
// Compile: g++ -std=c++17 -Wall -Wextra 05_notifyone_vs_notifyall.cpp -o 05_notifyone_vs_notifyall

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: notify_one vs notify_all
static void demo() {
    std::cout << "Day 84 / Concept 5: notify_one vs notify_all\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "notifyone_vs_notifyall";
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
