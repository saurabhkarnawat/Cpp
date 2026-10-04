#include <iostream>

class Student{
  private:
    int roll;
    float marks;
  public:
    void getData()
    {
        std::cout<<"Enter Roll No.:";
        std::cin>>roll;
        std::cout<<"Enter Marks:";
        std::cin>>marks;
    }

    void displayData()
    {
        std::cout<<"Roll="<<roll<<std::endl;
        std::cout<<"Marks="<<marks<<std::endl;
    }
};
int main()
{
    Student s[3];     //Array of Objects

    for(int i=0;i<3;i++)
    {
        s[i].getData();
    }
    
    for(int i=0;i<3;i++)
    {
        s[i].displayData();
    }
    return 0;
}