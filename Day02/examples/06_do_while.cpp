// Concept 6: the do-while loop
// Compile: g++ -std=c++17 -Wall -Wextra 06_do_while.cpp -o 06_do_while

#include <iostream>

int main() {
    int count = 0;

    // Body runs at least once even though condition is false immediately after
    do {
        std::cout << "Iteration " << count << '\n';
        ++count;
    } while (count < 3);

    return 0;
}
