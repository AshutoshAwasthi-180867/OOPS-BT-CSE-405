#include<iostream>
using namespace std;
class unary_over
{
        char alpha='A';
    public:
        void display(void)
        {
            cout<<alpha<<endl;
        }
        void operator +()
        {
            alpha=alpha+2;       
        }
};
int main()
{
    unary_over op;
    op.display();
    for(int i=0;i<9;i++)
    {
        +op;
        op.display();
    }
    return 0;
}