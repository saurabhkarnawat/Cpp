#include <iostream>
using namespace std;

class Demo
{
    int x;

public:
    Demo(int n)
    {
        x = n;
        cout << "Parameterized constructor" << endl;
    }

    Demo(const Demo &obj)
    {
        x = obj.x;
        cout << "Copy constructor" << endl;
    }

    void display()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    Demo d1(10);

    Demo d2 = d1;

    Demo d3(d1);

    Demo d4 = d2;

    d1.display();
    d2.display();
    d3.display();
    d4.display();

    return 0;
}