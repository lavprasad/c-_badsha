// Concept 8: noexcept — promising not to throw
// Compile: g++ -std=c++17 -Wall -Wextra 08_noexcept.cpp -o 08_noexcept

#include <iostream>
#include <utility>
#include <vector>

class SafeMove {
    int value;
public:
    explicit SafeMove(int v) : value(v) {}
    SafeMove(SafeMove&& o) noexcept : value(o.value) { o.value = 0; }
    int get() const noexcept { return value; }
};

void swap_values(int& a, int& b) noexcept {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    std::cout << "swap noexcept: " << noexcept(swap_values(1, 2)) << '\n';
    std::cout << "SafeMove move noexcept: "
              << noexcept(SafeMove(std::move(SafeMove(1)))) << '\n';

    std::vector<SafeMove> v;
    for (int i = 0; i < 3; ++i) {
        v.emplace_back(i);
    }
    std::cout << "vector size=" << v.size() << " [0]=" << v[0].get() << '\n';
    return 0;
}
