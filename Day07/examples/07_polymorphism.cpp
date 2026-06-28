// Concept 7: polymorphism via base pointer / reference
// Compile: g++ -std=c++17 -Wall -Wextra 07_polymorphism.cpp -o 07_polymorphism

#include <iostream>
#include <memory>
#include <vector>

class Employee {
public:
    virtual double salary() const = 0;
    virtual void describe() const = 0;
    virtual ~Employee() = default;
};

class Engineer : public Employee {
    double base;
public:
    explicit Engineer(double b) : base(b) {}
    double salary() const override { return base * 1.2; }
    void describe() const override { std::cout << "Engineer\n"; }
};

class Manager : public Employee {
    double base;
public:
    explicit Manager(double b) : base(b) {}
    double salary() const override { return base * 1.5; }
    void describe() const override { std::cout << "Manager\n"; }
};

int main() {
    std::vector<std::unique_ptr<Employee>> team;
    team.push_back(std::make_unique<Engineer>(80000));
    team.push_back(std::make_unique<Manager>(90000));

    double total = 0.0;
    for (const auto& e : team) {
        e->describe();
        total += e->salary();
    }
    std::cout << "Total payroll: " << total << '\n';
    return 0;
}
