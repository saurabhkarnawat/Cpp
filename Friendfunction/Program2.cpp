#include<iostream>

using namespace std;

class Number
{
    private:
    int x;
    int y;
    public:
    Number(int a,int b)
    {
        x=a;
        y=b;
    }
    friend int add(Number n);
};

int add (Number n)
{
    return n.x+n.y;
}

int main()
{
    Number n1(10,20);
    cout<<"Sum:"<<add(n1)<<endl;

    return 0;

}