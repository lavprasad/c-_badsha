// Concept 7: auto return types & trailing return type
// Compile: g++ -std=c++17 -Wall -Wextra 07_auto_return.cpp -o 07_auto_return

#include <iostream>
#include <type_traits>

template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

template<typename T, typename U>
auto multiply(T a, U b) {
    return a * b;   // C++14: return type deduced from return statements
}

int main() {
    auto r1 = add(3, 4.5);
    auto r2 = multiply(2, 3);

    static_assert(std::is_same_v<decltype(r1), double>);
    static_assert(std::is_same_v<decltype(r2), int>);

    std::cout << r1 << ' ' << r2 << '\n';
    return 0;
}
