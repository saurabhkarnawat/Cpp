#include<iostream>

using namespace std;

class Demo
{
   public:
   static int count;
};

int Demo::count =0;

int main()
{
    Demo d1,d2;
    d1.count=10;

    cout<<d1.count<<endl;
    cout<<d2.count<<endl;
    cout<<Demo::count<<endl;

    return 0;
}