// Concept 9: non-type template parameters
// Compile: g++ -std=c++17 -Wall -Wextra 09_nontype_template.cpp -o 09_nontype_template

#include <iostream>

template<typename T, int N>
class FixedBuffer {
    T data[N]{};
public:
    static constexpr int capacity() { return N; }
    T& operator[](int i) { return data[i]; }
    const T& operator[](int i) const { return data[i]; }
};

template<int N>
struct Factorial {
    static constexpr int value = N * Factorial<N - 1>::value;
};

template<>
struct Factorial<0> {
    static constexpr int value = 1;
};

int main() {
    FixedBuffer<int, 5> buf;
    buf[0] = 10;
    buf[4] = 40;

    std::cout << "capacity = " << buf.capacity() << '\n';
    std::cout << buf[0] << ' ' << buf[4] << '\n';
    std::cout << "5! = " << Factorial<5>::value << '\n';
    return 0;
}
