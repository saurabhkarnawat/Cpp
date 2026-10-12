//Revision Program 3 Constructor and DMA

#include<iostream>
#include<string>
using namespace std;

 class Employee
    {
        public:
        char *str =new char[8];
        Employee()
        {
            cout<<"Enter a string:";
            cin>>str;
        }
        void display()
        {
            cout<<"Name:"<<str<<endl;
        }
        ~Employee()
        {
            delete[] str;
            cout<<"Memory Deleted";
        }
    };
int main()
{
   Employee E1;
    E1.display();
    return 0;
}