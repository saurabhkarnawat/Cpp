// Explicit shallow copy constructor


#include <iostream>
using namespace std;

class Demo
{
public:
    int *ptr;

    Demo(int value)
    {
        ptr = new int;
        *ptr = value;
    }

    // Explicit shallow copy constructor
    Demo(const Demo &obj)
    {
        ptr = obj.ptr;
    }
};

int main()
{
    Demo d1(25);

    Demo d2(d1);

    cout << "d1 value = " << *d1.ptr << endl;
    cout << "d2 value = " << *d2.ptr << endl;

    cout << "d1 address = " << d1.ptr << endl;
    cout << "d2 address = " << d2.ptr << endl;

    return 0;
}