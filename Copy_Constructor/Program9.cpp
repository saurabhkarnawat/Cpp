/*Even though we haven't explicitly defined a copy 
 assignment operator, the compiler provides a 
 default copy assignment operator.*/



#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;

    Demo(int a)
    {
        x=a;
    }

    void display()
    {
        cout<<"X="<<x<<endl;
    }
};

int main()
{
    Demo D1(10);
    Demo D2(20);

    cout<<"Before Modification D2 Val:"<<endl;
    D2.display();

    D2=D1;       //Copy Assignment Operator Called

    cout<<"After Modification D2 Val:"<<endl;
    D2.display();

    return 0;
}
