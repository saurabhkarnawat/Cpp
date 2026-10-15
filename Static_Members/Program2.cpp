//Count the number of objects Created

#include<iostream>
using namespace std;

class Student
{
 public:
 static int count;

 Student()
 {
    count++;
 }
};

int Student::count= 0;

int main()
{
    Student S1;
    Student S2;
    Student S3;

    cout<<"Number of Objects Created: "<<Student::count<<endl;

    return 0;
}