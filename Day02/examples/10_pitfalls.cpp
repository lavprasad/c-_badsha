// Concept 10: control-flow pitfalls (demonstrated safely)
// Compile: g++ -std=c++17 -Wall -Wextra 10_pitfalls.cpp -o 10_pitfalls

#include <iostream>

int main() {
    // Pitfall 1: dangling else — always use braces
    int x = 5;
    if (x > 0)
        if (x < 10)
            std::cout << "x is between 0 and 10\n";
    else
        std::cout << "This else binds to the INNER if, not the outer one\n";

    // Pitfall 2: switch fall-through without break
    char grade = 'B';
    switch (grade) {
        case 'A':
        case 'B':
            std::cout << "Good grade (A or B)\n";
            break;   // without break after case 'A', we'd fall through here too
        default:
            std::cout << "Other grade\n";
            break;
    }

    // Pitfall 3: use int (not unsigned) when counting down to zero
    std::cout << "Safe countdown with int:\n";
    for (int i = 3; i >= 0; --i) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return 0;
}
