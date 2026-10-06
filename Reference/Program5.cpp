#include<iostream>
using namespace std;

int& getx(int &num)
{
    return num;
}
int main()
{
    int x =100;
    getx(x)=500;
    cout<<"X="<<x<<endl;
    return 0;
}
    