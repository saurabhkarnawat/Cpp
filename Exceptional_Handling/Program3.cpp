//catch all Exceptional Handling

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here

    try
        {
           throw 10.2f;
        }

        catch(int x)
        {
            cout<<"Int Exceptional Behaviour";
        }
        catch(...)
      {
        cout<<"Unkown Exceptional Behaviour";
      }
     
    return 0;
}