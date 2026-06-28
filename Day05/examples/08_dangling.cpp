// Concept 8: dangling pointers (demonstrated safely)
// Compile: g++ -std=c++17 -Wall -Wextra 08_dangling.cpp -o 08_dangling

#include <iostream>

int* make_dangling() {
    int local = 42;
    return &local;   // BUG: returns address of stack variable — UB if used
}

int main() {
    // Safe pattern: heap allocation with proper lifetime
    int* safe = new int(42);
    std::cout << "safe heap value: " << *safe << '\n';
    delete safe;
    safe = nullptr;

    // Demonstrate why dangling is dangerous (do not dereference make_dangling())
    int* bad = make_dangling();
    (void)bad;   // suppress unused warning — we intentionally do NOT dereference
    std::cout << "make_dangling() returns UB if dereferenced\n";

    return 0;
}
