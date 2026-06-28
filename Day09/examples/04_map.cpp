// Concept 4: std::map — sorted key-value store
// Compile: g++ -std=c++17 -Wall -Wextra 04_map.cpp -o 04_map

#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scores;
    scores["Charlie"] = 78;
    scores.insert({"Alice", 95});
    scores.emplace("Bob", 87);

    for (const auto& [name, score] : scores) {
        std::cout << name << ": " << score << '\n';
    }

    auto it = scores.find("Alice");
    if (it != scores.end()) {
        std::cout << "Found Alice: " << it->second << '\n';
    }
    return 0;
}
