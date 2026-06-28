// Concept 1: base & derived classes — the "is-a" relationship
// Compile: g++ -std=c++17 -Wall -Wextra 01_basic_inheritance.cpp -o 01_basic_inheritance

#include <iostream>
#include <string>

class Person {
public:
    std::string name;

    Person(std::string n) : name(std::move(n)) {}

    void introduce() const {
        std::cout << "I am " << name << '\n';
    }
};

class Student : public Person {
public:
    int grade;

    Student(std::string n, int g) : Person(std::move(n)), grade(g) {}

    void study() const {
        std::cout << name << " is studying (grade " << grade << ")\n";
    }
};

int main() {
    Student s("Alice", 10);
    s.introduce();   // inherited from Person
    s.study();       // Student's own method
    return 0;
}
