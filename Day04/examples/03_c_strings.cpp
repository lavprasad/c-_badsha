// Concept 3: C-strings (char arrays)
// Compile: g++ -std=c++17 -Wall -Wextra 03_c_strings.cpp -o 03_c_strings

#include <iostream>
#include <cstring>

int main() {
    char greeting[] = "Hello";
    const char* literal = "World";

    std::cout << "greeting: " << greeting << '\n';
    std::cout << "length:   " << std::strlen(greeting) << '\n';

    greeting[0] = 'h';
    std::cout << "modified: " << greeting << '\n';

    std::cout << "literal:  " << literal << '\n';

    return 0;
}
