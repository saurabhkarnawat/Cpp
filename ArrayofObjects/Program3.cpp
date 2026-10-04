#include <iostream>

class Employee
{
  private:
    int id;
    float salary;

  public:
    void getdata()
    {
        std::cout<<"Enter ID and Salary";
        std::cin>>id>>salary;
    }
    void display()
    {
        std::cout<<"ID:"<<id<<std::endl;
        std::cout<<"Salary:"<<salary<<std::endl;
    }
    float getsalary()
    {
        return salary;
    }
};

int main()
{
    Employee e[3];

    for(int i=0;i<3;i++)
        {
            e[i].getdata();
        }

    int maxIndex =0;

    for(int j=1;j<3;j++)
        {
            if(e[j].getsalary() > e[maxIndex].getsalary())
            {
                maxIndex = j;
            }
        }

    std::cout<<"Employee with Highest Salary:"<<std::endl;
    e[maxIndex].display();
}