//Private Class Inheritance 
//Public and Protected members accessible in derived class
//Members not accessible in further derived classes


#include <iostream>
using namespace std;

class Grandfather
{
public:
    int a = 10;

protected:
    int b = 20;
};

class Father : private Grandfather
{
public:
    void display()
    {
        cout << a << endl; // Allowed
        cout << b << endl; // Allowed
    }
};

class Son : public Father
{
public:
    void show()
    {
       // cout << a; // Error
       // cout << b; // Error
    }
};

int main()
{
    Son obj;
    obj.display();
    return 0;
}