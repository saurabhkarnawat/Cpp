//Method Chaining

#include<iostream>

class Student{
  private:
    int roll;
    int marks;
  public:
    Student& setRoll(int roll)
    {
        this->roll=roll;
        return *this;
    }
    Student& setMarks(int marks)
    {
        this->marks=marks;
        return *this;
    }
    void Display()
    {
        std::cout<<"Roll ="<<roll<<std::endl;
        std::cout<<"Marks ="<<marks<<std::endl;
    }
};
int main()
{
    Student s1;
    s1.setRoll(10).setMarks(95);     //Method Chaining
    s1.Display();
    return 0;
}

