// Concept 6: std::unordered_map — hash table
// Compile: g++ -std=c++17 -Wall -Wextra 06_unordered_map.cpp -o 06_unordered_map

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> word_count;
    std::string words[] = {"the", "cat", "sat", "on", "the", "mat", "the"};

    for (const auto& w : words) {
        ++word_count[w];
    }

    for (const auto& [word, count] : word_count) {
        std::cout << word << ": " << count << '\n';
    }

    std::cout << "'the' appears " << word_count["the"] << " times\n";
    return 0;
}
