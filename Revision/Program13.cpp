// Program 13 : Multilevel Inheritance and Constructor Destructor Sequence

#include<iostream>
using namespace std;

class Grandfather
{
    public:
  Grandfather()
    {
        cout<<"Grandfather Constructor Called"<<endl;
    }
  ~Grandfather()
    {
        cout<<"Grandfather Destructor Called"<<endl;        
    }
};

class Father : public Grandfather
{
    public:
  Father()
    {
        cout<<"father Constructor Called"<<endl;
    }
  ~Father()
    {
        cout<<"father Destructor Called"<<endl;        
    }
};

class Son : public Father
{
    public:
   Son()
    {
        cout<<"Son Constructor Called"<<endl;
    }
  ~Son()
    {
        cout<<"Son Destructor Called"<<endl;        
    } 
};
int main()
{
    Son Saurabh;
    return 0;
        
}