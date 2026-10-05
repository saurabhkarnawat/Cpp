//Return current object using this 


#include<iostream>
class Student{

    private:
    int roll;
    
    public:
    Student* setRoll(int roll)
    {
        this->roll=roll;
        return this;
    }
    void display()
    {
        std::cout<< "Roll ="<< roll <<std::endl;
    }
};

int main()
{
    Student s1;
    s1.setRoll(25)->display();
    return 0;
}