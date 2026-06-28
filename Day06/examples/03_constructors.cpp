// Concept 3: constructors
// Compile: g++ -std=c++17 -Wall -Wextra 03_constructors.cpp -o 03_constructors

#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& name, int id)
        : name_(name), id_(id) {
        std::cout << "Constructor: " << name_ << " (id=" << id_ << ")\n";
    }

    void print() const {
        std::cout << name_ << " [" << id_ << "]\n";
    }

private:
    std::string name_;
    int id_;
};

int main() {
    Student s("Ada Lovelace", 1815);
    s.print();
    return 0;
}
