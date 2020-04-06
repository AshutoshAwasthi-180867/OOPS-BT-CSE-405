#include<iostream>
#include<conio.h>
using namespace std;

class Largest
{
        int a,b,c;
    public:
        void getdata()
        {
            cout<<"Enter three numbers"<<endl;
            cin>>a>>b>>c;
        }
        void display_largest()
        {
            if(a>=b && a>=c)
            {
                cout<<a<<"is Largest"<<endl;
            }
            else if(b>=a && b>=c)
            {
                cout<<b<<"is Largest"<<endl;
            }
            else if(c>=b && c>=a)
            {
                cout<<c<<"is Largest"<<endl;
            }
        }
};

int main()
{
    Largest ob1;
    ob1.getdata();
    ob1.display_largest();
    return 0;
}

