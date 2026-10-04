#include <iostream>
using namespace std;
class Engine{
    public:
    void start()
    {
        cout<<"Engine Started"<<endl;
    }
};

class Car{
    private:
    Engine E1;
    public:

    void start()
    {
        E1.start();
        cout<<"Car Started";
    }
};
int main()
{
    Car c1;
    c1.start();
    return 0;
}