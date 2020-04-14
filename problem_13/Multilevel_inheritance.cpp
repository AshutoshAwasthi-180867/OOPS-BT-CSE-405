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

class B : public A
{   
    protected:
        int num2;
    public:
        void get_num2(int a)
        {
            num2 = a;
        }
};

class C : public B
{
    protected:
        int num3;
    public:
        void get_num3(int a)
        {
            num3 = a;
        }
        void display()
        {
            cout<<"\n\n";
            cout<<"IN CLASS C"<<endl;
            cout<<"num1 = "<<num1<<endl;
            cout<<"num2 = " <<num2<<endl;
            cout<<"num3 = "<<num3<<endl;
       }  
};

int main()
{
    C obj1;
    obj1.get_num1(5);
    obj1.get_num2(15);
    obj1.get_num3(25);
    obj1.display();
    return 0;
}