// Concept 7: memory leaks (commented — do NOT run leak demos in production)
// Compile: g++ -std=c++17 -Wall -Wextra 07_memory_leak.cpp -o 07_memory_leak
// Run under Valgrind or ASan to detect the intentional leak below.

#include <iostream>

void leaky_function() {
    int* p = new int(999);
    std::cout << "Allocated " << *p << " on heap\n";
    // BUG: forgot delete p;  — memory leak when function returns
}

void fixed_function() {
    int* p = new int(999);
    std::cout << "Allocated " << *p << " on heap\n";
    delete p;
    p = nullptr;
}

int main() {
    std::cout << "=== Fixed (no leak) ===\n";
    fixed_function();

    std::cout << "=== Leaky (intentional) ===\n";
    leaky_function();

    std::cout << "Program ends — leaked memory is lost until process exit\n";
    return 0;
}
