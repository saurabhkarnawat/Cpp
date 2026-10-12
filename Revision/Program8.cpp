//Program 8: Dynamic Integer Array


#include<iostream>
#include<string>
using namespace std;
class ArrayManager
{
  public:
  int *arr= new int[5];

  void getelement()
    {
        cout<<"Enter array elements: "<<endl;
        for(int i=0;i<5;i++)
            {
                cin>>arr[i];
            }
    }

    void display()
    {
        cout<<"Array Elements are:"<<endl;
        for(int i=0;i<5;i++)
            {
                cout<<arr[i] <<endl;
            }
    }

    ~ArrayManager()
    {
        delete[] arr;
        cout<<"Memory Deleted"<<endl;
    }
};
int main()
{
    ArrayManager A;
    A.getelement();
    A.display();
    return 0;
}