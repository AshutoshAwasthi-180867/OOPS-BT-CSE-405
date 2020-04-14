#include<iostream>
#include<conio.h>
using namespace std;

class  A
{
    protected:
        int num;  
    public:
        void get_num(int a)
        {
            num = a;
        }
        void display()
        {
            cout<<" Num = "<<num<<endl;
        }
};

class B                         //container class
{
        A obj;                    //object of class A
    public:
        B()
        {
            obj.get_num(20);
            obj.display();
        }
};

int main()
{
    B object;
    return 0;
}