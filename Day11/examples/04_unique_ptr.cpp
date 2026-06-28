// Concept 4: std::unique_ptr — exclusive ownership
// Compile: g++ -std=c++17 -Wall -Wextra 04_unique_ptr.cpp -o 04_unique_ptr

#include <iostream>
#include <memory>

struct Widget {
    int id;
    explicit Widget(int i) : id(i) { std::cout << "Widget(" << id << ")\n"; }
    ~Widget() { std::cout << "~Widget(" << id << ")\n"; }
};

int main() {
    auto p1 = std::make_unique<Widget>(1);
    std::cout << "id=" << p1->id << '\n';

    auto p2 = std::move(p1);
    if (!p1) std::cout << "p1 is empty after move\n";
    std::cout << "p2->id=" << p2->id << '\n';

    {
        auto p3 = std::make_unique<Widget>(2);
    }
    std::cout << "p3 destroyed at end of block\n";
    return 0;
}
