//Reverse a string

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cout<<"Enter a String:"<<endl;
    cin>>str;

    int start =0;
    int end =str.length()-1;

    while(start<end)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end]= temp;
            start++;
            end--;
        }
    cout<<"Reverse string:"<<str;
    return 0;
}