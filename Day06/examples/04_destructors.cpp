// Concept 4: destructors
// Compile: g++ -std=c++17 -Wall -Wextra 04_destructors.cpp -o 04_destructors

#include <iostream>

class Logger {
public:
    explicit Logger(const char* tag) : tag_(tag) {
        std::cout << tag_ << " created\n";
    }

    ~Logger() {
        std::cout << tag_ << " destroyed\n";
    }

private:
    const char* tag_;
};

int main() {
    std::cout << "Entering main block\n";
    {
        Logger a("A");
        Logger b("B");
        std::cout << "Inside nested block\n";
    }
    std::cout << "Leaving main block\n";
    return 0;
}
