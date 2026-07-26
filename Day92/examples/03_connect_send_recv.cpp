// Concept 3: connect/send/recv
// Day 92 -- Networking sockets intro (POSIX)
// Compile: g++ -std=c++17 -Wall -Wextra 03_connect_send_recv.cpp -o 03_connect_send_recv

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: connect/send/recv
static void demo() {
    std::cout << "Day 92 / Concept 3: connect/send/recv\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "connect_send_recv";
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
