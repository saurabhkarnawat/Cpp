#include <iostream>

class Student{
  public:
    int roll;
    float marks;
  
    void getData()
    {
        std::cout<<"Enter Roll No.:";
        std::cin>>roll;
        std::cout<<"Enter Marks:";
        std::cin>>marks;
    }

    
};
int main()
{
    Student s[5];     //Array of Objects

    for(int i=0;i<3;i++)
    {
        s[i].getData();
    }
    
    int MaxIndex=0;

    for(int j=1;j<5;j++)
        {
            if(s[j].marks > s[MaxIndex].marks)
            {
                MaxIndex = j;
            }
        }

    std::cout<<"Topper Details:"<<std::endl;
    std::cout<<"RollNo:"<<s[MaxIndex].roll<<std::endl;
    std::cout<<"Marks:"<<s[MaxIndex].marks<<std::endl;
}