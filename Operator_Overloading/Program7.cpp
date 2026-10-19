//Post-increment operator overloading Method 1:

#include<iostream>
using namespace std;

class post
{
    public:

    int x;

    post(int a)
    {
        x=a;
    }

    void operator ++(int)
    {
        x++;
    }
    void display()
    {
        cout<<"X="<<x<<endl;
    }
};

int main()
{
    post p1(10);

    cout<<"Before increment"<<endl;

    p1.display();

    p1++;

    cout<<"After Increment"<<endl;

    p1.display();

    return 0;
}
