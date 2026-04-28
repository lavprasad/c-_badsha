// Concept 7: standard I/O — cin, cout, endl vs '\n'
// Compile: g++ -std=c++17 -Wall -Wextra 07_io.cpp -o 07_io
//
// Run interactively:  ./07_io
// Or pipe input:      echo "Lav 21" | ./07_io

#include <iostream>
#include <string>

int main() {
    std::string name;
    int age = 0;

    std::cout << "Enter your name and age: ";
    std::cin  >> name >> age;

    if (!std::cin) {
        std::cout << "Bad input!\n";
        return 1;
    }

    std::cout << "Hello, " << name << "! You are " << age << " years old.\n";

    std::cout << "Using endl flushes the buffer." << std::endl;
    std::cout << "Using \\n is usually faster.\n";
    return 0;
}
