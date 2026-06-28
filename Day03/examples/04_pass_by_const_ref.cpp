// Concept 4: pass by const reference
// Compile: g++ -std=c++17 -Wall -Wextra 04_pass_by_const_ref.cpp -o 04_pass_by_const_ref

#include <iostream>
#include <string>

void print_greeting(const std::string& name) {
    std::cout << "Hello, " << name << "!\n";
}

int main() {
    std::string user = "Ada";
    print_greeting(user);
    print_greeting("World");   // binds to temporary — OK with const ref
    return 0;
}
