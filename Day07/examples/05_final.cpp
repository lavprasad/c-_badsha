// Concept 5: final — stop further overriding or inheriting
// Compile: g++ -std=c++17 -Wall -Wextra 05_final.cpp -o 05_final

#include <iostream>

class Logger {
public:
    virtual void log(const char* msg) {
        std::cout << "[LOG] " << msg << '\n';
    }
    virtual ~Logger() = default;
};

class SecureLogger final : public Logger {
public:
    void log(const char* msg) final {
        std::cout << "[SECURE] " << msg << '\n';
    }
};

// class EvilLogger : public SecureLogger { };   // ERROR: SecureLogger is final

int main() {
    SecureLogger sl;
    Logger* l = &sl;
    l->log("access granted");
    return 0;
}
