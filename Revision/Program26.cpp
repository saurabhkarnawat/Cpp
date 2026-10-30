//Operator Overloading : Sum of Objects


#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> x;
    }

    void display()
    {
        cout << "Sum = " << x << endl;
    }

    Number operator+(Number obj)
    {
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }
};

int main()
{
    Number o1, o2, o3, o4;

    o1.getData();
    o2.getData();
    o3.getData();

    o4 = o1 + o2 + o3;

    o4.display();

    return 0;
}