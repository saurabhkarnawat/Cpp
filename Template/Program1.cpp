//Template

#include <iostream>
using namespace std;

template<typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main() 
{
    cout<<maximum(10,20)<<endl;
    cout<<maximum(10.20,20.20)<<endl;
    cout<<maximum('A','Z')<<endl;
    
    return 0;
}