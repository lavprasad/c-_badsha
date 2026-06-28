// Concept 8: const member functions
// Compile: g++ -std=c++17 -Wall -Wextra 08_const_members.cpp -o 08_const_members

#include <iostream>
#include <string>

class Book {
public:
    Book(std::string title, int pages) : title_(std::move(title)), pages_(pages) {}

    std::string title() const { return title_; }
    int pages() const { return pages_; }

    void set_title(const std::string& t) { title_ = t; }

private:
    std::string title_;
    int pages_;
};

void print_info(const Book& b) {
    std::cout << b.title() << " (" << b.pages() << " pages)\n";
}

int main() {
    Book b("The C++ Language", 900);
    print_info(b);
    return 0;
}
