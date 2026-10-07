#include <iostream>
using namespace std;

class GPS
{
public:
    void getLocation()
    {
        cout << "Getting GPS location" << endl;
    }
};

class Bluetooth
{
public:
    void connectBluetooth()
    {
        cout << "Bluetooth connected" << endl;
    }
};

class SmartDevice : public GPS, public Bluetooth
{
public:
    void displayDevice()
    {
        cout << "Smart device is active" << endl;
    }
};

int main()
{
    SmartDevice device;

    device.getLocation();
    device.connectBluetooth();
    device.displayDevice();

    return 0;
}