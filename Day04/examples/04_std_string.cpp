// Concept 4: std::string basics
// Compile: g++ -std=c++17 -Wall -Wextra 04_std_string.cpp -o 04_std_string

#include <iostream>
#include <string>

int main() {
    std::string name = "Ada";
    std::string greeting = "Hello, " + name + "!";

    std::cout << greeting << '\n';
    std::cout << "length: " << name.size() << '\n';

    name.push_back('!');
    std::cout << "after push_back: " << name << '\n';

    return 0;
}
