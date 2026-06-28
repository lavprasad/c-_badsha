// Concept 3: std::pair
// Compile: g++ -std=c++17 -Wall -Wextra 03_pair.cpp -o 03_pair

#include <iostream>
#include <utility>
#include <string>

int main() {
    std::pair<std::string, int> student{"Alice", 95};
    std::cout << student.first << " scored " << student.second << '\n';

    auto result = std::make_pair(std::string("Bob"), 87);
    std::cout << result.first << " scored " << result.second << '\n';

    // C++17 structured bindings
    auto [name, score] = result;
    std::cout << name << " -> " << score << '\n';
    return 0;
}
