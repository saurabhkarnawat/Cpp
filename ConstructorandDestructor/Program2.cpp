// Parameterized Constructor

#include<iostream>
using namespace std;

class Student
{
  private:
  int roll;
  int marks;

  public:
  Student(int r,int m)
    {
        roll = r;
        marks = m;
    }
   void display()
    {
        cout<<"Roll:"<<roll<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
    ~Student()
    {
        cout<<"Student Object Destroyed";
    }
};

int main()
{
    Student s1(10,85);
    s1.display();
    return 0;
}