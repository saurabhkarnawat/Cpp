//Constructor and Destructor

#include<iostream>
using namespace std;

class student
{
  private:
    int marks;
  public:
    student()
    {
        marks=0;
        cout<<"Constructor called"<<endl;
    }
    void Display()
    {
        cout<<"Marks:"<<marks<<endl;
    }
    ~student()
    {
        cout<<"Destructor called";
    }
    
};

int main()
{
    student s1;
    s1.Display();
    return 0;
}