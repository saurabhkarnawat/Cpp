//Error : Parameters with defaults should generally be placed at the end
 

#include <iostream>
using namespace std;

int calculate(int a=10, int b);

int calculate(int a, int b)
{
    return a + b;
}

int main()
{
    cout << calculate(5) << endl;
    cout << calculate(5, 20) << endl;

    return 0;
}