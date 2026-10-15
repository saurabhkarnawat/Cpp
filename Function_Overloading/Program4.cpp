//calculate the area of the different shapes

#include<iostream>

using namespace std;

int area(int side)
{
    return side*side;
}

int area(int l,int b)
{
    return l*b;
}

double area(double r)
{
    return 3.14*r*r;
}


int main()
{
    cout<<"Square:"<<area(5)<<endl;
    cout<<"Rectangle:"<<area(5,4)<<endl;
    cout<<"Circle:"<<area(2.0)<<endl;
}