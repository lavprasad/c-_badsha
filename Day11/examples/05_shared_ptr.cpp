// Concept 5: std::shared_ptr — shared ownership
// Compile: g++ -std=c++17 -Wall -Wextra 05_shared_ptr.cpp -o 05_shared_ptr

#include <iostream>
#include <memory>

struct Resource {
    int value;
    explicit Resource(int v) : value(v) {
        std::cout << "Resource(" << value << ")\n";
    }
    ~Resource() { std::cout << "~Resource(" << value << ")\n"; }
};

int main() {
    std::shared_ptr<Resource> a;
    {
        auto b = std::make_shared<Resource>(42);
        a = b;
        std::cout << "use_count=" << a.use_count() << '\n';
    }
    std::cout << "b out of scope, use_count=" << a.use_count() << '\n';
    std::cout << "value=" << a->value << '\n';
    return 0;
}
