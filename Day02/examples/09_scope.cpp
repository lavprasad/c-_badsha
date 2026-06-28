// Concept 9: block scope and lifetime
// Compile: g++ -std=c++17 -Wall -Wextra 09_scope.cpp -o 09_scope

#include <iostream>

int main() {
    int outer = 10;

    if (outer > 0) {
        int inner = 20;
        std::cout << "inside if: outer=" << outer << ", inner=" << inner << '\n';
    }
    // inner is not in scope here

    for (int i = 0; i < 3; ++i) {
        int doubled = i * 2;
        std::cout << "loop i=" << i << ", doubled=" << doubled << '\n';
    }
    // i and doubled are not in scope here

    std::cout << "outer still visible: " << outer << '\n';

    return 0;
}
