/*Encapsulation: Encapsulation means combining data and the functions that operate on that data inside a single class, while controlling how the data can be accessed from outside*/


#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        if (m >= 0 && m <= 100)
            marks = m;
        else
        std::cout << "Invalid marks" <<std::endl;
    }

    void displayMarks()
    {
     std::cout << "Marks = " << marks <<std::endl;
    }
};

int main()
{
    Student s;

    s.setMarks(85);
    s.displayMarks();

    return 0;
}