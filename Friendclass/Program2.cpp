// Friend Class accesseing multiple private members

#include<iostream>
using namespace std;

class Student
{
    private:
    int roll=25;
    int marks=90;

    friend class Result;
};

class Result
{
    public:
    void display(Student s)
    {
        cout<<"Roll Num:"<<s.roll<<endl;
        cout<<"Marks:"<<s.marks<<endl;
    }

    void calculate(Student s)
    {
        if(s.marks >=40)
        {
            cout<<"Result:Pass"<<endl;
        }
        else
        cout<<"Result: Fail"<<endl;
    }

};

int main()
{
    Student s1;
    Result r1;
    r1.display(s1);
    r1.calculate(s1);

    return 0;
}
