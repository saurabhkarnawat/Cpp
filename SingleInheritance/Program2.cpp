#include<iostream>
using namespace std;

class Vehicle
{
   public:
   void start()
   {
      cout<<"Vehicle Started"<<endl;
   }
};

class car : public Vehicle
{
    public:
    void drive()
    {
        cout<<"Car is Driving"<<endl;
    }

};

int main()
{
    car c;
    c.start();
    c.drive();
    return 0;
}
