//Basic Reference 

#include<iostream>
using namespace std;

int main()
{
    int a =20;
    int &ref =a;

    cout<<"a= "<< a <<endl;
    cout<<"ref ="<< ref <<endl;

    ref=50;

    cout<<"after changing ref:" <<endl;
    cout<<"a="<< a <<endl;

    return 0;
}
    