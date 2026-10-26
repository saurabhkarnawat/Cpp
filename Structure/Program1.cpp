#include<iostream>

using namespace std;

struct Student
{
   int roll;
   string name;
   float marks;

};

int main()
{
    Student S1;

    S1.roll=25;
    S1.name="Saurabh";
    S1.marks=95;

    cout<<"Roll no.="<<S1.roll<<endl;
    cout<<"Name="<<S1.name<<endl;
    cout<<"marks="<<S1.marks<<endl;

    return 0;
}