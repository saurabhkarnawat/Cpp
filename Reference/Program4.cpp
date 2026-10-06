//Refernce with array 

#include<iostream>
using namespace std;

void display(int (&arr)[5])
{
    for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<endl;
        }
}
int main()
{
    int array[5] ={20,30,40,50,60};
    display(array);
    
    return 0;
}