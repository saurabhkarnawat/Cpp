//Different data types

#include<iostream>

using namespace std;

void show(int a)
{
    cout<<"Integer:"<<a<<endl;
}

void show(float f)
{
    cout<<"Float:"<<f<<endl;
}

void show(char x)
{
    cout<<"Char:"<<x<<endl;
}

int main()
{
    show(10);
    show(3.5f);
    show('A');
    return 0;
}
