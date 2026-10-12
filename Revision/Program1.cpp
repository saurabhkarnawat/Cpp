// Revision Program 1

#include <iostream>
#include<string>
using namespace std;

class Student
{
  private:
    string name;
    int rollno;
    float marks;

  public:
    void setName(string n)
    {
        name= n;
    }
    void setRoll(int r)
    {
        rollno = r;
    }
    void setMarks(float m)
    {
        marks = m;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll No :"<<rollno<<endl;
        cout<<"Marks :"<<marks<<endl;
    }
};
int main() {
    Student S;
    S.setName("Saurabh");
    S.setRoll(25);
    S.setMarks(95);
    S.display();
    return 0;
}