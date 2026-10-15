//Different order of Parameters types

#include<iostream>

using namespace std;

void display(int a,char b)
{
    cout<<a <<b <<endl;
}

void display(char b,int a)
{
    cout<<b <<a<<endl;
}

int main()
{
    display(10,'A');
    display('A',10);
    return 0;
}