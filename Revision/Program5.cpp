//Revision Program : Passing a Object to a function 
//Method 2 :Passing address of an Object to function 

#include<iostream>
#include<string>

using namespace std;
class Rectangle
{
  public:
    int length;
    int width;
};
void calarea(Rectangle *r);


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
    calarea(&R);
    return 0;
}