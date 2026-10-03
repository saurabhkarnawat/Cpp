#include <iostream>
using namespace std;

class Temperature
{
private:
    float temp;

public:
    void setTemperature(float t)
    {
        if (t >= -273.15)
            temp = t;
        else
            std::cout << "Invalid temperature\n";
    }

    float getTemperature()
    {
        return temp;
    }
};

int main()
{
    Temperature t;

    t.setTemperature(25.5);

    std::cout << "Temperature = "<< t.getTemperature()<< " C" << std::endl;

    return 0;
}