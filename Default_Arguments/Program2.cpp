//Default arguments with two parameters

#include<iostream>

using namespace std;

void add(int x=10,int y=20)
{
    cout<<"Sum:"<<x+y<<endl;
}

int main()
{
    add();
    add(5);
    add(15,25);

    return 0;
}