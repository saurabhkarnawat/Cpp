#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void display() final
    {
        cout << "Parent class display()" << endl;
    }
};

class Child : public Parent
{
public:

    // Compilation error: Cannot override final function
    void display()
    {
        cout << "Child class display()" << endl;
    }
};

int main()
{
    Child obj;
    obj.display();

    return 0;
}