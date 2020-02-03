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
            cout<<"\n hour --"<<hours;
            cout<<"\n min --"<<mins;
        }
        friend void sum(Time&);
};
void sum(Time& x)
{
    time_t now =time(0);
    tm *ltm2;
    ltm2=localtime(&(x.now));
    x.hours=ltm2->tm_hour+x.ltm1->tm_hour;
    x.mins=ltm2->tm_min+x.ltm1->tm_min;
}
int main()
{
    Time ob;
    sum(ob);
    ob.display();
    return 0;
}