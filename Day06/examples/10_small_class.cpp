// Concept 10: putting it together — a small class
// Compile: g++ -std=c++17 -Wall -Wextra 10_small_class.cpp -o 10_small_class

#include <iostream>
#include <string>

class TodoItem {
public:
    TodoItem(std::string text) : text_(std::move(text)), done_(false) {}

    void mark_done() { done_ = true; }
    bool is_done() const { return done_; }
    const std::string& text() const { return text_; }

    void print() const {
        std::cout << (done_ ? "[x] " : "[ ] ") << text_ << '\n';
    }

private:
    std::string text_;
    bool done_;
};

int main() {
    TodoItem t("Learn C++ classes");
    t.print();
    t.mark_done();
    t.print();
    return 0;
}
