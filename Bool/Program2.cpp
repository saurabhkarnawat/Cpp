#include <iostream>
using namespace std;

int main()
{
    bool motor = false;

    cout << "Motor initially: ";

    if(motor)
        cout << "ON\n";
    else
        cout << "OFF\n";

    // Turn motor ON
    motor = true;

    cout << "Motor after starting: ";

    if(motor)
        cout << "ON\n";
    else
        cout << "OFF\n";

    // Turn motor OFF
    motor = false;

    cout << "Motor after stopping: ";

    if(motor)
        cout << "ON\n";
    else
        cout << "OFF\n";

    return 0;
}