#include <iostream>

class Auditor;

class Account {
private:
    double balance;

public:
    explicit Account(double amount) : balance(amount) {}

    friend class Auditor;
};

class Auditor {
public:
    void inspect(const Account& account) const {
        std::cout << "Account Balance: " << account.balance << '\n';
    }
};

int main() {
    Account account(5000.0);
    Auditor auditor;

    auditor.inspect(account);
    return 0;
}
