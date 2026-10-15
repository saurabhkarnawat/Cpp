//Default argument with one parameter

#include<iostream>

using namespace std;

void show(int x=100)
{
    cout<<x<<endl;
}

int main()
{
    show();
    show(50);

    return 0;
}