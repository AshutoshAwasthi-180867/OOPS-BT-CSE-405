#include<iostream>
using namespace std;
class Square
{
        int x;
    public:
        void getdata(void)
        {
            cout<<"\n\n    enter value of x    \n\n"<<endl;
            cin>>x;
        }

        inline int squared(void)
        {
            return x*x;
        }
};
int main()
{
    int res;
    Square t;
    t.getdata();
    res=t.squared();
    cout<<"result = "<<res<<endl;
    return 0;

}