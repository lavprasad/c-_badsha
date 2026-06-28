// Concept 6: dynamic arrays — new[] / delete[]
// Compile: g++ -std=c++17 -Wall -Wextra 06_new_array.cpp -o 06_new_array

#include <iostream>

int main() {
    int* arr = new int[5]{10, 20, 30, 40, 50};

    std::cout << "Dynamic array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    delete[] arr;
    arr = nullptr;

    return 0;
}
