//Passing object to a function

#include <iostream>

using namespace std;

class Student;

void displayStudent(Student*); 

class Student 
{ 
    private: 
    int roll; 
    public: 
    void setRoll(int roll) 
    {
        this->roll = roll; 
    } 
    void show() 
    { 
        displayStudent(this); //passing object to func
    } 
    int getRoll() 
    { 
        return roll; 
    } 
}; 
void displayStudent(Student* s) 
{ 
    cout << "Roll = " << s->getRoll() << endl; 
} 

int main() 
{ 
    Student s1; 
    s1.setRoll(50); 
    s1.show(); 
    return 0; 
}