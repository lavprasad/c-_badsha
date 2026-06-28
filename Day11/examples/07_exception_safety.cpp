// Concept 7: exception safety — RAII cleans up on throw
// Compile: g++ -std=c++17 -Wall -Wextra 07_exception_safety.cpp -o 07_exception_safety

#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

class Guard {
public:
    explicit Guard(const char* name) : name_(name) {
        std::cout << "acquire " << name_ << '\n';
    }
    ~Guard() { std::cout << "release " << name_ << '\n'; }
private:
    const char* name_;
};

void risky(bool fail) {
    Guard g("resource");
    auto data = std::make_unique<std::vector<int>>(100);
    if (fail) {
        throw std::runtime_error("simulated failure");
    }
    std::cout << "success, data size=" << data->size() << '\n';
}

int main() {
    try {
        risky(false);
        risky(true);
    } catch (const std::exception& e) {
        std::cerr << "caught: " << e.what() << '\n';
    }
    std::cout << "program continues\n";
    return 0;
}
