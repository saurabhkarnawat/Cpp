//Basic Reference Swap 

#include<iostream>
using namespace std;
void swap(int &p, int &q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}
int main()
{
    int a =20;
    int b= 30;
    swap(a,b);
    cout<<"After Swap"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}