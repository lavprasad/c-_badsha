// Concept 6: abstract classes & pure virtual functions
// Compile: g++ -std=c++17 -Wall -Wextra 06_abstract_class.cpp -o 06_abstract_class

#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
    virtual void print() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double w, double h) : w(w), h(h) {}

    double area() const override { return w * h; }
    void print() const override {
        std::cout << "Rectangle " << w << "x" << h << " area=" << area() << '\n';
    }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override { return 0.5 * base * height; }
    void print() const override {
        std::cout << "Triangle base=" << base << " height=" << height
                  << " area=" << area() << '\n';
    }
};

int main() {
    Rectangle r(4.0, 5.0);
    Triangle t(3.0, 6.0);
    Shape* shapes[] = {&r, &t};

    for (Shape* s : shapes) {
        s->print();
    }
    return 0;
}
