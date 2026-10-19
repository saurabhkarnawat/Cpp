//Pre-increment operator overloading using return *this


#include<iostream>
using namespace std;

class pre
{
    public:

    int x;

    pre(int a)
    {
        x=a;
    }

    pre& operator ++()
    {
        x++;
        return *this;
    }
    void display()
    {
        cout<<"X="<<x<<endl;
    }
};

int main()
{
    pre p1(10);

    cout<<"Before increment"<<endl;

    p1.display();

    ++p1;

    cout<<"After Increment"<<endl;

    p1.display();

    return 0;
}