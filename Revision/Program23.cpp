//Friend Function to Swap Private Data of Two Objects

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

    void display()
    {
        cout << value << endl;
    }

    friend void swapNumbers(Number &n1, Number &n2);
};

void swapNumbers(Number &n1, Number &n2)
{
    int temp = n1.value;
    n1.value = n2.value;
    n2.value = temp;
}

int main()
{
    Number n1(10);
    Number n2(20);

    cout << "Before swapping:" << endl;

    n1.display();
    n2.display();

    swapNumbers(n1, n2);

    cout << "After swapping:" << endl;

    n1.display();
    n2.display();

    return 0;
}