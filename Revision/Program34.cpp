//Class Template : Two different data types


#include <iostream>
using namespace std;

template <class T1, class T2>
class Data
{
    T1 x;
    T2 y;
    public:
    Data(T1 a, T2 b)
    {
        x=a;
        y=b;
    }
        
    

    void display()
    {
        cout<<"X="<<x<<endl;
        cout<<"Y="<<y<<endl;
    }
};

int main()
{
    Data<int,float> B1(10,10.20);

    B1.display();

    Data<float,char> B2(10.30,'A');

    B2.display();


    return 0;
}