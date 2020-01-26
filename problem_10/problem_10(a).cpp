#include<iostream>
using namespace std;
class Item
{
        int x;
        int y;
    public:
        Item()
        {
            x=2;
            y=3;
            cout<<"\n\n   default constructor called   \n\n";
        }
        Item(int a)
        {
            x=a;
            y=0;
            cout<<"\n\n   constructor with 1 parameter called   \n\n";
        }
        Item(int a,int b)
        {
            x=a;
            y=b;
            cout<<"\n\n   constructor with 2 parameter  called   \n\n";
        }
        void show(void)
        {
            cout<<"\n  x = "<<x<<endl; 
            cout<<"\n  y = "<<y<<endl;
        }
};
int main()
{
    Item t1;
    t1.show();
    Item t2(4);
    t2.show();
    Item t3(7,8);
    t3.show();
    return 0;
}