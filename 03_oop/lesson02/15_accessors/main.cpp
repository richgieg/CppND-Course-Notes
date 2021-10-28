#include <iostream>
#include <string>

class BankAccount
{
private:
    int account_number;
    std::string owner_name;
    double available_funds;

public:
    BankAccount(int account_number, std::string owner_name, double available_funds):
        account_number(account_number), owner_name(owner_name), available_funds(available_funds) {}
    int AccountNumber() const;
    void AccountNumber(int account_number);
    std::string OwnerName() const;
    void OwnerName(std::string owner_name);
    double AvailableFunds() const;
    void AvailableFunds(double available_funds);
};

int BankAccount::AccountNumber() const {
    return account_number;
}

void BankAccount::AccountNumber(int account_number) {
    this->account_number = account_number;
}

std::string BankAccount::OwnerName() const {
    return owner_name;
}

void BankAccount::OwnerName(std::string owner_name) {
    this->owner_name = owner_name;
}

double BankAccount::AvailableFunds() const {
    return available_funds;
}

void BankAccount::AvailableFunds(double available_funds) {
    this->available_funds = available_funds;
}

int main(){
    BankAccount b(123, "Richard", 50000.45);
    std::cout << b.AccountNumber() << "\n";
    std::cout << b.OwnerName() << "\n";
    std::cout << b.AvailableFunds() << "\n";

    b.OwnerName("Fred");
    std::cout << b.OwnerName() << "\n";
}
