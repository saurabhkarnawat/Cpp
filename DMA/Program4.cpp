//Dynamically creating an Object

#include<iostream>
using namespace std;

class Student
{
    public:

    int roll;

    void display()
    {
        cout<<"Roll= "<<roll<<endl;
    }
};



int main()
{
    Student *ptr;

    ptr=new Student;

    ptr->roll=25;

    ptr->display();

    delete ptr;
    
    return 0;
}