//Runtime Polymorphism Using a Virtual Function

#include <iostream>
using namespace std;

class Animal
{
    public:

    virtual void sound()
    {
       cout<<"Animal Sound"<<endl;
    }
};

class Dog : public Animal
{
  public:
    void sound() override
    {
        cout<<"Dog barks"<<endl;
    }
};

int main() {
    Animal *ptr;

    Dog d;

    ptr = &d;

    ptr->sound();

    return 0;
}