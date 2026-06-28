// Concept 4: the for loop
// Compile: g++ -std=c++17 -Wall -Wextra 04_for_loop.cpp -o 04_for_loop

#include <iostream>

int main() {
    std::cout << "Count 0 to 9: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    std::cout << "Sum 1..10 = ";
    int sum = 0;
    for (int n = 1; n <= 10; ++n) {
        sum += n;
    }
    std::cout << sum << '\n';

    return 0;
}
