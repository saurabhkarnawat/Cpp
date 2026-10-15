//Access a static variable using static function

#include<iostream>

using namespace std;

class Student
{
  public:

  static int count;

  static void show()
  {
    cout<<count<<endl;
  }
};
int Student::count =100;

int main()
{
    Student::show();

    Student::count=200;

    Student::show();

    return 0;
}