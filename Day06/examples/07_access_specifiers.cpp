// Concept 7: access specifiers — public, private, protected
// Compile: g++ -std=c++17 -Wall -Wextra 07_access_specifiers.cpp -o 07_access_specifiers

#include <iostream>

class BankAccount {
public:
    BankAccount(double initial) : balance_(initial) {}

    void deposit(double amount) {
        if (amount > 0.0) {
            balance_ += amount;
        }
    }

    double balance() const { return balance_; }

private:
    double balance_;
};

int main() {
    BankAccount acct(100.0);
    acct.deposit(50.0);
    std::cout << "Balance: " << acct.balance() << '\n';
    // acct.balance_ = 999999;  // error: private
    return 0;
}
