// Concept 10: function pointers (introduction)
// Compile: g++ -std=c++17 -Wall -Wextra 10_function_pointers.cpp -o 10_function_pointers

#include <iostream>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    int (*operation)(int, int) = add;

    std::cout << "add via pointer: " << operation(10, 4) << '\n';

    operation = sub;
    std::cout << "sub via pointer: " << operation(10, 4) << '\n';

    // C++11: auto deduces the function pointer type
    auto op2 = add;
    std::cout << "add via auto:    " << op2(3, 5) << '\n';

    return 0;
}
