//Pure Virtual Function

#include <iostream>
using namespace std;

class Animal
{
  public:
    virtual void sound() = 0;
};

class Dog : public Animal
{
  public:
    void sound() override
    {
        cout<<"Dog Barks"<<endl;
    }
};

int main() {

   // Animal A; //Cannot create an abstract class object
    Dog d;
    d.sound();

    return 0;
}