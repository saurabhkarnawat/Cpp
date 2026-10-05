//Method Chaining

#include <iostream>
using namespace std;
class Student
{
  private:
    string name;
    int roll;
    float marks;
    
  public:
    Student& setName(string n)
    {
        name=n;
        return *this;
    }
    Student& setRoll(int r)
    {
        roll=r;
        return *this;
    }
    Student& setMarks(float m)
    {
        marks=m;
        return *this;
    }
    void display()
    {
        std::cout<<"Name:"<< name <<std::endl;
        std::cout<<"Roll:"<< roll <<std::endl;
        std::cout<<"Marks:"<< marks <<std::endl;
    }
};

int main()
{
    Student s1;
    s1.setName("Saurabh").setRoll(25).setMarks(95);
    s1.display();
    return 0;
}