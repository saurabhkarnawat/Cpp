//If virtual function is Private then also Run time Polymorphism is 
//Possible 

#include <iostream>
using namespace std;

class Animal
{
    private:
    virtual void sound()
    {
       cout<<"Animal Sound"<<endl;
    }
    public:
    void callsound()
    {
       sound();
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

    ptr->callsound();

    return 0;
}