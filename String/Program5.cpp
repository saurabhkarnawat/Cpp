#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter a string :"<<endl;
    getline(cin,s1);
    string s2;
    cout<<"Enter a string:"<<endl;
    getline(cin,s2);

    cout<<"Concatenate:"<<s1+s2<<endl;
    return 0;
}