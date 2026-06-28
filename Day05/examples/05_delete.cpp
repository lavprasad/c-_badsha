// Concept 5: dynamic deallocation with delete
// Compile: g++ -std=c++17 -Wall -Wextra 05_delete.cpp -o 05_delete

#include <iostream>

int main() {
    int* p = new int(55);

    std::cout << "before delete: " << *p << '\n';

    delete p;
    p = nullptr;

    std::cout << "after delete, p is "
              << (p == nullptr ? "nullptr (safe)" : "not null") << '\n';

    return 0;
}
