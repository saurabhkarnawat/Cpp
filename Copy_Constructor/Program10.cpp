//Explicit copy assignment Operator

#include<iostream>
using namespace std;

class student
{
    public:
    int roll;
    int marks;

    student(int r,int m)
    {
        roll=r;
        marks=m;
    }

    student& operator=(const student &obj)
    {
        roll=obj.roll;
        marks=obj.marks;
        return *this;
    }

    void display()
    {
        cout<<"Roll:"<<roll<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};


int main()
{
    student s1(25,95);
    student s2(26,96);

    cout<<"Before assignment:"<<endl;

    s1.display();
    s2.display();

    s2=s1;

    cout<<"After Assignment:"<<endl;

    s2.display();

    return 0;



}