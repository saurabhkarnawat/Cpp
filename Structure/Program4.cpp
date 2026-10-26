#include <iostream>
using namespace std;

struct Employee
{
    static int count;

    Employee()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total Employees: " << count << endl;
    }
};

int Employee::count = 0;

int main()
{
    Employee::showCount();

    Employee e1;
    Employee e2;
    Employee e3;

    Employee::showCount();

    return 0;
}