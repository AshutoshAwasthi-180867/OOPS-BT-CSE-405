#include<iostream>
#include<conio.h>
using namespace std;

class  A
{
    protected:
        int num1;  
    public:
        void get_num1(int a)
        {
            num1 = a;
        }
};

class B 
{   
    protected:
        int num2;
    public:
        void get_num2(int a)
        {
            num2 = a;
        }
};

class C : public A, public B
{
    public:
    void display()
    {
        cout<<"\n\n"<<endl;   
        cout<<" num1 = "<<num1<<endl;
        cout<<" num2 = "<<num2<<endl;
        cout<<"\n\n"<<endl;
    }
};

int main()
{
    C obj1;
    obj1.get_num1(10);
    obj1.get_num2(20);
    obj1.display();
    return 0;
}