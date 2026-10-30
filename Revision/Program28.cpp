//Pure Virtual Function : Run time Polymorphism

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

class cat : public Animal
{
    void sound() override
    {
        cout<<"Cat Meows"<<endl;
    }
};

int main() {

   
    Dog d;
    cat C;

    Animal *ptr;

    ptr=&d;
    ptr->sound();

    ptr=&C;
    ptr->sound();

    return 0;
}