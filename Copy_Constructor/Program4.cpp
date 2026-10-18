#include<iostream>
using namespace std;

class Employee
{
    public:

    int id;
    int salary;

    Employee(int i,int s)
    {

        id=i;
        salary=s;
    }

    Employee(const Employee &obj)
    {
        id=obj.id;
        salary=obj.salary;
    }

    void display()
    {
        cout<<"Id:"<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main()
{
     Employee E1(25,5000);
     Employee E2(E1);

     E1.display();
     E2.display();
}