#include<iostream>
#include<string>
using namespace std;

class Employee
{
    protected:
    string name;
    float salary;

    public:
    void set(string s,float sal)
    {
        name=s;
        salary=sal;
    }
};

class Manager : public Employee
{
   public:
   void display()
   {
    cout<<"Name:"<<name<<endl;
    cout<<"Salary:"<<salary<<endl;
   }
};

int main()
{
    Manager m;
    m.set("Saurabh",100000);
    m.display();
    return 0;

}