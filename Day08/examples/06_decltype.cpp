// Concept 6: decltype — type of an expression
// Compile: g++ -std=c++17 -Wall -Wextra 06_decltype.cpp -o 06_decltype

#include <iostream>
#include <type_traits>
#include <utility>

int main() {
    int x = 10;
    const int& cr = x;

    decltype(x) a = 1;       // int
    decltype(cr) b = x;      // const int&
    decltype((x)) c = x;     // int& (parenthesised lvalue)

    c = 99;
    std::cout << "x = " << x << '\n';

    static_assert(std::is_same_v<decltype(a), int>);
    static_assert(std::is_same_v<decltype(b), const int&>);
    static_assert(std::is_same_v<decltype(c), int&>);

    std::pair<int, double> p{1, 2.5};
    decltype(p.first) n = 42;
    std::cout << n << '\n';
    return 0;
}
