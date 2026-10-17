//Operator Overloading to divide two Objects

#include<iostream>

using namespace std;

class demo
{
   public:
   int x;

   demo(int a)
   {
     x=a;
   }

   demo operator /(demo &obj)
   {
    demo temp(0);
    if(obj.x !=0)
    temp.x=x/obj.x;
    else
    cout<<"Invalid Input"<<endl;
    return temp;
   }

   void display()
   {
    cout<<"x="<<x<<endl;
   }
};

int main()
{
    demo d1(20),d2(10);

    demo d3(0);

    d3=d1/d2;

    d3.display();

    return 0;
}