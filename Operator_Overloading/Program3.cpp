//Operator Overloading to Multiply two Objects

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

   demo operator *(demo obj)
   {
    demo temp(0);
    temp.x=x*obj.x;
    return temp;
   }

   void display()
   {
    cout<<"x="<<x<<endl;
   }
};

int main()
{
    demo d1(10),d2(20);

    demo d3(0);

    d3=d1*d2;

    d3.display();

    return 0;
}