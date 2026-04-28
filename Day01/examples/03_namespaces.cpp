// Concept 3: namespaces & std::
// Compile: g++ -std=c++17 -Wall -Wextra 03_namespaces.cpp -o 03_namespaces

#include <iostream>

namespace zoo {
    int count = 5;
    void roar() { std::cout << "ROAR from zoo::roar\n"; }
}

namespace farm {
    int count = 12;
    void roar() { std::cout << "Moo... from farm::roar\n"; }
}

int main() {
    std::cout << "zoo::count  = " << zoo::count  << '\n';
    std::cout << "farm::count = " << farm::count << '\n';

    zoo::roar();
    farm::roar();

    using farm::roar;
    roar();
    return 0;
}
