#include <iostream>
using namespace std;

class Student
{
protected:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }
};

class Sports
{
protected:
    int sportsMarks;

public:
    void setSportsMarks(int s)
    {
        sportsMarks = s;
    }
};

class Result : public Student, public Sports
{
public:
    void display()
    {
        cout << "Academic Marks = " << marks << endl;
        cout << "Sports Marks = " << sportsMarks << endl;
        cout << "Total = " << marks + sportsMarks << endl;
    }
};

int main()
{
    Result r;

    r.setMarks(80);
    r.setSportsMarks(15);

    r.display();

    return 0;
}