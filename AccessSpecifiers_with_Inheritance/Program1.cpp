// Access Specifiers with Inheritance :

#include <iostream>
using namespace std;

class Parent
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Public a: " << a << endl;
        cout << "Protected b: " << b << endl;

        // cout << c; // Error: private member
    }
};

int main()
{
    Child obj;

    cout << "Public a: " << obj.a << endl;

    // cout << obj.b; // Error: protected member
    // cout << obj.c; // Error: private member

    obj.display();

    return 0;
}
