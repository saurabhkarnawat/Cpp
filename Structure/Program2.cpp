//Struct with Static member

#include <iostream>
using namespace std;

struct Student
{
   int roll;
   static int count;

   Student(int r)
    {
        roll=r;
        count++;
    }
};

int Student::count =0;

int main() {

    Student s1(100);
    Student s2(101);
    Student s3(102);

    cout<<"Roll no."<<s1.roll<<endl;
    cout<<"Roll no."<<s2.roll<<endl;
    cout<<"Roll no."<<s3.roll<<endl;

    cout<<"Number of Students:"<<Student::count<<endl;
    return 0;
}