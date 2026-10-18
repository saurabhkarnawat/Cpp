#include<iostream>

using namespace std;

class Number
{
     public:

     int x;

     Number(int m)
     {
        x=m;
     }

     Number(const Number &obj)
     {
        x=obj.x;
     }

     void setValue(int n)
     {
        x=n;
     }

     void display()
     {
        cout<<"x="<<x<<endl;
     }
};

int main()
{
    Number n1(10);
    Number n2(n1);


    cout<<"Obj2 value"<<endl;
    n2.display();

    n2.setValue(50);
    
    cout<<"Obj1 value"<<endl;
    n1.display();

    cout<<"Obj2 value"<<endl;
    n2.display();

    return 0;

}