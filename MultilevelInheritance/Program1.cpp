#include<iostream>
using namespace std;

class Grandfather
{
  public:
    void House(){
        cout<<"House"<<endl;
    }
};

class Father : public Grandfather
{
  public:
    void car()
    {
        cout<<"Car"<<endl;
    }
};

class son : public Father
{
  public:
    void bike()
    {
        cout<<"bike"<<endl;
    }
};

int main()
{
    son s;
    s.House();
    s.car();
    s.bike();
    return 0;
}