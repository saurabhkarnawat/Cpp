#include <iostream>
using namespace std;

struct Device
{
    int deviceId;
    static int totalDevices;

    Device(int id)
    {
        deviceId = id;
        totalDevices++;
    }

    void showDevice()
    {
        cout << "Device ID: " << deviceId << endl;
    }

    static void showTotal()
    {
        cout << "Total Devices Created: "
             << totalDevices << endl;
    }
};

int Device::totalDevices = 0;

int main()
{
    Device::showTotal();

    Device d1(101);
    Device d2(102);

    d1.showDevice();
    d2.showDevice();

    Device::showTotal();

    Device d3(103);

    d3.showDevice();

    Device::showTotal();

    return 0;
}