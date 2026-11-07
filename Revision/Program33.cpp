#include<iostream>
using namespace std;

class Base{
    public: 
    void show()
    {
        cout<<"Base Show"<<endl;
    }

    void show(int x)
    {
        cout<<"Base Show(int)"<<endl;
    }
};

class Derived: public Base{
    
    public:
    using Base::show;      // Name Hiding Solution using 'using' 
    void show(double x)
    {
        cout<<"Derived show Double"<<endl;
    }
};

int main()
{
    Derived D1;
    D1.show(10.5);

    D1.show();

   
    
    return 0;
}