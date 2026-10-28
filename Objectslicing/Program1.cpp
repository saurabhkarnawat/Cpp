//Object Slicing

#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void display()
    {
    cout<<"I m in Base"<<endl;    
    }
    
};

class derived: public Base
{
    public:
    void display() override
    {
        cout<<"I m in derived"<<endl;
    }
};

int main()
{
    derived d1;
    Base b1=d1;
    b1.display();
    

    return 0;
}