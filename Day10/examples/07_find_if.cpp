// Concept 7: std::find_if — search with a predicate
// Compile: g++ -std=c++17 -Wall -Wextra 07_find_if.cpp -o 07_find_if

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words = {"hi", "hello", "hey", "greetings"};

    auto it = std::find_if(words.begin(), words.end(),
                           [](const std::string& s) { return s.size() > 4; });

    if (it != words.end()) {
        std::cout << "first word with len > 4: " << *it << '\n';
    }

    bool all_short = std::all_of(words.begin(), words.end(),
                                 [](const std::string& s) { return s.size() < 20; });
    std::cout << "all short? " << (all_short ? "yes" : "no") << '\n';
    return 0;
}
