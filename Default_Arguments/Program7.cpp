//Default argument in constructor

#include<iostream>

using namespace std;

class Number
{

    int x;
    public:
    
    Number(int num=10)
    {
       x=num;
    }
    
    void display()
    {
        cout<<"X="<<x<<endl;
    }

};

int main()
{
    Number n1;
    Number n2(45);

    n1.display();
    n2.display();
}