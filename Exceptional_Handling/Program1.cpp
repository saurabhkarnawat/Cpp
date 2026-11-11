//Exceptional Handling

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here

   int a=10,b=0;

    try
        {
            if(b==0)
                throw(b);
            cout<<a/b;
        }

        catch(int x)
        {
            cout<<"Exceptional Behaviour";
        }
    return 0;
}