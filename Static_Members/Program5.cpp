//Static Member to generate unique ID's

#include<iostream>

using namespace std;

class Employee
{
    public:
    int id;
    static int nextid;

    Employee()
    {
        id=++nextid;
    }
    void display()
    {
        cout<<"ID:"<<id<<endl;
    }


};
int Employee:: nextid=100;
int main()
{
    Employee E1,E2,E3;

    E1.display();
    E2.display();
    E3.display();

    return 0;
}