// Concept 5: the this pointer
// Compile: g++ -std=c++17 -Wall -Wextra 05_this_pointer.cpp -o 05_this_pointer

#include <iostream>

class Counter {
public:
    Counter() : value_(0) {}

    Counter& increment() {
        ++this->value_;
        return *this;
    }

    int value() const { return value_; }

private:
    int value_;
};

int main() {
    Counter c;
    c.increment().increment().increment();
    std::cout << "value after 3 increments: " << c.value() << '\n';
    return 0;
}
