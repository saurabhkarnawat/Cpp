//Default Arguments with Function Overloading

//This program will not compile

//Default arguments can cause ambiguity when used with overloaded fucntions



#include <iostream>
using namespace std;

void print(int x)
{
    cout << "Integer: " << x << endl;
}

void print(int x, int y = 100)
{
    cout << "Two values: " << x
         << " " << y << endl;
}

int main()
{
    print(10);
    print(10, 20);

    return 0;
}
