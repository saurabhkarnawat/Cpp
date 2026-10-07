#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Student : public Person
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    void display()
    {
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s;

    s.setPerson("Rahul", 22);
    s.setMarks(85);

    s.display();

    return 0;
}