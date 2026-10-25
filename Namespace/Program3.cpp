//Namespace using "using keyword" 

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



int main()
{
    using namespace A;
    
    cout<<num<<endl;
    display();
    
    return 0;
}