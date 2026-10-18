//When both destructors execute, they would each try to delete the same allocation, causing undefined behavior.


#include<iostream>

using namespace std;

class Number
{
     public:

     int *ptr;

     Number(int m)
     {
        ptr= new int;
        *ptr=m;
     }

     void setValue(int n)
     {
        *ptr=n;
     }

     void display()
     {
        cout<<"x="<<*ptr<<endl;
     }

     void displayadd()
    {
        cout<<"Add:"<<ptr<<endl;
    }
    ~Number()
    {
        delete ptr;
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    Number n1(10);
    Number n2(n1);


    cout<<"Obj2 value"<<endl;
    n2.display();

    n2.setValue(50);
    
    cout<<"Obj1 value"<<endl;
    n1.display();

    cout<<"Obj2 value"<<endl;
    n2.display();

    cout<<"Obj1 Add:"<<endl;
    n1.displayadd();

    cout<<"Obj2 Add:"<<endl;
    n2.displayadd();
    return 0;

}