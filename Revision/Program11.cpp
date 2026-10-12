//Dynamic Object Creation

#include<iostream>
using namespace std;

class Employee
{
  public:
    int id;
    int salary;

  void getid(int i)
    {
        id=i;
    }

  void getsalary(int s)
    {
        salary =s;
    }
  void display()
    {
        cout<<"ID ="<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main(){

    
    Employee *ptr = new Employee;

    ptr->getid(25);
    ptr->getsalary(50000);
    ptr->display();

    delete ptr;

    return 0;
}
