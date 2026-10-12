//Revision Program : Passing a Object to a function 
//Method 1 :Using This Pointer

#include<iostream>
#include<string>

using namespace std;
class Rectangle;
void calarea(Rectangle *r);
class Rectangle
{
  public:
    int length;
    int width;

    void getarea()
    {
        calarea(this);
    }
};
void calarea(Rectangle *r)
{
    int area=r->length * r->width;
    cout<<"Area:"<<area<<endl;
}

    

int main()
{
    Rectangle R;
    R.length=10;
    R.width=20;
    
    R.getarea();
    return 0;
}