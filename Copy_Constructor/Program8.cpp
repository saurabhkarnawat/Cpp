//Deep Copy

#include <iostream>
using namespace std;

class Array
{
    int *ptr;

public:
    Array(int value)
    {
        ptr = new int;
        *ptr = value;
    }

    // Deep copy constructor
    Array(const Array &obj)
    {
        ptr = new int;
        *ptr= (*obj.ptr);
       //ptr = new int (*obj.ptr);
        cout << "Deep copy performed" << endl;
    }

    void setValue(int value)
    {
        *ptr = value;
    }

    void display()
    {
        cout << "Value = " << *ptr << endl;
    }

    void displayadd()
    {
        cout<<"Add:"<<ptr<<endl;
    }

    ~Array()
    {
        delete ptr;
    }
};

int main()
{
    Array a1(10);

    Array a2(a1);

    cout << "Object a2: ";
    a2.display();
    
    a2.setValue(50);

    cout<<"After a2 val Modification:"<<endl;
    cout << "Object a1: ";
    a1.display();

    cout << "Object a2: ";
    a2.display();

    cout << "Object a1 Add: ";
    a1.displayadd();

    cout << "Object a2 Add: ";
    a2.displayadd();
    return 0;
}