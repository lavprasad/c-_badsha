// Concept 10: putting it together — generic utility
// Compile: g++ -std=c++17 -Wall -Wextra 10_generic_utility.cpp -o 10_generic_utility

#include <iostream>
#include <vector>
#include <list>
#include <string>

template<typename Container>
void print_container(const Container& c, const char* label) {
    std::cout << label << ": ";
    for (const auto& elem : c) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

template<typename T>
T clamp_val(T val, T lo, T hi) {
    if (val < lo) return lo;
    if (val > hi) return hi;
    return val;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> words{"C++", "templates", "rock"};

    print_container(vec, "vector");
    print_container(words, "list");

    std::cout << "clamp(15, 0, 10) = " << clamp_val(15, 0, 10) << '\n';
    std::cout << "clamp(-3, 0, 10) = " << clamp_val(-3, 0, 10) << '\n';
    return 0;
}
