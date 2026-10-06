//Count even and odd elements of an array

#include<iostream>
using namespace std;

int main()
{
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
    int even=0;
    int odd=0;
    for(int x : arr)
        {
            if((x%2)==0)
            {
                even++;
            }
            else
                odd++;
        }
    cout<<"Even="<<even<<endl;
    cout<<"Odd="<<odd<<endl;
}