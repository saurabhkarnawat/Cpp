#include<iostream>
using namespace std;

class father
{
    public:
    void fatherproperty()
    {
        cout<<"fatherproperty"<<endl;
    }
};

class mother
{
    public:
    void motherproperty()
    {
        cout<<"Motherproperty"<<endl;    
    }
};

class child : public father, public mother
{
    public:
    void childproperty()
    {
        cout<<"ChildProperty"<<endl;
    }

};

int main()
{
    child c;
    c.fatherproperty();
    c.motherproperty();
    c.childproperty();
    return 0;
}
