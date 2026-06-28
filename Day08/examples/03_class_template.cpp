// Concept 3: class templates — generic types
// Compile: g++ -std=c++17 -Wall -Wextra 03_class_template.cpp -o 03_class_template

#include <iostream>
#include <string>

template<typename T>
class Stack {
    static constexpr int CAP = 8;
    T data[CAP];
    int top = 0;
public:
    void push(const T& val) {
        if (top < CAP) data[top++] = val;
    }
    T pop() {
        return data[--top];
    }
    int size() const { return top; }
};

int main() {
    Stack<int> ints;
    ints.push(10);
    ints.push(20);
    std::cout << ints.pop() << ' ' << ints.pop() << '\n';

    Stack<std::string> strs;
    strs.push("hello");
    std::cout << strs.pop() << '\n';
    return 0;
}
