//Overloading using const and non-const references 

#include<iostream>

using namespace std;

void display(int &a)
{
    cout<<"Non Ref:"<<a<<endl;
}

void display(const int &b)
{
    cout<<"Const Ref:"<<b<<endl;
}

int main()
{
    int a=10;
    const int b=20;
    display(a);
    display(b);
    return 0;
}