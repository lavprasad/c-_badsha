// Concept 2: array size, bounds, and the sizeof trick
// Compile: g++ -std=c++17 -Wall -Wextra 02_array_size.cpp -o 02_array_size

#include <iostream>

int main() {
    int data[] = {10, 20, 30, 40, 50};
    std::size_t count = sizeof(data) / sizeof(data[0]);

    std::cout << "Array has " << count << " elements\n";
    std::cout << "Sum = ";
    int sum = 0;
    for (std::size_t i = 0; i < count; ++i) {
        sum += data[i];
    }
    std::cout << sum << '\n';

    return 0;
}
