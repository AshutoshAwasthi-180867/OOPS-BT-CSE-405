/*   program to print system time after 15 minutes from current system time using friend function*/
#include<iostream>
#include<ctime>
using namespace std;
class Time{
        time_t now =time(0);
        tm *ltm1;
        int hours,mins;
    public:
        Time()
        {
            ltm1 =localtime(&now);
        }    
        void display()
        {
            cout<<"time after 15 minutes"<<endl;
            cout<<" hour --"<<hours;
            cout<<"\n min --"<<mins;
        }
        friend void sum(Time&);
};
void sum(Time& x)
{
    //time_t now =time(0);
    //tm *ltm2;
    //ltm2=localtime(&(x.now));
    int t,r;
    t=(x.ltm1->tm_min+15)/60;
    r=(x.ltm1->tm_min+15)%60;
    x.hours=t+x.ltm1->tm_hour;
    x.mins=r;
}
int main()
{
    Time ob;
    sum(ob);
    ob.display();
    return 0;
}