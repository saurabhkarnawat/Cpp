#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    void deposit(float amount)
    {
        if (amount > 0)
            balance = balance + amount;
    }

    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
            balance = balance - amount;
        else
            cout << "Invalid withdrawal" << endl;
    }

    void showBalance()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.deposit(10000);
    account.withdraw(3000);

    account.showBalance();

    return 0;
}