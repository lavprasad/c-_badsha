// Concept 2: preprocessor & #include / #define / #ifdef
// Compile: g++ -std=c++17 -Wall -Wextra 02_preprocessor.cpp -o 02_preprocessor
//
// Try also:  g++ -E 02_preprocessor.cpp   (shows the file AFTER preprocessing)

#include <iostream>

#define GREETING "Hello from a macro"
#define SQUARE(x) ((x) * (x))   // parens around args & whole expression are essential

int main() {
    std::cout << GREETING << '\n';
    std::cout << "SQUARE(3 + 1) = " << SQUARE(3 + 1) << '\n';

#ifdef _WIN32
    std::cout << "Compiled on Windows\n";
#else
    std::cout << "Compiled on a non-Windows OS\n";
#endif

    return 0;
}
