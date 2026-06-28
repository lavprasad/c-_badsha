// Concept 9: arrays decay to pointers
// Compile: g++ -std=c++17 -Wall -Wextra 09_array_decay.cpp -o 09_array_decay

#include <iostream>

void print_array(const int* arr, std::size_t n) {
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void print_fixed(int (&arr)[4]) {
    std::size_t n = sizeof(arr) / sizeof(arr[0]);
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "(reference preserves size)\n";
}

int main() {
    int nums[] = {1, 2, 3, 4};

    std::cout << "via pointer + size: ";
    print_array(nums, 4);

    std::cout << "via ref to array:   ";
    print_fixed(nums);

    return 0;
}
