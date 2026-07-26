// Concept 1: Checksums vs crypto hashes
// Day 97 -- Compression & hashing mindset
// Compile: g++ -std=c++17 -Wall -Wextra 01_checksums_vs_crypto_hashes.cpp -o 01_checksums_vs_crypto_hashes

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Checksums vs crypto hashes
static void demo() {
    std::cout << "Day 97 / Concept 1: Checksums vs crypto hashes\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "checksums_vs_crypto_hashes";
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
