// Concept 6: Blocking I/O
// Day 92 -- Networking sockets intro (POSIX)
// Compile: g++ -std=c++17 -Wall -Wextra 06_blocking_i_o.cpp -o 06_blocking_i_o

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Blocking I/O
static void demo() {
    std::cout << "Day 92 / Concept 6: Blocking I/O\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "blocking_i_o";
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
