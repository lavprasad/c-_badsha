// Concept 10: string and array pitfalls (demonstrated safely)
// Compile: g++ -std=c++17 -Wall -Wextra 10_pitfalls.cpp -o 10_pitfalls

#include <iostream>
#include <string>

int main() {
    // Safe: std::string handles sizing
    std::string safe = "Hello";
    safe += ", World";
    std::cout << safe << '\n';

    // sizeof on array vs pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr;
    std::cout << "sizeof(arr) = " << sizeof(arr) << " bytes (whole array)\n";
    std::cout << "sizeof(p)   = " << sizeof(p) << " bytes (pointer only)\n";

    // const char* for string literals — do not modify
    const char* lit = "read-only";
    std::cout << lit << '\n';

    return 0;
}
