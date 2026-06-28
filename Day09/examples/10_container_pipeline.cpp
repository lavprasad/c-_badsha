// Concept 10: choosing the right container — mini pipeline
// Compile: g++ -std=c++17 -Wall -Wextra 10_container_pipeline.cpp -o 10_container_pipeline

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<std::string> words = {"apple", "banana", "apple", "cherry", "banana", "apple"};

    std::unordered_map<std::string, int> counts;
    for (const auto& w : words) {
        ++counts[w];
    }

    std::set<std::string> unique_words;
    for (const auto& w : words) {
        unique_words.insert(w);
    }

    std::map<std::string, int> sorted_counts;
    for (const auto& [word, count] : counts) {
        sorted_counts[word] = count;
    }

    std::cout << "Unique words (sorted): ";
    for (const auto& w : unique_words) std::cout << w << ' ';
    std::cout << "\nCounts (sorted by key):\n";
    for (const auto& [w, c] : sorted_counts) {
        std::cout << "  " << w << ": " << c << '\n';
    }
    return 0;
}
