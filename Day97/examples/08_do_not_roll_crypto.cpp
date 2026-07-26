// Concept 8: Do not roll crypto
// Day 97 -- Compression & hashing mindset
// Compile: g++ -std=c++17 -Wall -Wextra 08_do_not_roll_crypto.cpp -o 08_do_not_roll_crypto

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Do not roll crypto
static void demo() {
    std::cout << "Day 97 / Concept 8: Do not roll crypto\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "do_not_roll_crypto";
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
