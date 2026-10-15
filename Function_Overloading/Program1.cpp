// Function Overloading 


#include<iostream>
using namespace std;

int add(int a)
{
    cout<<"One Number"<<a<<endl;
}

int add(int a,int b)
{
    cout<<"result:"<<a+b<<endl;
}

int add(int a,int b,int c)
{
    cout<<"result:"<<a+b+c<<endl;
}



int main()
{
    add(10);
    add(10,20);
    add(10,20,30);
}