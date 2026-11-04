#include <iostream>
using namespace std;

template <class T>
class Box
{
    T val;
    public:
    Box(T v)
    {
        val=v;
    }

    void display()
    {
        cout<<"Val="<<val<<endl;
    }
};

int main()
{
    Box<int> B1(10);
    Box<float> B2(10.20);
    Box<char> B3('A');

    B1.display();
    B2.display();
    B3.display();

    return 0;
}