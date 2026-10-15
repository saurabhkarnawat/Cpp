//Constructor Overloading 

#include<iostream>
using namespace std;

class Number
{
   public:
   Number(int x)
   {
    cout<<x<<endl;
   }

   Number(int x,int y)
   {
    cout<<x<<" "<<y<<endl;
   }

   Number(int x,int y,int z)
   {
    cout<<x<<" "<<y<<" "<<z<<endl;
   }
};

int main()
{
   Number n1(10);
   Number n2(10,20);
   Number n3(10,20,30);
   return 0; 
}