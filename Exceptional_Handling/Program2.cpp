//Multiple catch Exceptional Handling

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here

   int choice =0;

    try
        {
            if(choice ==0)
                throw(10);
            else if (choice ==2)
              throw 3.14;
          else
          throw 'A';
        }

        catch(int x)
        {
            cout<<"Int Exceptional Behaviour";
        }
        catch(double x)
      {
         cout<<"Double Exceptional Behaviour";
      }
        catch(char x)
      {
        cout<<"Char Exceptional Behaviour";
      }
    return 0;
}