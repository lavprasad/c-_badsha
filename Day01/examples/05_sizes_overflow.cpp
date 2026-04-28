// Concept 5: type sizes, signed/unsigned, overflow
// Compile: g++ -std=c++17 -Wall -Wextra 05_sizes_overflow.cpp -o 05_sizes_overflow

#include <iostream>
#include <climits>
#include <cstdint>

int main() {
    std::cout << "sizeof(char)        = " << sizeof(char)        << " byte(s)\n";
    std::cout << "sizeof(int)         = " << sizeof(int)         << " byte(s)\n";
    std::cout << "sizeof(long)        = " << sizeof(long)        << " byte(s)\n";
    std::cout << "sizeof(long long)   = " << sizeof(long long)   << " byte(s)\n";
    std::cout << "sizeof(double)      = " << sizeof(double)      << " byte(s)\n";
    std::cout << "sizeof(int32_t)     = " << sizeof(std::int32_t)<< " byte(s)\n";
    std::cout << '\n';

    std::cout << "INT_MAX = " << INT_MAX << '\n';
    std::cout << "INT_MIN = " << INT_MIN << '\n';
    std::cout << '\n';

    unsigned int u = 0;
    --u;   // well-defined wrap to UINT_MAX
    std::cout << "unsigned 0 - 1 = " << u << "  (well-defined wrap)\n";

    return 0;
}
