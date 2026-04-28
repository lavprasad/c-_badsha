// Concept 8: operators (arithmetic, relational, logical, bitwise, assignment, inc/dec)
// Compile: g++ -std=c++17 -Wall -Wextra 08_operators.cpp -o 08_operators

#include <iostream>
#include <bitset>

int main() {
    int a = 7, b = 2;

    std::cout << "a + b = " << a + b << '\n';
    std::cout << "a - b = " << a - b << '\n';
    std::cout << "a * b = " << a * b << '\n';
    std::cout << "a / b = " << a / b << "   (integer division truncates)\n";
    std::cout << "a % b = " << a % b << '\n';

    std::cout << std::boolalpha;
    std::cout << "(a > b) = " << (a > b) << '\n';
    std::cout << "(a > b && b > 0) = " << (a > b && b > 0) << '\n';

    int x = 0b1100;   // 12
    int y = 0b1010;   // 10
    std::cout << "x & y = "  << std::bitset<4>(x & y)  << '\n';
    std::cout << "x | y = "  << std::bitset<4>(x | y)  << '\n';
    std::cout << "x ^ y = "  << std::bitset<4>(x ^ y)  << '\n';
    std::cout << "x << 1 = " << std::bitset<5>(x << 1) << '\n';

    int p = 5;
    std::cout << "p++ gives "   << p++ << " (post: returns OLD)\n";
    std::cout << "++p gives "   << ++p << " (pre:  returns NEW)\n";
    std::cout << "p is now "    << p   << '\n';
    return 0;
}
