// Concept 4: override — explicit intent, catch typos
// Compile: g++ -std=c++17 -Wall -Wextra 04_override.cpp -o 04_override

#include <iostream>

class Shape {
public:
    virtual void describe() const {
        std::cout << "generic shape\n";
    }
    virtual double area() const { return 0.0; }
    virtual ~Shape() = default;
};

class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}

    void describe() const override {
        std::cout << "circle with radius " << radius << '\n';
    }

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c(5.0);
    Shape* s = &c;
    s->describe();
    std::cout << "area = " << s->area() << '\n';
    return 0;
}
