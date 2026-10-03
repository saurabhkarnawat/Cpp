#include <iostream>
class student{
    private:
        int marks;
    
    public:
    void setmarks(int m);
    
    void displaymarks()
    {
        std::cout<<"Marks: "<< marks << std::endl;
    }
};
void student::setmarks(int m)
{
        if(m>=0 && m<=100)
        {
            marks =m;
        }
        else
            std::cout<<"Invalid Marks";
}

int main() {
    student s1;
    s1.setmarks(85);
    s1.displaymarks();
    return 0;
}