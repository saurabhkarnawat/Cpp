#include <iostream>
class bankaccount{
  private:
    double balance;
  public:
    void deposit(double amount)
    {
        balance = balance + amount;
    }
    void withdraw(double amount)
    {
        balance = balance - amount;
    }
    void displaybalance()
    {
        std::cout<< "Balance : "<<balance;
    }
};
int main()
{
    bankaccount B1;
    B1.deposit(10000);
    B1.withdraw(2500);
    B1.displaybalance();
}