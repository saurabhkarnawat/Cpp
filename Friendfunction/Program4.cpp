//Friend Function to compare two objects

#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    friend void compare(Number n1, Number n2);
};

void compare(Number n1, Number n2)
{
    if (n1.value > n2.value)
    {
        cout << n1.value << " is greater" << endl;
    }
    else if (n2.value > n1.value)
    {
        cout << n2.value << " is greater" << endl;
    }
    else
    {
        cout << "Both numbers are equal" << endl;
    }
}

int main()
{
    Number n1(50);
    Number n2(30);

    compare(n1, n2);

    return 0;
}