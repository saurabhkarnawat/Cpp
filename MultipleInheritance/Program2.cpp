#include<iostream>
using namespace std;

class Engine
{
   public:
   void startEngine()
   {
    cout<<"Engine Started"<<endl;
   }
};

class Musicsystem
{
    public:
    void music()
    {
        cout<<"Music is On"<<endl;
    }
};

class car :public Engine, public Musicsystem

{
    public:
    void Carstart()
    {
        cout<<"Car started"<<endl;
    }
};

int main()
{
    car Nexon;
    Nexon.startEngine();
    Nexon.music();
    Nexon.Carstart();
    return 0;
}