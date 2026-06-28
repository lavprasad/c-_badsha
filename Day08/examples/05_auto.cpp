// Concept 5: auto — let the compiler deduce the type
// Compile: g++ -std=c++17 -Wall -Wextra 05_auto.cpp -o 05_auto

#include <iostream>
#include <string>
#include <vector>
#include <type_traits>

int main() {
    auto i = 42;
    auto d = 3.14;
    auto s = std::string("hello");
    auto v = std::vector<int>{1, 2, 3};

    static_assert(std::is_same_v<decltype(i), int>);
    static_assert(std::is_same_v<decltype(d), double>);
    static_assert(std::is_same_v<decltype(s), std::string>);

    const int x = 100;
    auto copy = x;           // int (const dropped)
    const auto& ref = x;     // const int&

    std::cout << i << ' ' << d << ' ' << s << ' ' << ref << '\n';

    for (const auto& elem : v) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
    return 0;
}
