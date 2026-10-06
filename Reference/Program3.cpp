//Modify a variable through Refernce

#include<iostream>
using namespace std;
void increase(int &p)
{
    p=p+10;
}
int main()
{
    int a =20;
    increase(a);
    cout<<"After Increase"<<endl;
    cout<<"a="<<a<<endl;
    return 0;
}
    