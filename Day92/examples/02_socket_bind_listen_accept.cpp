// Concept 2: socket/bind/listen/accept
// Day 92 -- Networking sockets intro (POSIX)
// Compile: g++ -std=c++17 -Wall -Wextra 02_socket_bind_listen_accept.cpp -o 02_socket_bind_listen_accept

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: socket/bind/listen/accept
static void demo() {
    std::cout << "Day 92 / Concept 2: socket/bind/listen/accept\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "socket_bind_listen_accept";
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
