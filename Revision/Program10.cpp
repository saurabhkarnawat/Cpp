#include <iostream>
using namespace std;

class Calculator
{
public:
    int value;

    Calculator(int v)
    {
        value = v;
    }

    // Returns a reference to an existing object
    Calculator& getObject(Calculator &obj)
    {
        return obj;
    }
};

int main()
{
    Calculator obj1(10);
    Calculator obj2(20);

    Calculator &ref = obj1.getObject(obj2);

    cout << "Before modification: " << obj2.value << endl;

    ref.value = 100;

    cout << "After modification: " << obj2.value << endl;

    return 0;
}