// Concept 9: member initialiser lists
// Compile: g++ -std=c++17 -Wall -Wextra 09_initializer_lists.cpp -o 09_initializer_lists

#include <iostream>

class Rectangle {
public:
    Rectangle(double w, double h) : width_(w), height_(h) {}

    double area() const { return width_ * height_; }

private:
    const double width_;
    const double height_;
};

int main() {
    Rectangle r(4.0, 5.0);
    std::cout << "area = " << r.area() << '\n';
    return 0;
}
