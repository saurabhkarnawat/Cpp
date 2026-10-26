//Struct with Static member Function

#include <iostream>
using namespace std;

struct calculator
{
   static int square(int n)
    {
        return n*n;
    }
};


int main() {

    
    cout<<"Square of 5:"<<calculator::square(5)<<endl;
    cout<<"Square of 8:"<<calculator::square(8)<<endl;
    return 0;
}