// Copy Constructor

#include<iostream>

using namespace std;

class Demo
{
    public:

    int marks;

    Demo(int m)
    {
        marks=m;
    }

    Demo (const Demo &obj)
    {
        marks=obj.marks;
        cout<<"Copy Constructor called"<<endl;
    }

    void display()
    {
        cout<<"Marks="<<marks<<endl;
    }
};

int main()
{
    Demo D1(95);
    Demo D2= D1;

    D2.display();

    return 0;
    
}