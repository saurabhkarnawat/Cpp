//Friend class

#include<iostream>
using namespace std;

class A
{
    private:
    int x=10;

    friend class B;

};

class B
{
   public:
   void display(A obj)
   {
    cout<<"Value of X:"<<obj.x<<endl;
   }
};

int main()
{
    A obj1;
    B obj2;
    obj2.display(obj1);

    return 0;
}