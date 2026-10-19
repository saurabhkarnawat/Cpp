//DMA with copy assignment Operator(Deep copy)

#include<iostream>
using namespace std;

class Demo
{
   public:
   int *ptr;

   Demo(int m)
   {
    ptr=new int(m);
   }

   Demo& operator =(Demo &obj)
   {
    if(this != &obj)
    {
        *ptr=*(obj.ptr);
    }
    return *this;
   }

   void display()
   {
    cout<<"Val:"<<*ptr<<endl;
   }

   ~Demo()
   {
    delete ptr;
   }

};

int main()
{
    Demo D1(50);
    Demo D2(100);

    cout<<"Before Assignment:"<<endl;

    D1.display();
    D2.display();

    D2=D1;
  
    cout<<"After Assignment:"<<endl;

    D1.display();
    D2.display();

    return 0;
}
