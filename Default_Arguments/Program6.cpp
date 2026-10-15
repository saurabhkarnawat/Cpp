//Calculate power using Default Argument

#include<iostream>
using namespace std;

int power(int base,int exponent=2)
{
    int res=1;
    for(int i=0;i<exponent;i++)
    {
        res*=base;
    }
    return res;
}
int main()
{
    cout<<power(5)<<endl;
    cout<<power(2,3)<<endl;
    return 0;
}
