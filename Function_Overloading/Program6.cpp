//Swap two values

#include<iostream>

using namespace std;

void swapval(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

void swapval(double *a, double *b)
{
    double temp =*a;
    *a=*b;
    *b= temp;
}

int main()
{
    int x=10,y=20;

    double a=1.5,b=2.5;

    swapval(&x,&y);

    swapval(&a,&b);

    cout<<x<<" "<<y<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}