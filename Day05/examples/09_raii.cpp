// Concept 9: RAII (introduction)
// Compile: g++ -std=c++17 -Wall -Wextra 09_raii.cpp -o 09_raii

#include <iostream>

class IntHolder {
public:
    explicit IntHolder(int value) : p_(new int(value)) {
        std::cout << "  IntHolder acquired " << *p_ << '\n';
    }

    ~IntHolder() {
        std::cout << "  IntHolder releasing " << *p_ << '\n';
        delete p_;
        p_ = nullptr;
    }

    int get() const { return *p_; }

    IntHolder(const IntHolder&) = delete;
    IntHolder& operator=(const IntHolder&) = delete;

private:
    int* p_;
};

int main() {
    std::cout << "Entering block\n";
    {
        IntHolder h(42);
        std::cout << "Using holder: " << h.get() << '\n';
    }
    std::cout << "Left block — destructor ran automatically\n";

    return 0;
}
