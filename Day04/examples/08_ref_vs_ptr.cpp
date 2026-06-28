// Concept 8: references vs pointers
// Compile: g++ -std=c++17 -Wall -Wextra 08_ref_vs_ptr.cpp -o 08_ref_vs_ptr

#include <iostream>

void set_via_ref(int& r, int val) {
    r = val;
}

void set_via_ptr(int* p, int val) {
    if (p != nullptr) {
        *p = val;
    }
}

int main() {
    int x = 10;

    set_via_ref(x, 20);
    std::cout << "after ref: " << x << '\n';

    set_via_ptr(&x, 30);
    std::cout << "after ptr: " << x << '\n';

    set_via_ptr(nullptr, 99);   // safely ignored
    std::cout << "after null ptr call: " << x << '\n';

    return 0;
}
