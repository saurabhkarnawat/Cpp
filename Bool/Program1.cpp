#include<iostream>

int main()
{
    int num;
    bool iseven;

    std::cout<<"Enter a num"<<std::endl;
    std::cin>>num;

    iseven = ((num%2)==0);

    if(iseven)
    {
        std::cout<<"Even"<<std::endl;
    }
    else
    {
        std::cout<<"Odd"<<std::endl;
    }
}