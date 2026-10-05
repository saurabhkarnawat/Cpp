// Program 2 — Display address of current object

#include <iostream>

class Student
{
  public:
    void Displayadd()
    {
        std::cout<<"Address using this :"<< this <<std::endl;
    }
};

int main()
{
    Student S1;
    Student S2;
    std::cout<<"Address : "<<&S1<<std::endl;
    S1.Displayadd();
    std::cout<<"Address : "<<&S2<<std::endl;
    S2.Displayadd();
}