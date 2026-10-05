#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:

    BankAccount()
    {
        balance = 0;
    }

    BankAccount& deposit(int amount)
    {
        balance = balance + amount;
        return *this;
    }

    BankAccount& withdraw(int amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient balance" << endl;

        return *this;
    }

    void display()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.deposit(10000)
           .withdraw(2000)
           .deposit(5000)
           .withdraw(1000);

    account.display();

    return 0;
}