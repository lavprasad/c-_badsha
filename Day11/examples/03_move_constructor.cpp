// Concept 3: move constructor & move assignment
// Compile: g++ -std=c++17 -Wall -Wextra 03_move_constructor.cpp -o 03_move_constructor

#include <iostream>
#include <utility>

class Buffer {
    int* data;
    std::size_t len;
public:
    explicit Buffer(std::size_t n) : data(new int[n]()), len(n) {
        std::cout << "construct " << len << '\n';
    }

    ~Buffer() {
        delete[] data;
        std::cout << "destroy " << len << '\n';
    }

    Buffer(const Buffer& o) : data(new int[o.len]), len(o.len) {
        std::cout << "copy " << len << '\n';
    }

    Buffer(Buffer&& o) noexcept : data(o.data), len(o.len) {
        o.data = nullptr;
        o.len = 0;
        std::cout << "move " << len << '\n';
    }

    Buffer& operator=(Buffer&& o) noexcept {
        if (this != &o) {
            delete[] data;
            data = o.data;
            len = o.len;
            o.data = nullptr;
            o.len = 0;
            std::cout << "move-assign\n";
        }
        return *this;
    }
};

int main() {
    Buffer a(100);
    Buffer b = std::move(a);
    Buffer c(50);
    c = std::move(b);
    return 0;
}
