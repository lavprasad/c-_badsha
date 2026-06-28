// Concept 2: std::move — enabling move instead of copy
// Compile: g++ -std=c++17 -Wall -Wextra 02_std_move.cpp -o 02_std_move

#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
    std::string a = "hello world this is a long string";
    std::string b = a;              // copy
    std::string c = std::move(a);   // move

    std::cout << "b=" << b << " (size " << b.size() << ")\n";
    std::cout << "c=" << c << " (size " << c.size() << ")\n";
    std::cout << "a after move: size=" << a.size() << " (valid but empty-ish)\n";

    std::vector<std::string> vec;
    vec.push_back(std::move(b));    // move into vector
    std::cout << "vec[0]=" << vec[0] << " b.size=" << b.size() << '\n';
    return 0;
}
