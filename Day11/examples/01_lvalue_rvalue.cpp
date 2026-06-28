// Concept 1: lvalues vs rvalues
// Compile: g++ -std=c++17 -Wall -Wextra 01_lvalue_rvalue.cpp -o 01_lvalue_rvalue

#include <iostream>
#include <string>
#include <utility>

int get_number() { return 42; }

int main() {
    int x = 10;                    // x is lvalue
    int y = x + 5;                 // (x + 5) is rvalue
    int z = get_number();          // return value is rvalue

    std::string s = "temporary";   // "temporary" is rvalue literal
    std::string t = std::move(s);  // cast s to rvalue for move

    std::cout << "x=" << x << " y=" << y << " z=" << z << " t=" << t << '\n';
    return 0;
}
