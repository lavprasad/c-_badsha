// Concept 1: struct — grouping data
// Compile: g++ -std=c++17 -Wall -Wextra 01_struct.cpp -o 01_struct

#include <iostream>

struct Point {
    double x;
    double y;
};

int main() {
    Point origin{0.0, 0.0};
    Point p{3.0, 4.0};

    std::cout << "origin: (" << origin.x << ", " << origin.y << ")\n";
    std::cout << "p:      (" << p.x << ", " << p.y << ")\n";

    return 0;
}
