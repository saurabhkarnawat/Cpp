//Default argument with Strings

#include<iostream>
#include<string>

using namespace std;

void Greet(string name="Guest")
{
    cout<<"Hello,"<<name<<"!"<<endl;
}

int main()
{
    Greet();
    Greet("Saurabh");

    return 0;
}