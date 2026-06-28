// Concept 6: member functions
// Compile: g++ -std=c++17 -Wall -Wextra 06_member_functions.cpp -o 06_member_functions

#include <iostream>

class Circle {
public:
    Circle(double r) : radius_(r) {}

    double area() const;
    void set_radius(double r);

private:
    double radius_;
};

double Circle::area() const {
    return 3.141592653589793 * radius_ * radius_;
}

void Circle::set_radius(double r) {
    if (r > 0.0) {
        radius_ = r;
    }
}

int main() {
    Circle c(5.0);
    std::cout << "area (r=5): " << c.area() << '\n';
    c.set_radius(10.0);
    std::cout << "area (r=10): " << c.area() << '\n';
    return 0;
}
