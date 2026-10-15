//Static Member Function

#include<iostream>
using namespace std;

class Demo
{
    public:

    static void display()
    {
        cout<<"Static Member Function"<<endl;
    }
};

int main()
{
    Demo::display();

    return 0;
}
