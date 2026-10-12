//Revision Program 2

#include<iostream>
#include<string>
using namespace std;

class Bankaccount
{
    private:
    float balance=10000;

    public:
    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        if(amount < balance)
        {
            balance = balance - amount;
        }
    }

    void getBalance()
    {
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    Bankaccount B;
    B.deposit(5000);
    B.withdraw(3000);
    B.getBalance();
    return 0;
}