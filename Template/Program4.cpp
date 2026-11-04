//Class Template


#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
    public:
    T add(T a, T b)
    {
        return a+b;
    }

    T multiply(T a, T b)
    {
        return a*b;
    }
};

int main()
{
    Calculator<int> B1;

    cout<<"Add Res="<<B1.add(10,20)<<endl;
    cout<<"Mul Res="<<B1.multiply(10,20)<<endl;    

    Calculator<float> B2;

    cout<<"Add Res="<<B2.add(10.20,20.20)<<endl;    
    cout<<"Mul Res="<<B2.multiply(10.10,20.10)<<endl;    

    return 0;
}