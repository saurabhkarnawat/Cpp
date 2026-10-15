//Default argument in class member function

#include<iostream>

using namespace std;

class Student
{
    public:

    void display(int marks=0)
    {
        cout<<"Marks:"<<marks<<endl;
    }
};
int main()
{
   Student s1;
   s1.display();
   s1.display(55);

   return 0;
}