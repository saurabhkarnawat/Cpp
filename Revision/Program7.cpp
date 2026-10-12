// Revision Program 7 : Swap two objects

#include<iostream>
using namespace std;

class number
{
  public:
    int num;
};

void swapobjects(number &a, number &b)
{
    a.num=a.num + b.num;
    b.num=a.num - b.num;
    a.num=a.num - b.num;
    
}


int main()
    {
        number n1,n2;

        n1.num=10;
        n2.num=20;

        cout<<"Before Swapping: "<<endl;
        cout<<"n1= "<<n1.num<<endl;
        cout<<"n2= "<<n2.num<<endl;

        swapobjects(n1,n2);

        cout<<"After Swapping: "<<endl;
        cout<<"n1= "<<n1.num<<endl;
        cout<<"n2= "<<n2.num<<endl;

        return 0;
    }