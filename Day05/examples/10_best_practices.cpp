// Concept 10: pointer best practices
// Compile: g++ -std=c++17 -Wall -Wextra 10_best_practices.cpp -o 10_best_practices

#include <iostream>

class Buffer {
public:
    explicit Buffer(std::size_t n) : data_(new int[n]{}), size_(n) {}

    ~Buffer() { delete[] data_; }

    Buffer(const Buffer&) = delete;
    Buffer& operator=(const Buffer&) = delete;

    int& at(std::size_t i) { return data_[i]; }
    std::size_t size() const { return size_; }

private:
    int* data_;
    std::size_t size_;
};

int main() {
    Buffer buf(3);
    buf.at(0) = 10;
    buf.at(1) = 20;
    buf.at(2) = 30;

    std::cout << "Buffer contents: ";
    for (std::size_t i = 0; i < buf.size(); ++i) {
        std::cout << buf.at(i) << ' ';
    }
    std::cout << '\n';

    return 0;
}
