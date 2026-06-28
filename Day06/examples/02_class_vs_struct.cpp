// Concept 2: class vs struct
// Compile: g++ -std=c++17 -Wall -Wextra 02_class_vs_struct.cpp -o 02_class_vs_struct

#include <iostream>

struct Vec2Struct {
    double x, y;   // public by default
};

class Vec2Class {
public:
    Vec2Class(double x, double y) : x_(x), y_(y) {}
    double x() const { return x_; }
    double y() const { return y_; }
private:
    double x_, y_;   // private by default in class
};

int main() {
    Vec2Struct vs{1.0, 2.0};
    std::cout << "struct: " << vs.x << ", " << vs.y << '\n';

    Vec2Class vc(3.0, 4.0);
    std::cout << "class:  " << vc.x() << ", " << vc.y() << '\n';

    return 0;
}
