//Dynamically allocate a string

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout<<"Enter String Size: ";
    cin>>size;

    char*str = new char[size+1];

    cout<<"Enter String: ";
    cin>>str;
    cout<<"String="<<str<<endl;

    delete[] str;

    return 0;
}