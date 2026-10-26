//Friend Function

#include<iostream>

using namespace std;

class Number
{
    private:
    int marks;

    public:
    Number()
    {
        marks=90;
    }
    friend void display(Number n);
};

void display(Number n)
{
    cout<<"Marks:"<<n.marks<<endl;
}

int main()
{
    Number n1;
    display(n1);

    return 0;
}