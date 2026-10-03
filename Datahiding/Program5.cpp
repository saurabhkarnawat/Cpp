#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        if (s > 0)
            salary = s;
    }

    void increaseSalary(int amount)
    {
        if (amount > 0)
            salary = salary + amount;
    }

    void displaySalary()
    {
        std::cout << "Salary = " << salary << std::endl;
    }
};

int main()
{
    Employee e;

    e.setSalary(50000);
    e.increaseSalary(5000);

    e.displaySalary();

    return 0;
}