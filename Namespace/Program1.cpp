//Namespace

#include <iostream>
using namespace std;

namespace First
{
     int num=10;
     void display()
    {
        cout<<"Inside first namespace:"<<endl;
        cout<<"num="<<num<<endl;
    }
}

int main()
{

    cout<<First::num<<endl;
    First::display();

    return 0;
}