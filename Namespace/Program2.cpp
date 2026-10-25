//Namespace with same variable and function name

#include <iostream>
using namespace std;

namespace A
{
     int num=10;
     void display()
    {
        cout<<"Inside first namespace:"<<endl;
        cout<<"num="<<num<<endl;
    }
}

namespace B
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

    cout<<A::num<<endl;
    A::display();
    cout<<B::num<<endl;
    B::display();
    return 0;
}