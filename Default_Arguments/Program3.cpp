//Default Argument with Multiplication function

#include<iostream>

using namespace std;

int multiply(int a,int b=10)
{
    return a*b;
}

int main()
{
    cout<<multiply(5)<<endl;
    cout<<multiply(5,10)<<endl;

    return 0;
}