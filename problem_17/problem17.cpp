/*                Program to overload binary operator                */
#include<iostream>
using namespace std;
class binary
{
        int x;
        int y;
    public:
        void get_data(void);
        void display(void);
        binary operator+(binary t)
        {
            binary temp;
            temp.x=x+t.x;
            temp.y=y+t.y;
            return temp;
        }
};

void binary :: display(void)
{
    cout<<"result"<<endl;
    cout<<x<<endl;;
    cout<<y<<endl;
}
void binary ::get_data(void)
{
    cout<<"enter data for x and y"<<endl;
    cin>>x;
    cin>>y;
}

int main()
{
    binary t1,t2,t3;
    t1.get_data();
    t2.get_data();
    t3=t1+t2;
    t3.display();
    return 0;
}