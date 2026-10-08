//Dynamically Creating Arrray of Objects

#include<iostream>
using namespace std;

class Student
{
   public:

   int roll;

   void getRoll()
   {
    cin>>roll;
   }

   void displayRoll()
   {
    cout<<roll;
   }
};

int main()
{
    Student* ptr = new Student[5];
    
    cout<<"Enter Roll"<<endl;
    for(int i=0;i<5;i++)
    {
        ptr[i].getRoll();
    }

    cout<<"Roll nos are"<<endl;
    for(int i=0;i<5;i++)
    {
        ptr[i].displayRoll();
    }

    delete[] ptr;

    return 0;

}