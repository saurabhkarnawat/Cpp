//Find the maximum of two or three numbers

#include<iostream>

using namespace std;

int maximum(int a,int b)
{
    return (a>b) ? a:b;
}
int maximum(int a,int b,int c)
{
    int max= (a>b)?a:b;
    return (max >c) ? max :c;
}


int main()
{
    cout<<maximum(10,20)<<endl;
    cout<<maximum(10,50,20)<<endl;
}