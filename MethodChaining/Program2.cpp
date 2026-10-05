#include<iostream>
using namespace std;

class Calculator{
 
 private:
    int result;

 public:

    Calculator()
    {
        result=0;
    }

    Calculator& add(int x)
    {
        result=result +x;
        return *this;
    }

    Calculator& mul(int x)
    {
        result=result *5;
        return *this;
    }

    Calculator& sub(int x)
    {
        result = result - x;
        return *this;
    }
    void displayRes()
    {
        cout<<"Result:"<<result<<endl;
    }
};


int main()
{
    Calculator C1;
    C1.add(50).mul(5).sub(50);
    C1.displayRes();
}