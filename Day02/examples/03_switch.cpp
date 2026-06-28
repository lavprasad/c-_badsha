// Concept 3: switch, case, and default
// Compile: g++ -std=c++17 -Wall -Wextra 03_switch.cpp -o 03_switch

#include <iostream>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            std::cout << "Monday\n";
            break;
        case 2:
            std::cout << "Tuesday\n";
            break;
        case 3:
            std::cout << "Wednesday\n";
            break;
        case 4:
            std::cout << "Thursday\n";
            break;
        case 5:
            std::cout << "Friday\n";
            break;
        default:
            std::cout << "Weekend or invalid\n";
            break;
    }

    return 0;
}
