//Object Reference and Modification 

#include<iostream>
using namespace std;
class number 
{
    public:
    int value;
};


int main()
{
    number obj;

    number &ref = obj;

    obj.value=10;

    cout<<"Obj value:"<<obj.value<<endl;
    cout<<"Ref Value:"<<ref.value<<endl;

    ref.value=50;

    cout<<"After Modification:\n";
    cout<<"Obj value:"<<obj.value<<endl;
    cout<<"Ref Value:"<<ref.value<<endl;

    return 0;
}