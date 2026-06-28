// Concept 5: return values and return types
// Compile: g++ -std=c++17 -Wall -Wextra 05_return_values.cpp -o 05_return_values

#include <iostream>

[[nodiscard]] int divide_safe(int a, int b, bool& ok) {
    if (b == 0) {
        ok = false;
        return 0;
    }
    ok = true;
    return a / b;
}

int main() {
    bool ok = false;
    int result = divide_safe(10, 3, ok);
    if (ok) {
        std::cout << "10 / 3 = " << result << " (remainder " << (10 % 3) << ")\n";
    }

    result = divide_safe(10, 0, ok);
    if (!ok) {
        std::cout << "Division by zero avoided\n";
    }
    return 0;
}
