//Method 2 Post-increment operator overloading 


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

    post operator ++(int)
    {
        post temp = *this;
        x++;
        return temp;
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