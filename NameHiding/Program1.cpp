//Base Name Hiding

#include<iostream>
using namespace std;

class Base
{
   public:
   void show()
   {
    cout<<"Base Show"<<endl;
   }
};

class Derived : public Base
{
    public:
    void show()
    {
        cout<<"Derived show"<<endl;
    }
};

int main()
{
    Derived D1;
    D1.show();
    return 0;
}