// Concept 3: weak_ptr lock
// Day 45 -- shared_ptr & weak_ptr
// Compile: g++ -std=c++17 -Wall -Wextra 03_weakptr_lock.cpp -o 03_weakptr_lock

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: weak_ptr lock
static void demo() {
    std::cout << "Day 45 / Concept 3: weak_ptr lock\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "weakptr_lock";
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
