//Final 

#include <iostream>
using namespace std;

class Parent final
{
public:
    void display()
    {
        cout << "Parent class function" << endl;
    }
};

// Compilation error: Cannot inherit from final class
class Child : public Parent
{
};

int main()
{
    Parent obj;
    obj.display();

    return 0;
}