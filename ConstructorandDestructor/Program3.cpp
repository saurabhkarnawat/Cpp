#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:

    // Default constructor
    Rectangle()
    {
        length = 1;
        width = 1;
    }

    // Parameterized constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        cout << "Area = " << length * width << endl;
    }

    ~Rectangle()
    {
        cout << "Rectangle destroyed" << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(10, 5);

    r1.area();
    r2.area();

    return 0;
}