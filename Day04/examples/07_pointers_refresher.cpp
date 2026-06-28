// Concept 7: pointers — syntax refresher
// Compile: g++ -std=c++17 -Wall -Wextra 07_pointers_refresher.cpp -o 07_pointers_refresher

#include <iostream>

int main() {
    int value = 100;
    int* ptr = &value;

    std::cout << "value:   " << value << '\n';
    std::cout << "address: " << ptr << '\n';
    std::cout << "deref:   " << *ptr << '\n';

    *ptr = 200;
    std::cout << "value after *ptr = 200: " << value << '\n';

    return 0;
}
