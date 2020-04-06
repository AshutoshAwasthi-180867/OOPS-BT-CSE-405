#include<iostream>
#include<cstdio>
using namespace std;

class sum
{
    int a,b;
    public:
        void getdata()
        {
            cout<<"enter two numbers to add"<<endl;
            cin>>a>>b;
        }
        void display()
        {
            cout<<"sum of two numbers is "<<a+b<<endl;
        }
};

int main()
{
    sum ob1;
    ob1.getdata();
    ob1.display();
    return 0;
}