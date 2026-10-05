#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int speed;

public:

    Car& setBrand(string b)
    {
        brand = b;
        return *this;
    }

    Car& setModel(string m)
    {
        model = m;
        return *this;
    }

    Car& setSpeed(int s)
    {
        speed = s;
        return *this;
    }

    void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Speed : " << speed << " km/h" << endl;
    }
};

int main()
{
    Car c;

    c.setBrand("Tata")
     .setModel("Nexon")
     .setSpeed(120);

    c.display();

    return 0;
}