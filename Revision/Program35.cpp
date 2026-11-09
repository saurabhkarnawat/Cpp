//Template: Function

#include <iostream>
using namespace std;

template <typename T>
void swapData(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    swapData(x, y);

    cout << x << " " << y << endl;

    float a = 1.5, b = 2.5;

    swapData(a, b);

    cout << a << " " << b << endl;

    return 0;
}