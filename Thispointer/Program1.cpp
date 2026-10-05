#include <iostream>

class Student
    {
      private:
        int roll;
        
      public:
        void setRoll(int roll)
        {
            this->roll = roll;
        } 

        void display()
        {
            std::cout<<this->roll<<std::endl;
        }
    };
int main()
    {
        Student S1;
        S1.setRoll(25);
        S1.display();
    
        return 0;
     }