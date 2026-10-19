// Rule of three

#include <iostream>
using namespace std;

class Number
{
    int *ptr;

public:
    // Constructor
    Number(int x)
    {
        ptr = new int(x);
        cout << "Constructor called" << endl;
    }

    // Copy constructor
    Number(const Number &obj)
    {
        ptr = new int(*obj.ptr);
        cout << "Copy constructor called" << endl;
    }

    // Copy assignment operator
    Number& operator=(const Number &obj)
    {
        cout << "Copy assignment operator called" << endl;

        if (this != &obj)
        {
            *ptr = *obj.ptr;
        }

        return *this;
    }

    void display()
    {
        cout << "Value = " << *ptr << endl;
    }

    // Destructor
    ~Number()
    {
        cout << "Destructor called" << endl;
        delete ptr;
    }
};

int main()
{
    Number obj1(10);

    cout << "\nCreating obj2:" << endl;
    Number obj2 = obj1;

    cout << "\nCreating obj3:" << endl;
    Number obj3(30);

    cout << "\nAssigning obj1 to obj3:" << endl;
    obj3 = obj1;

    cout << "\nDisplaying objects:" << endl;
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}