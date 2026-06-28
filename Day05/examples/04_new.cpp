// Concept 4: dynamic allocation with new
// Compile: g++ -std=c++17 -Wall -Wextra 04_new.cpp -o 04_new

#include <iostream>

int main() {
    int* p = new int(42);

    std::cout << "heap int value: " << *p << '\n';
    std::cout << "heap address:   " << p << '\n';

    *p = 100;
    std::cout << "updated value:  " << *p << '\n';

    delete p;
    p = nullptr;

    return 0;
}
