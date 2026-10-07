#include <iostream>
using namespace std;

class BankAccount
{
protected:
    double balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(double amount)
    {
        balance += amount;
    }
};

class SavingsAccount : public BankAccount
{
public:
    void addInterest()
    {
        balance = balance + balance * 0.05;
    }

    void display()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    SavingsAccount account;

    account.deposit(10000);
    account.addInterest();
    account.display();

    return 0;
}