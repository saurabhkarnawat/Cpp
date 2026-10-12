// Program 12 : Ambiguity

#include<iostream>
using namespace std;

class Sports
{
  public:
    int score=50;
    
    void display()
    {
      cout<<"Sports Score:"<<score<<endl;  
    }
};

class Academics
{
  public:
    int score=55;

    void display()
    {
        cout<<"Academics Score:"<<score<<endl;
    }
};

class Student : public Sports, public Academics
{
    
};
int main()
{
    Student S1;
    S1.Academics::display();
    S1.Sports::display();
    return 0;
        
}